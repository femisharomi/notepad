/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-29
 * Repository: develop
 * Description: The source file of the notepad class of the Notepad Widget
 **********************************
 */
#include "notepad.hpp"
#include "./ui_notepad.h"

Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Notepad)
{
    ui->setupUi(this);

    connect(ui->actionBold, &QAction::triggered, this, &Notepad::on_actionBold_triggered);
    connect(ui->actionUnderline, &QAction::triggered, this, &Notepad::on_actionUnderline_triggered);
    connect(ui->actionItalic, &QAction::triggered, this, &Notepad::on_actionItalic_triggered);

     //Can be used as a signal or method so ignore warning on this line
    connect(this, &QMainWindow::close, this, &Notepad::on_actionExit_triggered);

    Notepad::setDarkTheme();
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionNewDocument_triggered()
{
    if(isTextModified)
    {
        // Check if saveAs was canceled and the file is still unsaved
        if (currFilename.isEmpty() || currFilename.at(currFilename.length() - 1) == unsavedCheck) {
            // Ask the user if they want to close the window without saving
            QMessageBox::StandardButton reply = QMessageBox::question(this,
                                                                      "Unsaved Changes",
                                                                      "Do you want to create a new document without saving?",
                                                                      QMessageBox::Yes | QMessageBox::No);

            // User chose not to close without saving
            if (reply == QMessageBox::No)
            {
                Notepad::on_actionSaveAsDocument_triggered();
                return;
            }
        }
    }

    currentFile.clear();
    ui->textEdit->setText(QString());

    // Set the default font after clearing the text
    ui->textEdit->document()->setDefaultFont(QFont()); // Set to the default font

    // Clear formatting (bold, italic, underline)
    Notepad::resetFormatting();

    // Move the cursor to the end of the text
    ui->textEdit->moveCursor(QTextCursor::End);

    // Take a copy of the last time the text was saved. to compare to when
    QString newText = ui->textEdit->toHtml();
    Notepad::updateLastSavedText(newText);
    isTextSaved = true;
    isTextModified = false;
    setWindowTitle("");
    Notepad::updateWindowTitle();
}


void Notepad::on_actionOpenDocument_triggered()
{
    if(isTextModified)
    {
        // Check if saveAs was canceled and the file is still unsaved
        if (currFilename.isEmpty() || currFilename.at(currFilename.length() - 1) == unsavedCheck) {
            // Ask the user if they want to close the window without saving
            QMessageBox::StandardButton reply = QMessageBox::question(this,
                                                                      "Unsaved Changes",
                                                                      "Do you want to open a document without saving?",
                                                                      QMessageBox::Yes | QMessageBox::No);

            // User chose not to close without saving
            if (reply == QMessageBox::No)
            {
                Notepad::on_actionSaveAsDocument_triggered();
                return;
            }
        }
    }

    QString filename = QFileDialog::getOpenFileName(this, "Open the file");

    if(filename.isEmpty()) return;

    QFile file(filename);
    currentFile = filename;

    if(!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
    }
    // Clear formatting (bold, italic, underline)
    Notepad::resetFormatting();

    currFilename = QFileInfo(file).fileName();
    setWindowTitle(currFilename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);

    // Keep a copy of the last time the text was saved.
    ui->textEdit->moveCursor(QTextCursor::End);
    Notepad::updateLastSavedText(text);
    currentDateTime = QDateTime::currentDateTime();

    file.close();

    isTextSaved = true;
    isTextModified = false;
    Notepad::updateWindowTitle();
}

void Notepad::on_actionSaveDocument_triggered()
{
    QString filename;
    if(currentFile.isEmpty()) {
        filename = QFileDialog::getSaveFileName(this, "Save");
        if(filename.isEmpty()) return;
        currentFile = filename;
    }
    else
    {
        filename = currentFile;
    }

    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    currFilename = QFileInfo(file).fileName();
    setWindowTitle(currFilename);
    ui->textEdit->moveCursor(QTextCursor::End);
    QTextStream out(&file);
    QString text = ui->textEdit->toHtml();
    out << text;

    // Keep a copy of the last time the text was saved.
    Notepad::updateLastSavedText(text);
    currentDateTime = QDateTime::currentDateTime();

    file.close();
    isTextSaved = true;
    isTextModified = false;
    Notepad::updateWindowTitle();
}

void Notepad::on_actionSaveAsDocument_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as");
    if(filename.isEmpty()) return;

    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    //Always updates the currentFile attribute to the name of the file were working with
    currentFile = filename;

    //The section below updates the panels title & then the contents of the editor buffer is converted to plain text, and then written to outstream
    currFilename = QFileInfo(file).fileName();
    setWindowTitle(currFilename);
    ui->textEdit->moveCursor(QTextCursor::End);
    QTextStream out(&file);
    QString text = ui->textEdit->toHtml();
    out << text;

    // Keep a copy of the last time the text was saved.
    Notepad::updateLastSavedText(text);
    currentDateTime = QDateTime::currentDateTime();

    file.close();
    isTextSaved = true;
    isTextModified = false;
    Notepad::updateWindowTitle();
}

