#include "QUiBuilder.h"

QUiBuilder::QUiBuilder()
: m_pkLoadedWidget( nullptr )
{
}

QUiBuilder::~QUiBuilder()
{
}

void QUiBuilder::SetUiPath( QString strUiPath )
{
    m_strUiPath = strUiPath;
}

void QUiBuilder::SetPluginPath( QString strPluginPath )
{
    m_strPluginPath = strPluginPath;
}

bool QUiBuilder::InitializeLoader( QString strUiResName, QWidget* pkParent, QString strPluginPath )
{
    if ( !pkParent )
    {
        return false;
    }

    QUiLoader kLoader;
    if ( false == strPluginPath.isEmpty() )
    {
        kLoader.addPluginPath( strPluginPath );
    }

    QFile kFile( strUiResName );
    if( !kFile.open( QFile::ReadOnly ) )
    {
        return false;
    }

    m_pkLoadedWidget = kLoader.load( &kFile, pkParent );
    if ( !m_pkLoadedWidget )
    {
        return false;
    }
    kFile.close();

    return true;
}