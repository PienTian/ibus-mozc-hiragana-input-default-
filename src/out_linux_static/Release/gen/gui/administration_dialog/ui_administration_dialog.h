/********************************************************************************
** Form generated from reading UI file 'administration_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATION_DIALOG_H
#define UI_ADMINISTRATION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AdministrationDialog
{
public:
    QDialogButtonBox *AdministrationDialogbuttonBox;
    QLabel *usageStatsMessage;
    QCheckBox *usageStatsCheckBox;
    QCheckBox *CacheServiceEnabledcheckBox;
    QCheckBox *ElevatedProcessDisabledcheckBox;

    void setupUi(QDialog *AdministrationDialog)
    {
        if (AdministrationDialog->objectName().isEmpty())
            AdministrationDialog->setObjectName(QString::fromUtf8("AdministrationDialog"));
        AdministrationDialog->resize(475, 170);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdministrationDialog->sizePolicy().hasHeightForWidth());
        AdministrationDialog->setSizePolicy(sizePolicy);
        AdministrationDialog->setMinimumSize(QSize(475, 170));
        AdministrationDialog->setMaximumSize(QSize(475, 170));
        AdministrationDialogbuttonBox = new QDialogButtonBox(AdministrationDialog);
        AdministrationDialogbuttonBox->setObjectName(QString::fromUtf8("AdministrationDialogbuttonBox"));
        AdministrationDialogbuttonBox->setGeometry(QRect(20, 130, 441, 32));
        AdministrationDialogbuttonBox->setOrientation(Qt::Horizontal);
        AdministrationDialogbuttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        usageStatsMessage = new QLabel(AdministrationDialog);
        usageStatsMessage->setObjectName(QString::fromUtf8("usageStatsMessage"));
        usageStatsMessage->setGeometry(QRect(30, 10, 431, 51));
        usageStatsMessage->setWordWrap(true);
        usageStatsCheckBox = new QCheckBox(AdministrationDialog);
        usageStatsCheckBox->setObjectName(QString::fromUtf8("usageStatsCheckBox"));
        usageStatsCheckBox->setGeometry(QRect(10, 20, 21, 21));
        CacheServiceEnabledcheckBox = new QCheckBox(AdministrationDialog);
        CacheServiceEnabledcheckBox->setObjectName(QString::fromUtf8("CacheServiceEnabledcheckBox"));
        CacheServiceEnabledcheckBox->setGeometry(QRect(10, 70, 432, 17));
        ElevatedProcessDisabledcheckBox = new QCheckBox(AdministrationDialog);
        ElevatedProcessDisabledcheckBox->setObjectName(QString::fromUtf8("ElevatedProcessDisabledcheckBox"));
        ElevatedProcessDisabledcheckBox->setGeometry(QRect(10, 100, 451, 17));
        sizePolicy.setHeightForWidth(ElevatedProcessDisabledcheckBox->sizePolicy().hasHeightForWidth());
        ElevatedProcessDisabledcheckBox->setSizePolicy(sizePolicy);
        QWidget::setTabOrder(usageStatsCheckBox, CacheServiceEnabledcheckBox);
        QWidget::setTabOrder(CacheServiceEnabledcheckBox, ElevatedProcessDisabledcheckBox);
        QWidget::setTabOrder(ElevatedProcessDisabledcheckBox, AdministrationDialogbuttonBox);

        retranslateUi(AdministrationDialog);
        QObject::connect(AdministrationDialogbuttonBox, SIGNAL(accepted()), AdministrationDialog, SLOT(accept()));
        QObject::connect(AdministrationDialogbuttonBox, SIGNAL(rejected()), AdministrationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdministrationDialog);
    } // setupUi

    void retranslateUi(QDialog *AdministrationDialog)
    {
        AdministrationDialog->setWindowTitle(QCoreApplication::translate("AdministrationDialog", "[ProductName] administrator settings", nullptr));
        usageStatsMessage->setText(QCoreApplication::translate("AdministrationDialog", "Help make [ProductName] better by automatically sending usage statistics and crash reports to Google (changes will take effect after you log out and log back in)", nullptr));
        usageStatsCheckBox->setText(QString());
        CacheServiceEnabledcheckBox->setText(QCoreApplication::translate("AdministrationDialog", "Always allocate conversion dictionary into physical memory", nullptr));
        ElevatedProcessDisabledcheckBox->setText(QCoreApplication::translate("AdministrationDialog", "Disable [ProductName] for UAC-elevated applications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministrationDialog: public Ui_AdministrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATION_DIALOG_H