void Notepad::on_actionPrintDocument_triggered()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev, this);
    if(dialog.exec() == QDialog::Rejected) return;
#endif //QT_CONFIG(printdialog)
    ui->textEdit->print(&printDev);
#endif //QT_CONFIG(printer)
}

void Notepad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void Notepad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void Notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void Notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void Notepad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void Notepad::on_actionSystem_Info_triggered()
{
    QMessageBox::about(this, tr("About Notepad"),
                       tr("The <b>Notepad</b> example demonstrates how to code a basic "
                          "text editor using QtWidgets"));
}

void Notepad::on_actionFont_triggered()
{
    // Get the current font of the selected text
    QTextCharFormat currentFormat = ui->textEdit->textCursor().charFormat();

    // Display the font dialog with the current font
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, currentFormat.font(), this);

    // If a font is selected, update the font of the selected text
    if (fontSelected) {
        // Set the font for the selected text range
        currentFormat.setFont(font);
        ui->textEdit->textCursor().mergeCharFormat(currentFormat);
    }
}

void Notepad::on_actionBold_triggered(bool isBold)
{
    isBold ? ui->textEdit->setFontWeight(QFont::Bold) : ui->textEdit->setFontWeight(QFont::Normal);
}

void Notepad::on_actionItalic_triggered(bool isItalic)
{
    ui->textEdit->setFontItalic(isItalic);
}

void Notepad::on_actionUnderline_triggered(bool isUnderlined)
{
    ui->textEdit->setFontUnderline(isUnderlined);
}

void Notepad::on_actionExit_triggered()
{
    if(isTextModified)
    {
        // Check if saveAs was canceled and the file is still unsaved
        if (currFilename.isEmpty() || currFilename.at(currFilename.length() - 1) == unsavedCheck) {
            // Ask the user if they want to close the window without saving
            QMessageBox::StandardButton reply = QMessageBox::question(this,
                                                                      "Unsaved Changes",
                                                                      "Do you want to close the window without saving?",
                                                                      QMessageBox::Yes | QMessageBox::No);

            // User chose not to close without saving
            if (reply == QMessageBox::No)
            {
                Notepad::on_actionSaveAsDocument_triggered();
                return;
            }
        }
    }

    QApplication::quit(); // Closes the application safely
}

void Notepad::closeEvent(QCloseEvent *event)
{
    // Prevent the default close event handling & call the programs own exit function
    event->ignore();
    Notepad::on_actionExit_triggered();
}

void Notepad::on_textEdit_textChanged()
{
    QString currText;

    // Take a copy of the current changes to the document.
    !isTextSaved ? currText = ui->textEdit->toPlainText() : currText = ui->textEdit->toHtml();

    if(lastSavedText.contains(currText))
    {
        isTextSaved = true;
        isTextModified = false;
        updateWindowTitle();
    }
    else
    {
        isTextModified = true;
        isTextSaved = false;
        updateWindowTitle();
    }
}

