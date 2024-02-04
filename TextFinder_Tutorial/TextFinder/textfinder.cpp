/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-03
 * Repository: develop
 * Description: Source code containing the applications logic.
 **********************************
 */
#include "textfinder.hpp"

TextFinder::TextFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile();
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();

    // Clear the existing found positions
    foundPositions.clear();

    // Find occurrences of searchString in the textEdit
    int count = 0;
    QTextCursor cursor(ui->textEdit->document());

    while (!cursor.isNull()) {
        cursor = ui->textEdit->document()->find(searchString, cursor, QTextDocument::FindWholeWords);
        if (!cursor.isNull()) {
            count++;
            // Store the position of the found occurrence
            foundPositions.append(cursor);
            cursor.movePosition(QTextCursor::NextWord);
        }
    }

    // Update the count_lcd
    ui->count_lcd->display(count);

    // Highlight the occurrences in the textEdit
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

void TextFinder::on_nextButton_clicked()
{
    if (!foundPositions.isEmpty()) {
        // Ensure currentPositionIndex is within bounds
        if (currentPositionIndex >= 0 && currentPositionIndex < foundPositions.size()) {
            // Move the cursor to the next found position
            QTextCursor nextPosition = foundPositions[currentPositionIndex];
            ui->textEdit->setTextCursor(nextPosition);

            // Increment the current position index
            currentPositionIndex++;

            // Reset the current position index to the beginning if it reaches the end
            if (currentPositionIndex == foundPositions.size()) {
                currentPositionIndex = 0;
            }
        }
    }
}

void TextFinder::on_backButton_clicked()
{
    if (!foundPositions.isEmpty()) {
        // Ensure currentPositionIndex is within bounds
        if (currentPositionIndex > 0 && currentPositionIndex <= foundPositions.size()) {
            // Decrement the current position index
            currentPositionIndex--;

            // Move the cursor to the previous found position
            QTextCursor previousPosition = foundPositions[currentPositionIndex];
            ui->textEdit->setTextCursor(previousPosition);
        } else {
            // If currentPositionIndex is already at the beginning, wrap to the end
            currentPositionIndex = foundPositions.size() - 1;

            // Move the cursor to the last found position
            QTextCursor lastPosition = foundPositions[currentPositionIndex];
            ui->textEdit->setTextCursor(lastPosition);
        }
    }
}

void TextFinder::on_resetButton_clicked()
{
    // Close the current instance of the application
    qApp->exit(0);

    // Optionally, if you want to start a new instance, you can use QProcess
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

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
