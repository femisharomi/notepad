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

private:
    Ui::Notepad *ui;
    QString currentFile;
};
#endif // NOTEPAD_HPP
