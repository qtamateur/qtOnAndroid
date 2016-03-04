//#include <QGuiApplication>
#include <QtQuick/QQuickView>
#include <QtGui/QGuiApplication>
//#include <QtQml>
#include "colormaker.h"

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);
    qmlRegisterType<ColorMaker>("an.qt.ColorMaker",1,0,"ColorMaker");

    QQuickView viewer;
    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer.setSource(QUrl("qrc:///main.qml"));
    viewer.show();

    return a.exec();
}
