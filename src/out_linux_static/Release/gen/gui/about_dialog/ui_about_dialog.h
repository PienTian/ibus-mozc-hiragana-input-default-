/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QFrame *color_frame;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_credits;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_terms;
    QSpacerItem *horizontalSpacer_5;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *version_label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(490, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(490, 250));
        AboutDialog->setMaximumSize(QSize(490, 250));
        color_frame = new QFrame(AboutDialog);
        color_frame->setObjectName(QString::fromUtf8("color_frame"));
        color_frame->setGeometry(QRect(-10, 120, 511, 161));
        color_frame->setFrameShape(QFrame::StyledPanel);
        color_frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(color_frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 90, 91, 32));
        gridLayoutWidget_2 = new QWidget(color_frame);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 10, 471, 82));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(10);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_credits = new QLabel(gridLayoutWidget_2);
        label_credits->setObjectName(QString::fromUtf8("label_credits"));
        label_credits->setFont(font);

        gridLayout_3->addWidget(label_credits, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label_terms = new QLabel(gridLayoutWidget_2);
        label_terms->setObjectName(QString::fromUtf8("label_terms"));
        label_terms->setFont(font);

        gridLayout_3->addWidget(label_terms, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 2, 1, 1, 1);

        gridLayoutWidget = new QWidget(AboutDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 471, 99));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        version_label = new QLabel(gridLayoutWidget);
        version_label->setObjectName(QString::fromUtf8("version_label"));
        version_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(version_label, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 2);


        retranslateUi(AboutDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), AboutDialog, SLOT(accept()));
        QObject::connect(label_credits, SIGNAL(linkActivated(QString)), AboutDialog, SLOT(linkActivated(QString)));
        QObject::connect(label_terms, SIGNAL(linkActivated(QString)), AboutDialog, SLOT(linkActivated(QString)));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About [ProductName]", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutDialog", "OK", nullptr));
        label_6->setText(QCoreApplication::translate("AboutDialog", "Copyright \302\251 2020 Google Inc. All rights reserved.", nullptr));
        label_credits->setText(QCoreApplication::translate("AboutDialog", "<html><body>[ProductName] is made possible by <a href=\"file://credits_en.html\"><span style=\" text-decoration: underline; color:#0000ff;\">open source software</span></a>.</body></html>", nullptr));
        label_terms->setText(QCoreApplication::translate("AboutDialog", "<html><body>[ProductName] <a href=\"[ProductUrl]\"><span style=\" text-decoration: underline; color:#0000ff;\">product information</span></a> <a href=\"[ForumUrl]\"><span style=\" text-decoration: underline; color:#0000ff;\">[ForumName]</span></a></body></html>", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "[ProductName]", nullptr));
        version_label->setText(QCoreApplication::translate("AboutDialog", "0.0.0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
