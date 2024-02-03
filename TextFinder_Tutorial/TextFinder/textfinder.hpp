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

private:

    //This value is the UI object
    Ui::TextFinder *ui;

    /*
     * Function Name: loadTextFile()
     * Param: N/A
     * Description: Function to load in the file from a local txt file and
     *              display it in the ui box called: textEdit
    */
    void loadTextFile();
};
#endif // TEXTFINDER_HPP
