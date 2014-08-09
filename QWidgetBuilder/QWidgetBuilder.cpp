#include "QWidgetBuilder.h"
#include "QUiLoader.h"
#include "QUiComponent.h"

QWidgetBuilder::QWidgetBuilder()
{
}

QWidgetBuilder::~QWidgetBuilder()
{
}

bool QWidgetBuilder::InitUi( QWidget* pWidget, QUiComponent* pUiComponent )
{
    if ( !pWidget || !pUiComponent )
    {
        return false;
    }
    
    if ( !InitializeLoader( m_strUiPath, pWidget, m_strPluginPath ) )
    {
        return false;
    }

    pWidget->setWindowTitle( m_pkLoadedWidget->windowTitle() );
    pWidget->setObjectName( m_strUiPath );

    pUiComponent->InitUiComponent( this );
    pUiComponent->ConnectUi( pWidget );

    return true;
}
