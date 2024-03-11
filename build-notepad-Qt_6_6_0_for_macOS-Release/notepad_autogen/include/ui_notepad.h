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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionOpenDocument;
    QAction *actionSaveDocument;
    QAction *actionSaveAsDocument;
    QAction *actionPrintDocument;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSystem_Info;
    QAction *actionNewDocument;
    QAction *actionFont;
    QAction *actionItalic;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionLight_Dark_Mode;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QLabel *warningLabel;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(1059, 628);
        actionOpenDocument = new QAction(Notepad);
        actionOpenDocument->setObjectName("actionOpenDocument");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenDocument->setIcon(icon);
        actionSaveDocument = new QAction(Notepad);
        actionSaveDocument->setObjectName("actionSaveDocument");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveDocument->setIcon(icon1);
        actionSaveAsDocument = new QAction(Notepad);
        actionSaveAsDocument->setObjectName("actionSaveAsDocument");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAsDocument->setIcon(icon2);
        actionPrintDocument = new QAction(Notepad);
        actionPrintDocument->setObjectName("actionPrintDocument");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrintDocument->setIcon(icon3);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName("actionExit");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName("actionUndo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName("actionRedo");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName("actionCut");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName("actionCopy");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon8);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName("actionPaste");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionSystem_Info = new QAction(Notepad);
        actionSystem_Info->setObjectName("actionSystem_Info");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSystem_Info->setIcon(icon10);
        actionNewDocument = new QAction(Notepad);
        actionNewDocument->setObjectName("actionNewDocument");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewDocument->setIcon(icon11);
        actionFont = new QAction(Notepad);
        actionFont->setObjectName("actionFont");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon12);
        actionFont->setMenuRole(QAction::NoRole);
        actionItalic = new QAction(Notepad);
        actionItalic->setObjectName("actionItalic");
        actionItalic->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon13);
        actionItalic->setMenuRole(QAction::NoRole);
        actionBold = new QAction(Notepad);
        actionBold->setObjectName("actionBold");
        actionBold->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon14);
        actionBold->setMenuRole(QAction::NoRole);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName("actionUnderline");
        actionUnderline->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon15);
        actionUnderline->setMenuRole(QAction::NoRole);
        actionLight_Dark_Mode = new QAction(Notepad);
        actionLight_Dark_Mode->setObjectName("actionLight_Dark_Mode");
        actionLight_Dark_Mode->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/light_dark_mode.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLight_Dark_Mode->setIcon(icon16);
        actionLight_Dark_Mode->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        warningLabel = new QLabel(centralwidget);
        warningLabel->setObjectName("warningLabel");
        warningLabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(warningLabel);

        Notepad->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1059, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        Notepad->setMenuBar(menubar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName("toolBar");
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNewDocument);
        menuFile->addAction(actionOpenDocument);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveDocument);
        menuFile->addAction(actionSaveAsDocument);
        menuFile->addSeparator();
        menuFile->addAction(actionPrintDocument);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuAbout->addAction(actionSystem_Info);
        menuAbout->addSeparator();
        toolBar->addAction(actionNewDocument);
        toolBar->addAction(actionOpenDocument);
        toolBar->addAction(actionSaveDocument);
        toolBar->addAction(actionSaveAsDocument);
        toolBar->addAction(actionPrintDocument);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderline);
        toolBar->addSeparator();
        toolBar->addAction(actionSystem_Info);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);
        toolBar->addSeparator();
        toolBar->addAction(actionLight_Dark_Mode);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionOpenDocument->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenDocument->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveDocument->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveDocument->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAsDocument->setText(QCoreApplication::translate("Notepad", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveAsDocument->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrintDocument->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrintDocument->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSystem_Info->setText(QCoreApplication::translate("Notepad", "System Info", nullptr));
        actionNewDocument->setText(QCoreApplication::translate("Notepad", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNewDocument->setToolTip(QCoreApplication::translate("Notepad", "New", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNewDocument->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("Notepad", "Font", nullptr));
#if QT_CONFIG(tooltip)
        actionFont->setToolTip(QCoreApplication::translate("Notepad", "Font", nullptr));
#endif // QT_CONFIG(tooltip)
        actionItalic->setText(QCoreApplication::translate("Notepad", "Italic", nullptr));
#if QT_CONFIG(tooltip)
        actionItalic->setToolTip(QCoreApplication::translate("Notepad", "Italic", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("Notepad", "Bold", nullptr));
#if QT_CONFIG(tooltip)
        actionBold->setToolTip(QCoreApplication::translate("Notepad", "Bold", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("Notepad", "Underline", nullptr));
#if QT_CONFIG(tooltip)
        actionUnderline->setToolTip(QCoreApplication::translate("Notepad", "Underline", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLight_Dark_Mode->setText(QCoreApplication::translate("Notepad", "Light/Dark Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionLight_Dark_Mode->setToolTip(QCoreApplication::translate("Notepad", "Light/Dark Mode", nullptr));
#endif // QT_CONFIG(tooltip)
        warningLabel->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Notepad", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
