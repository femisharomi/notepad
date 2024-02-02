#include <QGuiApplication>
#include <QQmlApplicationEngine>

// Main function
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/QtQuickAppTute/Main.qml"_qs);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
/*
 * Author: Femi Sharomi
 * Date Created:   2024-02-02
 */


