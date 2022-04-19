/********************************************************************************
** Form generated from reading UI file 'set_default_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_DEFAULT_DIALOG_H
#define UI_SET_DEFAULT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SetDefaultDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *dontAskAgainCheckBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *yesNobuttonBox;

    void setupUi(QDialog *SetDefaultDialog)
    {
        if (SetDefaultDialog->objectName().isEmpty())
            SetDefaultDialog->setObjectName(QString::fromUtf8("SetDefaultDialog"));
        SetDefaultDialog->resize(400, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetDefaultDialog->sizePolicy().hasHeightForWidth());
        SetDefaultDialog->setSizePolicy(sizePolicy);
        SetDefaultDialog->setMinimumSize(QSize(400, 150));
        SetDefaultDialog->setMaximumSize(QSize(498, 150));
        gridLayout_2 = new QGridLayout(SetDefaultDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SetDefaultDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 3);

        dontAskAgainCheckBox = new QCheckBox(SetDefaultDialog);
        dontAskAgainCheckBox->setObjectName(QString::fromUtf8("dontAskAgainCheckBox"));

        gridLayout->addWidget(dontAskAgainCheckBox, 2, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        yesNobuttonBox = new QDialogButtonBox(SetDefaultDialog);
        yesNobuttonBox->setObjectName(QString::fromUtf8("yesNobuttonBox"));
        yesNobuttonBox->setOrientation(Qt::Horizontal);
        yesNobuttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        yesNobuttonBox->setCenterButtons(true);

        gridLayout->addWidget(yesNobuttonBox, 3, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(SetDefaultDialog);
        QObject::connect(yesNobuttonBox, SIGNAL(accepted()), SetDefaultDialog, SLOT(accept()));
        QObject::connect(yesNobuttonBox, SIGNAL(rejected()), SetDefaultDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetDefaultDialog);
    } // setupUi

    void retranslateUi(QDialog *SetDefaultDialog)
    {
        SetDefaultDialog->setWindowTitle(QCoreApplication::translate("SetDefaultDialog", "[ProductName]", nullptr));
        label->setText(QCoreApplication::translate("SetDefaultDialog", "[ProductName] isn't your default IME.\n"
"Do you want to use [ProductName] as the default IME?", nullptr));
        dontAskAgainCheckBox->setText(QCoreApplication::translate("SetDefaultDialog", "Don't ask again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetDefaultDialog: public Ui_SetDefaultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_DEFAULT_DIALOG_H
