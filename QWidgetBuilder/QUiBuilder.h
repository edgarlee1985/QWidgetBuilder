#ifndef QUIBUILDER_H
#define QUIBUILDER_H

#include <QtWidgets>
#include <QUiLoader>

class QUiBuilder
{
public:
    QUiBuilder();
    virtual ~QUiBuilder();

public:
    void SetUiPath( QString strUiPath );
    void SetPluginPath( QString strPluginPath );

    bool InitializeLoader( QString strUiResName, QWidget* pkParent, QString strPluginPath = "" );

    template< typename T > T* GetWidgetPointer( QString strObjName )
    {
        return m_pkLoadedWidget->findChild< T* >( strObjName );
    }

protected:
    QString         m_strUiPath;
    QString         m_strPluginPath;
    QWidget*        m_pkLoadedWidget;
};

#endif // QUIBUILDER_H
