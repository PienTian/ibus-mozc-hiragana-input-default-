/********************************************************************************
** Form generated from reading UI file 'find_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_DIALOG_H
#define UI_FIND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *Querylabel;
    QLineEdit *QuerylineEdit;
    QPushButton *FindBackwardpushButton;
    QPushButton *FindForwardpushButton;
    QPushButton *CancelpushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName(QString::fromUtf8("FindDialog"));
        FindDialog->resize(400, 85);
        FindDialog->setMinimumSize(QSize(400, 85));
        FindDialog->setMaximumSize(QSize(400, 85));
        gridLayout_2 = new QGridLayout(FindDialog);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Querylabel = new QLabel(FindDialog);
        Querylabel->setObjectName(QString::fromUtf8("Querylabel"));

        gridLayout->addWidget(Querylabel, 0, 0, 1, 1);

        QuerylineEdit = new QLineEdit(FindDialog);
        QuerylineEdit->setObjectName(QString::fromUtf8("QuerylineEdit"));
        QuerylineEdit->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(QuerylineEdit, 0, 1, 1, 3);

        FindBackwardpushButton = new QPushButton(FindDialog);
        FindBackwardpushButton->setObjectName(QString::fromUtf8("FindBackwardpushButton"));

        gridLayout->addWidget(FindBackwardpushButton, 2, 1, 1, 1);

        FindForwardpushButton = new QPushButton(FindDialog);
        FindForwardpushButton->setObjectName(QString::fromUtf8("FindForwardpushButton"));

        gridLayout->addWidget(FindForwardpushButton, 2, 2, 1, 1);

        CancelpushButton = new QPushButton(FindDialog);
        CancelpushButton->setObjectName(QString::fromUtf8("CancelpushButton"));

        gridLayout->addWidget(CancelpushButton, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(QuerylineEdit, FindForwardpushButton);
        QWidget::setTabOrder(FindForwardpushButton, FindBackwardpushButton);
        QWidget::setTabOrder(FindBackwardpushButton, CancelpushButton);

        retranslateUi(FindDialog);

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QCoreApplication::translate("FindDialog", "[ProductName] Dictionary Find Dialog", nullptr));
        Querylabel->setText(QCoreApplication::translate("FindDialog", "Reading or Word:", nullptr));
        FindBackwardpushButton->setText(QCoreApplication::translate("FindDialog", "Up", nullptr));
        FindForwardpushButton->setText(QCoreApplication::translate("FindDialog", "Down", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("FindDialog", "Cacnel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_DIALOG_H
