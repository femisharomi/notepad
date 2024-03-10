/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-29
 * Repository: develop
 * Description: The header file of the notepad class for the Notepad Widget
 **********************************
 */
#ifndef NOTEPAD_HPP
#define NOTEPAD_HPP

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QFontDialog>
#include <QCloseEvent>
#include <QStyleFactory>

QT_BEGIN_NAMESPACE
namespace Ui {
class Notepad;
}
QT_END_NAMESPACE

/*
 * Class: Notepad
 * Located: notepad.hpp file
 * Description: This class represents the main window of the Notepad application, derived from QMainWindow.
 *              It provides a user interface for text editing and various document-related actions.
*/
class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    /*
     * Located: notepad.hpp file
     * Parameters: QWidget pointer representing the parent widget (default is nullptr).
     * Description: Constructor for the Notepad class. Initializes a Notepad object with an optional parent widget.
    */
    Notepad(QWidget *parent = nullptr);

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Destructor for the Notepad class. Destroys the Notepad object when it goes out of scope.
    */
    ~Notepad();

private slots:
    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Clears the current document, allowing the user to start a new one.
    */
    void on_actionNewDocument_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Opens a document by prompting the user to select a file.
    */
    void on_actionOpenDocument_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Saves the current document to the existing file.
    */
    void on_actionSaveDocument_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Saves the current document to a new file by prompting the user to choose a location.
    */
    void on_actionSaveAsDocument_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Prints the current document.
    */
    void on_actionPrintDocument_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Undoes the last action performed in the text editor.
    */
    void on_actionUndo_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Redoes the last undone action in the text editor.
    */
    void on_actionRedo_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Cuts the selected text from the document.
    */
    void on_actionCut_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Copies the selected text to the clipboard.
    */
    void on_actionCopy_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Pastes the contents of the clipboard into the document.
    */
    void on_actionPaste_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Displays system information about the application.
    */
    void on_actionSystem_Info_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Opens a font dialog to allow the user to change the text font.
    */
    void on_actionFont_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: bool isBold - Indicates whether the selected text should be bold.
     * Description: Applies or removes bold formatting to the selected text.
    */
    void on_actionBold_triggered(bool isBold);

    /*
     * Located: notepad.hpp file
     * Parameters: bool isItalic - Indicates whether the selected text should be italicized.
     * Description: Applies or removes italic formatting to the selected text.
    */
    void on_actionItalic_triggered(bool isItalic);

    /*
     * Located: notepad.hpp file
     * Parameters: bool isUnderlined - Indicates whether the selected text should be underlined.
     * Description: Applies or removes underline formatting to the selected text.
    */
    void on_actionUnderline_triggered(bool isUnderlined);

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Exits the application.
    */
    void on_actionExit_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Triggered when the text in the editor is changed. Updates the UI and document status.
    */
    void on_textEdit_textChanged();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Updates the window title based on the current file and document status.
    */
    void updateWindowTitle();

    /*
     * Located: notepad.hpp file
     * Parameters: const QString &txt - The text to be displayed as the last saved status.
     * Description: Updates the UI to display the last saved status.
    */
    void updateLastSavedText(const QString &txt);

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Resets the formatting of the selected text to default.
    */
    void resetFormatting();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Triggered when the "Light/Dark Mode" action is selected. Sets the application theme to light mode.
    */
    void on_actionLight_Dark_Mode_triggered();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Sets the application theme to light mode.
    */
    void setLightTheme();

    /*
     * Located: notepad.hpp file
     * Parameters: N/A
     * Description: Sets the application theme to dark mode.
    */
    void setDarkTheme();

private:
    // Pointer to the user interface components of the Notepad application.
    Ui::Notepad *ui;

    // Stores the path of the currently opened file.
    QString currentFile;

    // Stores the name of the current file (excluding the path).
    QString currFilename;

    // Indicates whether the text content in the editor has been modified.
    bool isTextModified = false;

    // Indicates whether the current document is saved.
    bool isTextSaved = false;

    // Character used to mark unsaved changes in the document.
    const QChar unsavedCheck = '*';

    // Stores the last saved content of the document.
    QString lastSavedText;

    // Stores the current date and time.
    QDateTime currentDateTime;

    // Indicates whether the application is in dark mode.
    bool isDarkTheme;

protected:
    /*
     * Located: notepad.hpp file
     * Parameters: QCloseEvent pointer representing the close event.
     * Description: Overrides the closeEvent function to handle the closing event of the application.
    */
    void closeEvent(QCloseEvent *event) override;

};
#endif // NOTEPAD_HPP
