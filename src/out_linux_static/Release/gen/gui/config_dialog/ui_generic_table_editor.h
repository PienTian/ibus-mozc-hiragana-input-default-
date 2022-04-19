/********************************************************************************
** Form generated from reading UI file 'generic_table_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERIC_TABLE_EDITOR_H
#define UI_GENERIC_TABLE_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GenericTableEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTableWidget *editorTableWidget;
    QPushButton *editButton;
    QDialogButtonBox *editorButtonBox;

    void setupUi(QDialog *GenericTableEditorDialog)
    {
        if (GenericTableEditorDialog->objectName().isEmpty())
            GenericTableEditorDialog->setObjectName(QString::fromUtf8("GenericTableEditorDialog"));
        GenericTableEditorDialog->resize(324, 344);
        verticalLayout = new QVBoxLayout(GenericTableEditorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, -1, -1, -1);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, -1, -1);
        editorTableWidget = new QTableWidget(GenericTableEditorDialog);
        editorTableWidget->setObjectName(QString::fromUtf8("editorTableWidget"));
        editorTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        gridLayout->addWidget(editorTableWidget, 1, 0, 1, 4);

        editButton = new QPushButton(GenericTableEditorDialog);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy);
        editButton->setMinimumSize(QSize(80, 0));
        editButton->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(editButton, 2, 0, 1, 1);

        editorButtonBox = new QDialogButtonBox(GenericTableEditorDialog);
        editorButtonBox->setObjectName(QString::fromUtf8("editorButtonBox"));
        editorButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(editorButtonBox, 2, 1, 1, 3);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(GenericTableEditorDialog);

        QMetaObject::connectSlotsByName(GenericTableEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *GenericTableEditorDialog)
    {
        GenericTableEditorDialog->setWindowTitle(QCoreApplication::translate("GenericTableEditorDialog", "[ProductName]", nullptr));
        editButton->setText(QCoreApplication::translate("GenericTableEditorDialog", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenericTableEditorDialog: public Ui_GenericTableEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERIC_TABLE_EDITOR_H
