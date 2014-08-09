#include "Form1.h"
#include "QUiBuilder.h"

CForm1::CForm1()
: QUiComponent()
, m_label( nullptr )
, m_verticalLayout( nullptr )
, m_actionT1( nullptr )
{
}

CForm1::~CForm1()
{

}

void CForm1::InitUiComponent( QUiBuilder* pUiBuilder )
{
    m_verticalLayout = pUiBuilder->GetWidgetPointer< QVBoxLayout >( "verticalLayout" );
    m_label = pUiBuilder->GetWidgetPointer< QLabel >( "label" );
    m_actionT1 = pUiBuilder->GetWidgetPointer< QAction >( "actionT1" );
}

