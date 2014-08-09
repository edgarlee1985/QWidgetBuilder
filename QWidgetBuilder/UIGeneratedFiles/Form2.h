#ifndef FORM2_H
#define FORM2_H

#include <QtWidgets>
#include "QUiComponent.h"
class QUiBuilder;
class CForm2 : public QUiComponent
{
public:
    CForm2();
    ~CForm2();

public:
    virtual void InitUiComponent( QUiBuilder* pUiBuilder );

public:
    QLabel* m_label;
    QVBoxLayout* m_verticalLayout;
    QAction* m_actionT1;

};

#endif
