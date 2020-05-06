#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <QWebEngineView>
#include "browser.h"
#include "webpage.h"

class WebPage;

namespace WebRuntime {

class WebView : public QWebEngineView
{
    Q_OBJECT
public:
    WebView(QWidget *parent = nullptr);
    void setPage(WebPage *page);
};

}



#endif // WEBVIEW_H
