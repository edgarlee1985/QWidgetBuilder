#ifndef FORM3_H
#define FORM3_H

#include <QtWidgets>
#include "QUiComponent.h"
class QUiBuilder;
class CForm3 : public QUiComponent
{
public:
    CForm3();
    ~CForm3();

public:
    virtual void InitUiComponent( QUiBuilder* pUiBuilder );

public:
    QLabel* m_label;
    QVBoxLayout* m_verticalLayout;
    QAction* m_actionT1;

};

#endif
