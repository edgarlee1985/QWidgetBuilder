#include "DynamicUIWidget.h"

CDynamicUIWidget::CDynamicUIWidget()
{
    m_kBuilder.SetUiPath( ":ui/Form1.ui" );
    m_kBuilder.SetPluginPath( "" );
    m_kBuilder.InitUi( this, &ui );
}

CDynamicUIWidget::~CDynamicUIWidget()
{
}