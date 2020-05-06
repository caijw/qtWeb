#include "browser.h"
#include <QApplication>
#include <QWebEngineProfile>
#include <QWebEngineSettings>
#include "runtimeService/service.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("WebRuntime");
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    WebRuntime::Browser browser;
    QUrl url = QStringLiteral("wx://about");
    WebRuntime::WebView *webview = browser.createWebview(url);
    WebRuntime::Service &service = WebRuntime::Service::getInstance();

    service.hello();

    return app.exec();
}
