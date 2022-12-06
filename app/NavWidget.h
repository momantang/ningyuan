#include <qwidget.h>
#include <qpushbutton.h>
class NavWidget:public QWidget
{
    Q_OBJECT
public:
    /**
     * \brief 
     * \param parent 
     */
    explicit NavWidget(QWidget *parent=nullptr);
    ~NavWidget();
private:
    /* data */
    QPushButton *recordBtn=nullptr;
    QPushButton *songBtn=nullptr;
    QPushButton *controlBtn=nullptr;
    QPushButton *meBtn=nullptr;
};


