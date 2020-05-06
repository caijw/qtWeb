#ifndef URLSCHEMEHANDLER_H
#define URLSCHEMEHANDLER_H

#include <QWebEngineUrlSchemeHandler>
#include <QWebEngineUrlRequestJob>
#include <QWebEngineUrlScheme>
#include <QFile>
#include <QApplication>

namespace WebRuntime {

class UrlSchemeHandler : public QWebEngineUrlSchemeHandler
{
    Q_OBJECT
public:
    explicit UrlSchemeHandler(QObject *parent = nullptr);

    void requestStarted(QWebEngineUrlRequestJob *job) override;

    static void registerUrlScheme();

    const static QByteArray schemeName;
    const static QUrl aboutUrl;
};


}


#endif // URLSCHEMEHANDLER_H
