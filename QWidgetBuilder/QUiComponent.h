#ifndef QUICOMPONENT_H
#define QUICOMPONENT_H

#include <QObject>
#include <QWidget>

class QUiBuilder;

class QUiComponent : public QObject
{
    Q_OBJECT
public:
    QUiComponent();
    virtual ~QUiComponent();

public:
    virtual void InitUiComponent( QUiBuilder* pUiLoader ) = 0;
    void ConnectUi( QWidget* parent );
};
#endif  // QUICOMPONENT_H