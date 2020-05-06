#ifndef BROWSER_H
#define BROWSER_H

#include <QVector>
#include <QWebEngineProfile>
#include "webview.h"
#include "urlschemehandler.h"
class WebView;

namespace WebRuntime {

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
    UrlSchemeHandler urlSchemeHandler;
};

}


#endif // BROWSER_H
