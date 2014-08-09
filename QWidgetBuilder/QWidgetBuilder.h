#ifndef QWIDGETBUILDER_H
#define QWIDGETBUILDER_H

#include <QObject>
#include <QString>
#include <QtWidgets/QWidget>
#include <assert.h>
#include "QUiBuilder.h"

class QUiComponent;

class QWidgetBuilder : public QUiBuilder
{
public:
    QWidgetBuilder();
    ~QWidgetBuilder();

public:
    bool InitUi( QWidget* pWidget, QUiComponent* pUiComponent );
};

#endif  // QWIDGETBUILDER_H