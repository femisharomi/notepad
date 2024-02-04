/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-04
 * Repository: develop
 * Description:
 **********************************
 */
/********************************************************************************
** Form generated from reading UI file 'textfinder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFINDER_H
#define UI_TEXTFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFinder
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *matching_label;
    QLCDNumber *count_lcd;
    QHBoxLayout *horizontalLayout;
    QLabel *keyword_label;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QPushButton *nextButton;
    QPushButton *backButton;
    QPushButton *resetButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *TextFinder)
    {
        if (TextFinder->objectName().isEmpty())
            TextFinder->setObjectName("TextFinder");
        TextFinder->resize(1004, 754);
        layoutWidget = new QWidget(TextFinder);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 30, 711, 681));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        matching_label = new QLabel(layoutWidget);
        matching_label->setObjectName("matching_label");

        horizontalLayout_2->addWidget(matching_label);

        count_lcd = new QLCDNumber(layoutWidget);
        count_lcd->setObjectName("count_lcd");
        count_lcd->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(count_lcd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        keyword_label = new QLabel(layoutWidget);
        keyword_label->setObjectName("keyword_label");

        horizontalLayout->addWidget(keyword_label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        findButton = new QPushButton(layoutWidget);
        findButton->setObjectName("findButton");

        horizontalLayout->addWidget(findButton);

        nextButton = new QPushButton(layoutWidget);
        nextButton->setObjectName("nextButton");

        horizontalLayout->addWidget(nextButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName("backButton");

        horizontalLayout->addWidget(backButton);

        resetButton = new QPushButton(layoutWidget);
        resetButton->setObjectName("resetButton");

        horizontalLayout->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        retranslateUi(TextFinder);

        QMetaObject::connectSlotsByName(TextFinder);
    } // setupUi

    void retranslateUi(QWidget *TextFinder)
    {
        TextFinder->setWindowTitle(QCoreApplication::translate("TextFinder", "TextFinder", nullptr));
        matching_label->setText(QCoreApplication::translate("TextFinder", "Matching: ", nullptr));
        keyword_label->setText(QCoreApplication::translate("TextFinder", "Keyword: ", nullptr));
        findButton->setText(QCoreApplication::translate("TextFinder", "Find", nullptr));
        nextButton->setText(QCoreApplication::translate("TextFinder", "Next", nullptr));
        backButton->setText(QCoreApplication::translate("TextFinder", "Back", nullptr));
        resetButton->setText(QCoreApplication::translate("TextFinder", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextFinder: public Ui_TextFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDER_H
