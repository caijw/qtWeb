#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QWebEnginePage>

namespace WebRuntime {

class WebPage : public QWebEnginePage
{
    Q_OBJECT
public:
    WebPage(QWebEngineProfile *profile, QObject *parent = nullptr);
};

}



#endif // WEBPAGE_H
