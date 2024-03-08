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

QT_BEGIN_NAMESPACE
namespace Ui {
class Notepad;
}
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void on_actionNewDocument_triggered();

    void on_actionOpenDocument_triggered();

    void on_actionSaveDocument_triggered();

    void on_actionSaveAsDocument_triggered();

    void on_actionPrintDocument_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionSystem_Info_triggered();

    void on_actionFont_triggered();

    void on_actionBold_triggered(bool isBold);

    void on_actionItalic_triggered(bool isItalic);

    void on_actionUnderline_triggered(bool isUnderlined);

    void on_actionExit_triggered();

    void on_textEdit_textChanged();

    void updateWindowTitle();

    void updateLastSavedText(const QString &txt);

    void resetFormatting();

    void on_actionLight_Dark_Mode_triggered();

private:
    Ui::Notepad *ui;
    QString currentFile;
    QString currFilename;
    bool isTextModified = false;
    bool isTextSaved = false;
    const QChar unsavedCheck = '*';
    QString lastSavedText;
    QDateTime currentDateTime;

protected:
    void closeEvent(QCloseEvent *event) override;

};
#endif // NOTEPAD_HPP
