#include "urlschemehandler.h"

#define SCHEMENAME "wx"

const QByteArray WebRuntime::UrlSchemeHandler::schemeName = QByteArrayLiteral(SCHEMENAME);
const QUrl WebRuntime::UrlSchemeHandler::aboutUrl = QUrl(QStringLiteral(SCHEMENAME "://about"));

WebRuntime::UrlSchemeHandler::UrlSchemeHandler(QObject *parent)
    : QWebEngineUrlSchemeHandler(parent)
{
}

void WebRuntime::UrlSchemeHandler::requestStarted(QWebEngineUrlRequestJob *job)
{
    static const QUrl webUiOrigin(QStringLiteral(SCHEMENAME ":"));
    static const QByteArray GET(QByteArrayLiteral("GET"));
    static const QByteArray POST(QByteArrayLiteral("POST"));

    QByteArray method = job->requestMethod();
    QUrl url = job->requestUrl();
    QUrl initiator = job->initiator();

    if (url == aboutUrl) {
        QFile *file = new QFile(QStringLiteral("/Users/jingweicai/Documents/code/qtWeb/resources/about.html"), job);
        file->open(QIODevice::ReadOnly);
        job->reply(QByteArrayLiteral("text/html"), file);
    }
}

void WebRuntime::UrlSchemeHandler::registerUrlScheme()
{
    QWebEngineUrlScheme webUiScheme(schemeName);
    webUiScheme.setFlags(QWebEngineUrlScheme::SecureScheme |
                         QWebEngineUrlScheme::LocalScheme |
                         QWebEngineUrlScheme::LocalAccessAllowed);
    QWebEngineUrlScheme::registerScheme(webUiScheme);
}
