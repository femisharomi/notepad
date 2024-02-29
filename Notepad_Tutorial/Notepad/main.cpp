/*
 **********************************
 * Author: Femi Sharomi
 * Date Created: 2024-02-29
 * Repository: develop
 * Description:
 **********************************
 */
#include "notepad.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Notepad w;
    w.show();
    return a.exec();
}
