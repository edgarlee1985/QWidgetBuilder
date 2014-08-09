#ifndef FORM1_H
#define FORM1_H

#include <QtWidgets>
#include "QUiComponent.h"
class QUiBuilder;
class CForm1 : public QUiComponent
{
public:
    CForm1();
    ~CForm1();

public:
    virtual void InitUiComponent( QUiBuilder* pUiBuilder );

public:
    QLabel* m_label;
    QVBoxLayout* m_verticalLayout;
    QAction* m_actionT1;

};

#endif
