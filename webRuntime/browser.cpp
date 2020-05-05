#include "browser.h"

const QString Browser::storageName = "webRuntime";

Browser::Browser()
{
    if(!m_otrProfile) {
        m_otrProfile.reset(new QWebEngineProfile);
    }
}

WebView *Browser::createWebview(QUrl url){
    auto profile = m_otrProfile.get();
    auto webview = new WebView();
    WebPage *webPage = new WebPage(profile, webview);
    webview->resize(500, 600);
    webview->setPage(webPage);
    m_webviews.append(webview);
    webview->show();
    webview->setUrl(url);
    webview->setFocus();
    return webview;
}
