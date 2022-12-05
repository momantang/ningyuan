#include "NetWork.h"
namespace NYUtil{
	namespace Network{

		Q_GLOBAL_STATIC(QNetworkAccessManager,nam)
		QNetworkAccessManager* accessManager()
		{
			return nam();
		}
		int statusCode(QNetworkReply* reply)
		{
			return reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
		}
	}
}