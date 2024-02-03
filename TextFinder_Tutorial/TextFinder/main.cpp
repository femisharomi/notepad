/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-03
 * Repository: develop
 * Description: The main program running the application.
 **********************************
 */
#include "textfinder.hpp"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "TextFinder_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    TextFinder w;
    w.show();
    return a.exec();
}
