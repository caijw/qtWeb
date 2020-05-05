#include "browser.h"

#include <QApplication>
#include <QWebEngineProfile>
#include <QWebEngineSettings>

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("WebRuntime");
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    Browser browser;
    QUrl url = QStringLiteral("https://www.baidu.com");

    WebView *webview = browser.createWebview(url);

    return app.exec();
}
