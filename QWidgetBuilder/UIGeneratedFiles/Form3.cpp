#include "Form3.h"
#include "QUiBuilder.h"

CForm3::CForm3()
: QUiComponent()
, m_label( nullptr )
, m_verticalLayout( nullptr )
, m_actionT1( nullptr )
{
}

CForm3::~CForm3()
{

}

void CForm3::InitUiComponent( QUiBuilder* pUiBuilder )
{
    m_verticalLayout = pUiBuilder->GetWidgetPointer< QVBoxLayout >( "verticalLayout" );
    m_label = pUiBuilder->GetWidgetPointer< QLabel >( "label" );
    m_actionT1 = pUiBuilder->GetWidgetPointer< QAction >( "actionT1" );
}

