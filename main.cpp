// main.cpp
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "CustomModel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<CustomModel>("CustomTypes", 1, 0, "CustomModel");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
