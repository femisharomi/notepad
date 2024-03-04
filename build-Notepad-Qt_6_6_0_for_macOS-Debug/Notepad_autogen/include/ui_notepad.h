/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *newDocument;
    QAction *openDocument;
    QAction *saveDocument;
    QAction *saveAsDocument;
    QAction *printDocument;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionEmoji_Symbols;
    QAction *actionSystem_Info;
    QAction *actionHelp;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(1090, 730);
        newDocument = new QAction(Notepad);
        newDocument->setObjectName("newDocument");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("document-new")));
        newDocument->setIcon(icon);
        newDocument->setIconVisibleInMenu(false);
        openDocument = new QAction(Notepad);
        openDocument->setObjectName("openDocument");
        saveDocument = new QAction(Notepad);
        saveDocument->setObjectName("saveDocument");
        saveAsDocument = new QAction(Notepad);
        saveAsDocument->setObjectName("saveAsDocument");
        printDocument = new QAction(Notepad);
        printDocument->setObjectName("printDocument");
        actionExit = new QAction(Notepad);
        actionExit->setObjectName("actionExit");
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName("actionUndo");
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName("actionRedo");
        actionCut = new QAction(Notepad);
        actionCut->setObjectName("actionCut");
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName("actionCopy");
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName("actionPaste");
        actionDelete = new QAction(Notepad);
        actionDelete->setObjectName("actionDelete");
        actionEmoji_Symbols = new QAction(Notepad);
        actionEmoji_Symbols->setObjectName("actionEmoji_Symbols");
        actionSystem_Info = new QAction(Notepad);
        actionSystem_Info->setObjectName("actionSystem_Info");
        actionHelp = new QAction(Notepad);
        actionHelp->setObjectName("actionHelp");
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1090, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        Notepad->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(newDocument);
        menuFile->addAction(openDocument);
        menuFile->addSeparator();
        menuFile->addAction(saveDocument);
        menuFile->addAction(saveAsDocument);
        menuFile->addSeparator();
        menuFile->addAction(printDocument);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEmoji_Symbols);
        menuAbout->addAction(actionSystem_Info);
        menuAbout->addSeparator();
        menuAbout->addAction(actionHelp);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        newDocument->setText(QCoreApplication::translate("Notepad", "New", nullptr));
#if QT_CONFIG(shortcut)
        newDocument->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        openDocument->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        saveDocument->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        saveAsDocument->setText(QCoreApplication::translate("Notepad", "Save as", nullptr));
        printDocument->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
        actionDelete->setText(QCoreApplication::translate("Notepad", "Delete", nullptr));
        actionEmoji_Symbols->setText(QCoreApplication::translate("Notepad", "Emoji and Symbols", nullptr));
        actionSystem_Info->setText(QCoreApplication::translate("Notepad", "System Info", nullptr));
        actionHelp->setText(QCoreApplication::translate("Notepad", "Help", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Notepad", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
