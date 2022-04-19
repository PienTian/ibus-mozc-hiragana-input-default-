/********************************************************************************
** Form generated from reading UI file 'word_register_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_REGISTER_DIALOG_H
#define UI_WORD_REGISTER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_WordRegisterDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *WordlineEdit;
    QLineEdit *ReadinglineEdit;
    QComboBox *PartOfSpeechcomboBox;
    QComboBox *DictionarycomboBox;
    QLabel *Wordlabel;
    QLabel *ReadingLabel;
    QLabel *PartOfSpeechlabel;
    QLabel *Dictionarylabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *WordRegisterDialogbuttonBox;
    QPushButton *LaunchDictionaryToolpushButton;

    void setupUi(QDialog *WordRegisterDialog)
    {
        if (WordRegisterDialog->objectName().isEmpty())
            WordRegisterDialog->setObjectName(QString::fromUtf8("WordRegisterDialog"));
        WordRegisterDialog->resize(340, 180);
        WordRegisterDialog->setMinimumSize(QSize(340, 180));
        WordRegisterDialog->setMaximumSize(QSize(340, 180));
        gridLayout_2 = new QGridLayout(WordRegisterDialog);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        WordlineEdit = new QLineEdit(WordRegisterDialog);
        WordlineEdit->setObjectName(QString::fromUtf8("WordlineEdit"));

        gridLayout->addWidget(WordlineEdit, 0, 1, 1, 3);

        ReadinglineEdit = new QLineEdit(WordRegisterDialog);
        ReadinglineEdit->setObjectName(QString::fromUtf8("ReadinglineEdit"));

        gridLayout->addWidget(ReadinglineEdit, 1, 1, 1, 3);

        PartOfSpeechcomboBox = new QComboBox(WordRegisterDialog);
        PartOfSpeechcomboBox->setObjectName(QString::fromUtf8("PartOfSpeechcomboBox"));

        gridLayout->addWidget(PartOfSpeechcomboBox, 2, 1, 1, 2);

        DictionarycomboBox = new QComboBox(WordRegisterDialog);
        DictionarycomboBox->setObjectName(QString::fromUtf8("DictionarycomboBox"));

        gridLayout->addWidget(DictionarycomboBox, 3, 1, 1, 3);

        Wordlabel = new QLabel(WordRegisterDialog);
        Wordlabel->setObjectName(QString::fromUtf8("Wordlabel"));

        gridLayout->addWidget(Wordlabel, 0, 0, 1, 1);

        ReadingLabel = new QLabel(WordRegisterDialog);
        ReadingLabel->setObjectName(QString::fromUtf8("ReadingLabel"));

        gridLayout->addWidget(ReadingLabel, 1, 0, 1, 1);

        PartOfSpeechlabel = new QLabel(WordRegisterDialog);
        PartOfSpeechlabel->setObjectName(QString::fromUtf8("PartOfSpeechlabel"));

        gridLayout->addWidget(PartOfSpeechlabel, 2, 0, 1, 1);

        Dictionarylabel = new QLabel(WordRegisterDialog);
        Dictionarylabel->setObjectName(QString::fromUtf8("Dictionarylabel"));

        gridLayout->addWidget(Dictionarylabel, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 4);

        WordRegisterDialogbuttonBox = new QDialogButtonBox(WordRegisterDialog);
        WordRegisterDialogbuttonBox->setObjectName(QString::fromUtf8("WordRegisterDialogbuttonBox"));
        WordRegisterDialogbuttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(WordRegisterDialogbuttonBox, 5, 2, 1, 2);

        LaunchDictionaryToolpushButton = new QPushButton(WordRegisterDialog);
        LaunchDictionaryToolpushButton->setObjectName(QString::fromUtf8("LaunchDictionaryToolpushButton"));
        LaunchDictionaryToolpushButton->setMinimumSize(QSize(140, 0));
        LaunchDictionaryToolpushButton->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(LaunchDictionaryToolpushButton, 5, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(WordlineEdit, ReadinglineEdit);
        QWidget::setTabOrder(ReadinglineEdit, PartOfSpeechcomboBox);
        QWidget::setTabOrder(PartOfSpeechcomboBox, DictionarycomboBox);
        QWidget::setTabOrder(DictionarycomboBox, LaunchDictionaryToolpushButton);
        QWidget::setTabOrder(LaunchDictionaryToolpushButton, WordRegisterDialogbuttonBox);

        retranslateUi(WordRegisterDialog);

        QMetaObject::connectSlotsByName(WordRegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *WordRegisterDialog)
    {
        WordRegisterDialog->setWindowTitle(QCoreApplication::translate("WordRegisterDialog", "[ProductName] Word Register Dialog", nullptr));
        Wordlabel->setText(QCoreApplication::translate("WordRegisterDialog", "Word", nullptr));
        ReadingLabel->setText(QCoreApplication::translate("WordRegisterDialog", "Reading", nullptr));
        PartOfSpeechlabel->setText(QCoreApplication::translate("WordRegisterDialog", "Part of Speech", nullptr));
        Dictionarylabel->setText(QCoreApplication::translate("WordRegisterDialog", "Dictionary", nullptr));
        LaunchDictionaryToolpushButton->setText(QCoreApplication::translate("WordRegisterDialog", "Edit user dictionary...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordRegisterDialog: public Ui_WordRegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_REGISTER_DIALOG_H
