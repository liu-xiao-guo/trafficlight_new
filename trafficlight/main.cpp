#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>

#include <trafficlight.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<TrafficLight>("Light", 1,0, "TrafficLight");

    int count = 3;

    QQuickView view;
    view.setSource(QUrl(QStringLiteral("qrc:///Main.qml")));    
    view.setResizeMode(QQuickView::SizeRootObjectToView);

    view.rootContext()->setContextProperty("total", QVariant::fromValue(count));

    view.show();
    return app.exec();
}

