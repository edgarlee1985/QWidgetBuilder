#include "Form2.h"
#include "QUiBuilder.h"

CForm2::CForm2()
: QUiComponent()
, m_label( nullptr )
, m_verticalLayout( nullptr )
, m_actionT1( nullptr )
{
}

CForm2::~CForm2()
{

}

void CForm2::InitUiComponent( QUiBuilder* pUiBuilder )
{
    m_verticalLayout = pUiBuilder->GetWidgetPointer< QVBoxLayout >( "verticalLayout" );
    m_label = pUiBuilder->GetWidgetPointer< QLabel >( "label" );
    m_actionT1 = pUiBuilder->GetWidgetPointer< QAction >( "actionT1" );
}

