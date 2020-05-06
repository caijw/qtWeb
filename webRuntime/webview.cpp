#include "webview.h"

WebRuntime::WebView::WebView(QWidget *parent)
    : QWebEngineView(parent)
{

}

void WebRuntime::WebView::setPage(WebPage *page)
{
    QWebEngineView::setPage(page);
}
