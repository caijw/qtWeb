#include "webview.h"

WebView::WebView(QWidget *parent)
    : QWebEngineView(parent)
{

}

void WebView::setPage(WebPage *page)
{
    QWebEngineView::setPage(page);
}
