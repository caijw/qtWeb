#include "browser.h"

const QString WebRuntime::Browser::storageName = "webRuntime";

WebRuntime::Browser::Browser()
{
    UrlSchemeHandler::registerUrlScheme();
    if(!m_otrProfile) {
        m_otrProfile.reset(new QWebEngineProfile);
    }
    auto profile = m_otrProfile.get();
    profile->installUrlSchemeHandler(UrlSchemeHandler::schemeName, &urlSchemeHandler);

}

WebRuntime::WebView *WebRuntime::Browser::createWebview(QUrl url){
    auto profile = m_otrProfile.get();
    auto webview = new WebView();
    WebPage *webPage = new WebPage(profile, webview);
    webview->resize(414, 736);
    webview->setPage(webPage);
    m_webviews.append(webview);
    webview->show();
    webview->setUrl(url);
    webview->setFocus();
    return webview;
}
