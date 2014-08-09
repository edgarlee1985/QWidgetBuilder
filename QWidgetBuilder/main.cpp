#include <QtWidgets/QApplication>
#include <QResource>

#include "DynamicUIWidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if ( QResource::registerResource("/Resources/mainwindow.rcc") )
    {
        return -1;
    }
    CDynamicUIWidget* pDynWidget = new CDynamicUIWidget;
    pDynWidget->show();
    return a.exec();
}
