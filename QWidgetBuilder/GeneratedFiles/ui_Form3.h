/********************************************************************************
** Form generated from reading UI file 'Form3.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM3_H
#define UI_FORM3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form3
{
public:
    QAction *actionT1;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *Form3)
    {
        if (Form3->objectName().isEmpty())
            Form3->setObjectName(QStringLiteral("Form3"));
        Form3->resize(400, 300);
        actionT1 = new QAction(Form3);
        actionT1->setObjectName(QStringLiteral("actionT1"));
        verticalLayout = new QVBoxLayout(Form3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Form3);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(Form3);

        QMetaObject::connectSlotsByName(Form3);
    } // setupUi

    void retranslateUi(QWidget *Form3)
    {
        Form3->setWindowTitle(QApplication::translate("Form3", "Form", 0));
        actionT1->setText(QApplication::translate("Form3", "t1", 0));
        label->setText(QApplication::translate("Form3", "Widget 3", 0));
    } // retranslateUi

};

namespace Ui {
    class Form3: public Ui_Form3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM3_H
