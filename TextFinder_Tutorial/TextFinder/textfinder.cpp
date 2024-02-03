/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-03
 * Repository: develop
 * Description: Source code containing the applications logic.
 **********************************
 */
#include "textfinder.hpp"
#include "./ui_textfinder.h"
#include <QFile>
#include <QTextStream>

/*
 * Function Name: TextFinder(QWidget *parent)
 * Param: N/A
 * Description: Constructor
*/
TextFinder::TextFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile();
}

/*
 * Function Name: ~TextFinder()
 * Param: N/A
 * Description: Destructor
*/
TextFinder::~TextFinder()
{
    delete ui;
}

/*
 * Function Name: on_findButton_clicked()
 * Param: N/A
 * Description: Function to run the search for a keyword once the find
 *              button has been clicked by a user
*/
void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

/*
 * Function Name: loadTextFile()
 * Param: N/A
 * Description: Function to load in the file from a local txt file and
 *              display it in the ui box called: textEdit
*/
void TextFinder::loadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line =in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