void Notepad::updateWindowTitle()
{
    if(currFilename.isEmpty())
    {
        if(isTextModified)
        {
            // Sets the warning label that there may be unsaved changes
            ui->warningLabel->setText("Warning: Unsaved Changes!");
            ui->warningLabel->setStyleSheet("color: rgb(255, 0, 0); font: 400 13pt 'Helvetica';");
        }
        else
        {
            ui->warningLabel->setText("");
        }
        return;
    }

    QChar lastchar;

    if(currFilename.isEmpty() == false)
    {
        lastchar = currFilename.at(currFilename.length()-1);
    }

    if(isTextModified)
    {
        // Sets the warning label that there may be unsaved changes
        ui->warningLabel->setText("Warning: Unsaved Changes!");
        ui->warningLabel->setStyleSheet("color: rgb(255, 0, 0); font: 400 13pt 'Helvetica';");

        if(lastchar != unsavedCheck)
        {
            currFilename += '*';
            setWindowTitle(currFilename);
        }
    }
    else if(isTextSaved)
    {
        // set a message so the user can see the last time the document was saved. Also, sets the colour of the text to green.
        ui->warningLabel->setStyleSheet("color: rgb(0, 255, 0); font: 400 13pt 'Helvetica';");
        ui->warningLabel->setText("Last Saved at: " + currentDateTime.toString("hh:mm:ss dd-MM-yyyy"));

        QChar lastchar;
        lastchar = currFilename.at(currFilename.length()-1);

        if(lastchar == unsavedCheck)
        {
            currFilename.removeAt(currFilename.length()-1);
        }

        setWindowTitle(currFilename);
    }
}

void Notepad::updateLastSavedText(const QString &txt)
{
    lastSavedText = txt;
}

void Notepad::resetFormatting()
{
    // Clear formatting (bold, italic, underline)
    ui->actionBold->setChecked(false);
    ui->actionItalic->setChecked(false);
    ui->actionUnderline->setChecked(false);
    ui->textEdit->setFontWeight(QFont::Normal);
    ui->textEdit->setFontItalic(false);
    ui->textEdit->setFontUnderline(false);
}


void Notepad::on_actionLight_Dark_Mode_triggered()
{
    if(isDarkTheme)
    {
        Notepad::setLightTheme();
    }
    else
    {
        Notepad::setDarkTheme();
    }

}

void Notepad::setDarkTheme()
{
    qApp->setStyle(QStyleFactory::create("Fusion"));

    // Set application palette
    QPalette appPalette = qApp->palette();
    appPalette.setColor(QPalette::Window, QColor(47,47,47));
    appPalette.setColor(QPalette::WindowText, Qt::white);
    qApp->setPalette(appPalette);

    // Set QTextEdit palette
    QPalette textEditPalette = ui->textEdit->palette();
    textEditPalette.setColor(QPalette::Base, Qt::darkGray);
    textEditPalette.setColor(QPalette::Text, Qt::white);
    ui->textEdit->setPalette(textEditPalette);

    isDarkTheme = true;
}

void Notepad::setLightTheme()
{
    qApp->setStyle(QStyleFactory::create("Fusion"));

    // Set application palette
    QPalette appPalette = qApp->palette();
    appPalette.setColor(QPalette::Window, QColor(245,245,220));
    appPalette.setColor(QPalette::WindowText, Qt::black);
    qApp->setPalette(appPalette);

    // Set QTextEdit palette
    QPalette textEditPalette = ui->textEdit->palette();
    textEditPalette.setColor(QPalette::Base, Qt::white);
    textEditPalette.setColor(QPalette::Text, Qt::black);
    ui->textEdit->setPalette(textEditPalette);

    isDarkTheme = false;
}
