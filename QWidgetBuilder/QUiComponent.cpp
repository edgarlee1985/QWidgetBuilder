#include "QUiComponent.h"

QUiComponent::QUiComponent()
{

}

QUiComponent::~QUiComponent()
{

}

void QUiComponent::ConnectUi( QWidget* parent )
{
    QMetaObject::connectSlotsByName( parent );
}
