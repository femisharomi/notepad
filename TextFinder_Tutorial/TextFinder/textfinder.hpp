/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-03
 * Repository: develop
 * Description: Header file containing the applications functions and variables definitions.
 **********************************
 */
#ifndef TEXTFINDER_HPP
#define TEXTFINDER_HPP

#include <QWidget>
#include "./ui_textfinder.h"
#include <QFile>
#include <QTextStream>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui {
class TextFinder;
}
QT_END_NAMESPACE

class TextFinder : public QWidget
{
    Q_OBJECT

public:
    /*
     * Function Name: TextFinder(QWidget *parent)
     * Param: N/A
     * Description: Constructor
    */
    TextFinder(QWidget *parent = nullptr);

    /*
     * Function Name: ~TextFinder()
     * Param: N/A
     * Description: Destructor
    */
    ~TextFinder();

private slots:
    /*
     * Function Name: on_findButton_clicked()
     * Param: N/A
     * Description: Function to run the search for a keyword once the find
     *              button has been clicked by a user
    */
    void on_findButton_clicked();

    /*
     * Function Name: on_nextButton_clicked()
     * Param: N/A
     * Description: Function to go to the next word found
    */
    void on_nextButton_clicked();

    /*
     * Function Name: on_backButton_clicked()
     * Param: N/A
     * Description: Function to go to the last word found
    */
    void on_backButton_clicked();

    /*
     * Function Name: on_resetButton_clicked()
     * Param: N/A
     * Description: Function to reset the search for a keyword once the find
     *              button has been clicked by a user
    */
    void on_resetButton_clicked();

private:

    //This value is the UI object
    Ui::TextFinder *ui;

    // Declare a QVector to store the positions of found occurrences
    QVector<QTextCursor> foundPositions;

    // Value to keep track of the currentPosition
    int currentPositionIndex = 0;

    /*
     * Function Name: loadTextFile()
     * Param: N/A
     * Description: Function to load in the file from a local txt file and
     *              display it in the ui box called: textEdit
    */
    void loadTextFile();
};
#endif // TEXTFINDER_HPP
