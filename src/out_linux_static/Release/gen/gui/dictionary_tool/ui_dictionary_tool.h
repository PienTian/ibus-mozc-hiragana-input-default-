/********************************************************************************
** Form generated from reading UI file 'dictionary_tool.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICTIONARY_TOOL_H
#define UI_DICTIONARY_TOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "gui/dictionary_tool/dictionary_content_table_widget.h"
#include "gui/dictionary_tool/zero_width_splitter.h"

QT_BEGIN_NAMESPACE

class Ui_DictionaryTool
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    ZeroWidthSplitter *splitter_;
    QListWidget *dic_list_;
    DictionaryContentTableWidget *dic_content_;
    QToolBar *toolbar_;
    QStatusBar *statusbar_;

    void setupUi(QMainWindow *DictionaryTool)
    {
        if (DictionaryTool->objectName().isEmpty())
            DictionaryTool->setObjectName(QString::fromUtf8("DictionaryTool"));
        DictionaryTool->resize(700, 420);
        centralwidget = new QWidget(DictionaryTool);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_ = new ZeroWidthSplitter(centralwidget);
        splitter_->setObjectName(QString::fromUtf8("splitter_"));
        splitter_->setOrientation(Qt::Horizontal);
        dic_list_ = new QListWidget(splitter_);
        dic_list_->setObjectName(QString::fromUtf8("dic_list_"));
        splitter_->addWidget(dic_list_);
        dic_content_ = new DictionaryContentTableWidget(splitter_);
        dic_content_->setObjectName(QString::fromUtf8("dic_content_"));
        splitter_->addWidget(dic_content_);

        gridLayout->addWidget(splitter_, 0, 0, 1, 1);

        DictionaryTool->setCentralWidget(centralwidget);
        toolbar_ = new QToolBar(DictionaryTool);
        toolbar_->setObjectName(QString::fromUtf8("toolbar_"));
        DictionaryTool->addToolBar(Qt::TopToolBarArea, toolbar_);
        statusbar_ = new QStatusBar(DictionaryTool);
        statusbar_->setObjectName(QString::fromUtf8("statusbar_"));
        DictionaryTool->setStatusBar(statusbar_);

        retranslateUi(DictionaryTool);

        QMetaObject::connectSlotsByName(DictionaryTool);
    } // setupUi

    void retranslateUi(QMainWindow *DictionaryTool)
    {
        DictionaryTool->setWindowTitle(QCoreApplication::translate("DictionaryTool", "[ProductName] Dictionary Tool", nullptr));
        toolbar_->setWindowTitle(QCoreApplication::translate("DictionaryTool", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DictionaryTool: public Ui_DictionaryTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICTIONARY_TOOL_H
