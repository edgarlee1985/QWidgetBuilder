#pragma once

#include <QWidget>
#include "QWidgetBuilder.h"

#include "UIGeneratedFiles/Form1.h"

class CDynamicUIWidget : public QWidget
{
public:
    CDynamicUIWidget();
    ~CDynamicUIWidget();

protected:
    QWidgetBuilder m_kBuilder;
    CForm1 ui;
};