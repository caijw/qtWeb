#ifndef BROWSER_H
#define BROWSER_H

#include <QVector>
#include <QWebEngineProfile>
#include "webview.h"

class WebView;

class Browser
{
public:
    Browser();
    QVector<WebView*> webviews() { return m_webviews; }
    WebView *createWebview(QUrl url);
private:
    QVector<WebView*> m_webviews;
    QScopedPointer<QWebEngineProfile> m_otrProfile;
    static const QString storageName;
};

#endif // BROWSER_H
