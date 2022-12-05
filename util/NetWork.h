#pragma once
#include <QtNetwork>
namespace NYUtil{
    namespace Network{
        QNetworkAccessManager * accessManager();
        int statusCode(QNetworkReply *reply);
    }
}
