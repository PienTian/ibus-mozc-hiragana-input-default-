/********************************************************************************
** Form generated from reading UI file 'config_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_DIALOG_H
#define UI_CONFIG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/config_dialog/character_form_editor.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QWidget *centralwidget;
    QTabWidget *configDialogTabWidget;
    QWidget *basicTab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *inputModeComboBox;
    QComboBox *punctuationsSettingComboBox;
    QComboBox *symbolsSettingComboBox;
    QComboBox *spaceCharacterFormComboBox;
    QLabel *inputModeLabel;
    QLabel *PunctuationsSettingLabel;
    QLabel *symbolsSettingLabel;
    QLabel *spaceInputSettingLabel;
    QComboBox *selectionShortcutModeComboBox;
    QLabel *selectionShortcutModeLabel;
    QLabel *numpadCharacterFormLabel;
    QComboBox *numpadCharacterFormComboBox;
    QLabel *yenSignLabel;
    QComboBox *yenSignComboBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QComboBox *keymapSettingComboBox;
    QLabel *keymapSettingLabel;
    QPushButton *editKeymapButton;
    QPushButton *editRomanTableButton;
    QLabel *label_11;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *basicsLabel;
    QFrame *basicsLine;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QFrame *line_3;
    QWidget *dictionaryTab;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *clearUserHistoryButton;
    QLabel *label_7;
    QComboBox *historyLearningLevelComboBox;
    QSpacerItem *horizontalSpacer_2;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *editUserDictionaryButton;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QCheckBox *singleKanjiConversionCheckBox;
    QCheckBox *symbolConversionCheckBox;
    QCheckBox *emoticonConversionCheckBox;
    QCheckBox *t13nConversionCheckBox;
    QCheckBox *zipcodeConversionCheckBox;
    QCheckBox *spellingCorrectionCheckBox;
    QCheckBox *calculatorCheckBox;
    QCheckBox *numberConversionCheckBox;
    QCheckBox *dateConversionCheckBox;
    QCheckBox *emojiConversionCheckBox;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QFrame *line;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QFrame *line_6;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_22;
    QLabel *specialConversionLabel;
    QFrame *specialConversionLine;
    QWidget *horizontalLayoutWidget_21;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_9;
    QFrame *line_9;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_12;
    QCheckBox *localUsageDictionaryCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QWidget *inputsupport_tab;
    CharacterFormEditor *characterFormEditor;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *autoCorrectionLable;
    QFrame *autoCorrectionLine_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *autoCorrectionLable_2;
    QFrame *halffullWidthLine;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_9;
    QCheckBox *useAutoImeTurnOff;
    QLabel *autoCorrectionLable_3;
    QComboBox *shiftKeyModeSwitchComboBox;
    QCheckBox *toutenCheckBox;
    QCheckBox *questionMarkCheckBox;
    QCheckBox *useAutoConversion;
    QCheckBox *kutenCheckBox;
    QCheckBox *exclamationMarkCheckBox;
    QCheckBox *useJapaneseLayout;
    QCheckBox *useModeIndicator;
    QWidget *suggestionsTab;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QFrame *line_4;
    QWidget *horizontalLayoutWidget_14;
    QHBoxLayout *horizontalLayout_16;
    QLabel *SuggestionPreferenceLabel;
    QFrame *line_8;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_11;
    QLabel *defaultNUmberofSuggestionsLabel;
    QSpinBox *suggestionsSizeSpinBox;
    QSpacerItem *horizontalSpacer_8;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QCheckBox *historySuggestCheckBox;
    QPushButton *clearUserPredictionButton;
    QCheckBox *dictionarySuggestCheckBox;
    QPushButton *clearUnusedUserPredictionButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QCheckBox *realtimeConversionCheckBox;
    QWidget *privacyTab;
    QCheckBox *usageStatsCheckBox;
    QLabel *usageStatsMessage;
    QWidget *horizontalLayoutWidget_16;
    QHBoxLayout *horizontalLayout_18;
    QLabel *usageStatsLabel;
    QFrame *usageStatsLine;
    QWidget *horizontalLayoutWidget_18;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_10;
    QFrame *line_11;
    QCheckBox *incognitoModeCheckBox;
    QLabel *incognitoModeMessage;
    QPushButton *launchAdministrationDialogButtonForUsageStats;
    QCheckBox *presentationModeCheckBox;
    QWidget *horizontalLayoutWidget_19;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_12;
    QFrame *line_12;
    QWidget *miscTab;
    QWidget *widgetMisc;
    QVBoxLayout *verticalLayout;
    QWidget *miscDefaultIMEWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *checkDefaultLabel;
    QFrame *checkDefaultLine;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkDefaultCheckBox;
    QCheckBox *IMEHotKeyDisabledCheckBox;
    QWidget *miscAdministrationWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *administrationLabel;
    QFrame *administrationLine;
    QWidget *widget_8;
    QGridLayout *gridLayout_7;
    QLabel *dictionaryPreloadingAndUACLabel;
    QPushButton *launchAdministrationDialogButton;
    QSpacerItem *horizontalSpacer_9;
    QWidget *miscStartupWidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_19;
    QLabel *startupLabel;
    QFrame *startupLine;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *startupCheckBox;
    QWidget *miscLoggingWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_13;
    QLabel *loggingLabel;
    QFrame *loggingLine;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_15;
    QLabel *verboseLevelLabel;
    QSpacerItem *horizontalSpacer_13;
    QComboBox *verboseLevelComboBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *resetToDefaultsButton;
    QSpacerItem *horizontalSpacer_4;
    QDialogButtonBox *configDialogButtonBox;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QString::fromUtf8("ConfigDialog"));
        ConfigDialog->resize(525, 440);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigDialog->sizePolicy().hasHeightForWidth());
        ConfigDialog->setSizePolicy(sizePolicy);
        ConfigDialog->setMinimumSize(QSize(525, 440));
        ConfigDialog->setMaximumSize(QSize(525, 440));
        centralwidget = new QWidget(ConfigDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 525, 440));
        configDialogTabWidget = new QTabWidget(centralwidget);
        configDialogTabWidget->setObjectName(QString::fromUtf8("configDialogTabWidget"));
        configDialogTabWidget->setGeometry(QRect(10, 10, 506, 381));
        basicTab = new QWidget();
        basicTab->setObjectName(QString::fromUtf8("basicTab"));
        gridLayoutWidget = new QWidget(basicTab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 441, 234));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        inputModeComboBox = new QComboBox(gridLayoutWidget);
        inputModeComboBox->setObjectName(QString::fromUtf8("inputModeComboBox"));

        gridLayout->addWidget(inputModeComboBox, 0, 1, 1, 1);

        punctuationsSettingComboBox = new QComboBox(gridLayoutWidget);
        punctuationsSettingComboBox->setObjectName(QString::fromUtf8("punctuationsSettingComboBox"));

        gridLayout->addWidget(punctuationsSettingComboBox, 1, 1, 1, 1);

        symbolsSettingComboBox = new QComboBox(gridLayoutWidget);
        symbolsSettingComboBox->setObjectName(QString::fromUtf8("symbolsSettingComboBox"));
        symbolsSettingComboBox->setEnabled(true);

        gridLayout->addWidget(symbolsSettingComboBox, 2, 1, 1, 1);

        spaceCharacterFormComboBox = new QComboBox(gridLayoutWidget);
        spaceCharacterFormComboBox->setObjectName(QString::fromUtf8("spaceCharacterFormComboBox"));
        spaceCharacterFormComboBox->setEnabled(true);

        gridLayout->addWidget(spaceCharacterFormComboBox, 4, 1, 1, 1);

        inputModeLabel = new QLabel(gridLayoutWidget);
        inputModeLabel->setObjectName(QString::fromUtf8("inputModeLabel"));

        gridLayout->addWidget(inputModeLabel, 0, 0, 1, 1);

        PunctuationsSettingLabel = new QLabel(gridLayoutWidget);
        PunctuationsSettingLabel->setObjectName(QString::fromUtf8("PunctuationsSettingLabel"));

        gridLayout->addWidget(PunctuationsSettingLabel, 1, 0, 1, 1);

        symbolsSettingLabel = new QLabel(gridLayoutWidget);
        symbolsSettingLabel->setObjectName(QString::fromUtf8("symbolsSettingLabel"));

        gridLayout->addWidget(symbolsSettingLabel, 2, 0, 1, 1);

        spaceInputSettingLabel = new QLabel(gridLayoutWidget);
        spaceInputSettingLabel->setObjectName(QString::fromUtf8("spaceInputSettingLabel"));

        gridLayout->addWidget(spaceInputSettingLabel, 4, 0, 1, 1);

        selectionShortcutModeComboBox = new QComboBox(gridLayoutWidget);
        selectionShortcutModeComboBox->setObjectName(QString::fromUtf8("selectionShortcutModeComboBox"));

        gridLayout->addWidget(selectionShortcutModeComboBox, 5, 1, 1, 1);

        selectionShortcutModeLabel = new QLabel(gridLayoutWidget);
        selectionShortcutModeLabel->setObjectName(QString::fromUtf8("selectionShortcutModeLabel"));

        gridLayout->addWidget(selectionShortcutModeLabel, 5, 0, 1, 1);

        numpadCharacterFormLabel = new QLabel(gridLayoutWidget);
        numpadCharacterFormLabel->setObjectName(QString::fromUtf8("numpadCharacterFormLabel"));

        gridLayout->addWidget(numpadCharacterFormLabel, 6, 0, 1, 1);

        numpadCharacterFormComboBox = new QComboBox(gridLayoutWidget);
        numpadCharacterFormComboBox->setObjectName(QString::fromUtf8("numpadCharacterFormComboBox"));
        numpadCharacterFormComboBox->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(numpadCharacterFormComboBox, 6, 1, 1, 1);

        yenSignLabel = new QLabel(gridLayoutWidget);
        yenSignLabel->setObjectName(QString::fromUtf8("yenSignLabel"));

        gridLayout->addWidget(yenSignLabel, 3, 0, 1, 1);

        yenSignComboBox = new QComboBox(gridLayoutWidget);
        yenSignComboBox->setObjectName(QString::fromUtf8("yenSignComboBox"));

        gridLayout->addWidget(yenSignComboBox, 3, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(basicTab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 280, 441, 66));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        keymapSettingComboBox = new QComboBox(gridLayoutWidget_2);
        keymapSettingComboBox->setObjectName(QString::fromUtf8("keymapSettingComboBox"));

        gridLayout_2->addWidget(keymapSettingComboBox, 0, 1, 1, 1);

        keymapSettingLabel = new QLabel(gridLayoutWidget_2);
        keymapSettingLabel->setObjectName(QString::fromUtf8("keymapSettingLabel"));

        gridLayout_2->addWidget(keymapSettingLabel, 0, 0, 1, 1);

        editKeymapButton = new QPushButton(gridLayoutWidget_2);
        editKeymapButton->setObjectName(QString::fromUtf8("editKeymapButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editKeymapButton->sizePolicy().hasHeightForWidth());
        editKeymapButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(editKeymapButton, 0, 2, 1, 1);

        editRomanTableButton = new QPushButton(gridLayoutWidget_2);
        editRomanTableButton->setObjectName(QString::fromUtf8("editRomanTableButton"));

        gridLayout_2->addWidget(editRomanTableButton, 1, 2, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(basicTab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 461, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        basicsLabel = new QLabel(horizontalLayoutWidget);
        basicsLabel->setObjectName(QString::fromUtf8("basicsLabel"));

        horizontalLayout->addWidget(basicsLabel);

        basicsLine = new QFrame(horizontalLayoutWidget);
        basicsLine->setObjectName(QString::fromUtf8("basicsLine"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(basicsLine->sizePolicy().hasHeightForWidth());
        basicsLine->setSizePolicy(sizePolicy2);
        basicsLine->setFrameShape(QFrame::HLine);
        basicsLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(basicsLine);

        horizontalLayoutWidget_8 = new QWidget(basicTab);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(20, 260, 461, 20));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_11->addWidget(label_4);

        line_3 = new QFrame(horizontalLayoutWidget_8);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        sizePolicy2.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(line_3);

        configDialogTabWidget->addTab(basicTab, QString());
        dictionaryTab = new QWidget();
        dictionaryTab->setObjectName(QString::fromUtf8("dictionaryTab"));
        gridLayoutWidget_5 = new QWidget(dictionaryTab);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(30, 30, 441, 71));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        clearUserHistoryButton = new QPushButton(gridLayoutWidget_5);
        clearUserHistoryButton->setObjectName(QString::fromUtf8("clearUserHistoryButton"));

        gridLayout_5->addWidget(clearUserHistoryButton, 1, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        historyLearningLevelComboBox = new QComboBox(gridLayoutWidget_5);
        historyLearningLevelComboBox->setObjectName(QString::fromUtf8("historyLearningLevelComboBox"));
        historyLearningLevelComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_5->addWidget(historyLearningLevelComboBox, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(dictionaryTab);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(30, 120, 441, 32));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 1, 1, 1);

        editUserDictionaryButton = new QPushButton(gridLayoutWidget_6);
        editUserDictionaryButton->setObjectName(QString::fromUtf8("editUserDictionaryButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(editUserDictionaryButton->sizePolicy().hasHeightForWidth());
        editUserDictionaryButton->setSizePolicy(sizePolicy3);
        editUserDictionaryButton->setMinimumSize(QSize(150, 0));

        gridLayout_6->addWidget(editUserDictionaryButton, 0, 2, 1, 1);

        gridLayoutWidget_3 = new QWidget(dictionaryTab);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 220, 456, 121));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        singleKanjiConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        singleKanjiConversionCheckBox->setObjectName(QString::fromUtf8("singleKanjiConversionCheckBox"));

        gridLayout_3->addWidget(singleKanjiConversionCheckBox, 0, 0, 1, 1);

        symbolConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        symbolConversionCheckBox->setObjectName(QString::fromUtf8("symbolConversionCheckBox"));

        gridLayout_3->addWidget(symbolConversionCheckBox, 1, 0, 1, 1);

        emoticonConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        emoticonConversionCheckBox->setObjectName(QString::fromUtf8("emoticonConversionCheckBox"));

        gridLayout_3->addWidget(emoticonConversionCheckBox, 2, 0, 1, 1);

        t13nConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        t13nConversionCheckBox->setObjectName(QString::fromUtf8("t13nConversionCheckBox"));

        gridLayout_3->addWidget(t13nConversionCheckBox, 3, 0, 1, 1);

        zipcodeConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        zipcodeConversionCheckBox->setObjectName(QString::fromUtf8("zipcodeConversionCheckBox"));

        gridLayout_3->addWidget(zipcodeConversionCheckBox, 4, 0, 1, 1);

        spellingCorrectionCheckBox = new QCheckBox(gridLayoutWidget_3);
        spellingCorrectionCheckBox->setObjectName(QString::fromUtf8("spellingCorrectionCheckBox"));

        gridLayout_3->addWidget(spellingCorrectionCheckBox, 4, 1, 1, 1);

        calculatorCheckBox = new QCheckBox(gridLayoutWidget_3);
        calculatorCheckBox->setObjectName(QString::fromUtf8("calculatorCheckBox"));

        gridLayout_3->addWidget(calculatorCheckBox, 3, 1, 1, 1);

        numberConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        numberConversionCheckBox->setObjectName(QString::fromUtf8("numberConversionCheckBox"));

        gridLayout_3->addWidget(numberConversionCheckBox, 2, 1, 1, 1);

        dateConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        dateConversionCheckBox->setObjectName(QString::fromUtf8("dateConversionCheckBox"));

        gridLayout_3->addWidget(dateConversionCheckBox, 1, 1, 1, 1);

        emojiConversionCheckBox = new QCheckBox(gridLayoutWidget_3);
        emojiConversionCheckBox->setObjectName(QString::fromUtf8("emojiConversionCheckBox"));

        gridLayout_3->addWidget(emojiConversionCheckBox, 0, 1, 1, 1);

        horizontalLayoutWidget_5 = new QWidget(dictionaryTab);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 10, 461, 21));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        line = new QFrame(horizontalLayoutWidget_5);
        line->setObjectName(QString::fromUtf8("line"));
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line);

        horizontalLayoutWidget_11 = new QWidget(dictionaryTab);
        horizontalLayoutWidget_11->setObjectName(QString::fromUtf8("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(20, 100, 461, 20));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_11);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_14->addWidget(label_6);

        line_6 = new QFrame(horizontalLayoutWidget_11);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        sizePolicy2.setHeightForWidth(line_6->sizePolicy().hasHeightForWidth());
        line_6->setSizePolicy(sizePolicy2);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_14->addWidget(line_6);

        horizontalLayoutWidget_7 = new QWidget(dictionaryTab);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 200, 461, 21));
        horizontalLayout_22 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        specialConversionLabel = new QLabel(horizontalLayoutWidget_7);
        specialConversionLabel->setObjectName(QString::fromUtf8("specialConversionLabel"));

        horizontalLayout_22->addWidget(specialConversionLabel);

        specialConversionLine = new QFrame(horizontalLayoutWidget_7);
        specialConversionLine->setObjectName(QString::fromUtf8("specialConversionLine"));
        sizePolicy2.setHeightForWidth(specialConversionLine->sizePolicy().hasHeightForWidth());
        specialConversionLine->setSizePolicy(sizePolicy2);
        specialConversionLine->setFrameShape(QFrame::HLine);
        specialConversionLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_22->addWidget(specialConversionLine);

        horizontalLayoutWidget_21 = new QWidget(dictionaryTab);
        horizontalLayoutWidget_21->setObjectName(QString::fromUtf8("horizontalLayoutWidget_21"));
        horizontalLayoutWidget_21->setGeometry(QRect(20, 150, 461, 20));
        horizontalLayout_24 = new QHBoxLayout(horizontalLayoutWidget_21);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_21);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_24->addWidget(label_9);

        line_9 = new QFrame(horizontalLayoutWidget_21);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        sizePolicy2.setHeightForWidth(line_9->sizePolicy().hasHeightForWidth());
        line_9->setSizePolicy(sizePolicy2);
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_24->addWidget(line_9);

        gridLayoutWidget_8 = new QWidget(dictionaryTab);
        gridLayoutWidget_8->setObjectName(QString::fromUtf8("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(30, 170, 441, 32));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        localUsageDictionaryCheckBox = new QCheckBox(gridLayoutWidget_8);
        localUsageDictionaryCheckBox->setObjectName(QString::fromUtf8("localUsageDictionaryCheckBox"));

        gridLayout_12->addWidget(localUsageDictionaryCheckBox, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        configDialogTabWidget->addTab(dictionaryTab, QString());
        inputsupport_tab = new QWidget();
        inputsupport_tab->setObjectName(QString::fromUtf8("inputsupport_tab"));
        characterFormEditor = new CharacterFormEditor(inputsupport_tab);
        characterFormEditor->setObjectName(QString::fromUtf8("characterFormEditor"));
        characterFormEditor->setGeometry(QRect(30, 190, 441, 141));
        horizontalLayoutWidget_2 = new QWidget(inputsupport_tab);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 10, 461, 21));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        autoCorrectionLable = new QLabel(horizontalLayoutWidget_2);
        autoCorrectionLable->setObjectName(QString::fromUtf8("autoCorrectionLable"));

        horizontalLayout_4->addWidget(autoCorrectionLable);

        autoCorrectionLine_2 = new QFrame(horizontalLayoutWidget_2);
        autoCorrectionLine_2->setObjectName(QString::fromUtf8("autoCorrectionLine_2"));
        sizePolicy2.setHeightForWidth(autoCorrectionLine_2->sizePolicy().hasHeightForWidth());
        autoCorrectionLine_2->setSizePolicy(sizePolicy2);
        autoCorrectionLine_2->setFrameShape(QFrame::HLine);
        autoCorrectionLine_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(autoCorrectionLine_2);

        horizontalLayoutWidget_3 = new QWidget(inputsupport_tab);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 160, 461, 21));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        autoCorrectionLable_2 = new QLabel(horizontalLayoutWidget_3);
        autoCorrectionLable_2->setObjectName(QString::fromUtf8("autoCorrectionLable_2"));

        horizontalLayout_6->addWidget(autoCorrectionLable_2);

        halffullWidthLine = new QFrame(horizontalLayoutWidget_3);
        halffullWidthLine->setObjectName(QString::fromUtf8("halffullWidthLine"));
        sizePolicy2.setHeightForWidth(halffullWidthLine->sizePolicy().hasHeightForWidth());
        halffullWidthLine->setSizePolicy(sizePolicy2);
        halffullWidthLine->setFrameShape(QFrame::HLine);
        halffullWidthLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(halffullWidthLine);

        gridLayoutWidget_9 = new QWidget(inputsupport_tab);
        gridLayoutWidget_9->setObjectName(QString::fromUtf8("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(30, 40, 441, 113));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        useAutoImeTurnOff = new QCheckBox(gridLayoutWidget_9);
        useAutoImeTurnOff->setObjectName(QString::fromUtf8("useAutoImeTurnOff"));

        gridLayout_9->addWidget(useAutoImeTurnOff, 0, 0, 1, 7);

        autoCorrectionLable_3 = new QLabel(gridLayoutWidget_9);
        autoCorrectionLable_3->setObjectName(QString::fromUtf8("autoCorrectionLable_3"));

        gridLayout_9->addWidget(autoCorrectionLable_3, 2, 0, 1, 3);

        shiftKeyModeSwitchComboBox = new QComboBox(gridLayoutWidget_9);
        shiftKeyModeSwitchComboBox->setObjectName(QString::fromUtf8("shiftKeyModeSwitchComboBox"));
        shiftKeyModeSwitchComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_9->addWidget(shiftKeyModeSwitchComboBox, 2, 3, 1, 4);

        toutenCheckBox = new QCheckBox(gridLayoutWidget_9);
        toutenCheckBox->setObjectName(QString::fromUtf8("toutenCheckBox"));
        toutenCheckBox->setMaximumSize(QSize(45, 16777215));

        gridLayout_9->addWidget(toutenCheckBox, 1, 4, 1, 1);

        questionMarkCheckBox = new QCheckBox(gridLayoutWidget_9);
        questionMarkCheckBox->setObjectName(QString::fromUtf8("questionMarkCheckBox"));
        questionMarkCheckBox->setMaximumSize(QSize(45, 16777215));

        gridLayout_9->addWidget(questionMarkCheckBox, 1, 5, 1, 1);

        useAutoConversion = new QCheckBox(gridLayoutWidget_9);
        useAutoConversion->setObjectName(QString::fromUtf8("useAutoConversion"));

        gridLayout_9->addWidget(useAutoConversion, 1, 0, 1, 3);

        kutenCheckBox = new QCheckBox(gridLayoutWidget_9);
        kutenCheckBox->setObjectName(QString::fromUtf8("kutenCheckBox"));
        kutenCheckBox->setMaximumSize(QSize(45, 16777215));

        gridLayout_9->addWidget(kutenCheckBox, 1, 3, 1, 1);

        exclamationMarkCheckBox = new QCheckBox(gridLayoutWidget_9);
        exclamationMarkCheckBox->setObjectName(QString::fromUtf8("exclamationMarkCheckBox"));
        exclamationMarkCheckBox->setMaximumSize(QSize(45, 16777215));

        gridLayout_9->addWidget(exclamationMarkCheckBox, 1, 6, 1, 1);

        useJapaneseLayout = new QCheckBox(gridLayoutWidget_9);
        useJapaneseLayout->setObjectName(QString::fromUtf8("useJapaneseLayout"));
        useJapaneseLayout->setEnabled(true);

        gridLayout_9->addWidget(useJapaneseLayout, 3, 0, 1, 7);

        useModeIndicator = new QCheckBox(gridLayoutWidget_9);
        useModeIndicator->setObjectName(QString::fromUtf8("useModeIndicator"));
        useModeIndicator->setEnabled(true);

        gridLayout_9->addWidget(useModeIndicator, 4, 0, 1, 7);

        configDialogTabWidget->addTab(inputsupport_tab, QString());
        suggestionsTab = new QWidget();
        suggestionsTab->setObjectName(QString::fromUtf8("suggestionsTab"));
        horizontalLayoutWidget_9 = new QWidget(suggestionsTab);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(20, 10, 461, 21));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_9);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_12->addWidget(label_3);

        line_4 = new QFrame(horizontalLayoutWidget_9);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        sizePolicy2.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(line_4);

        horizontalLayoutWidget_14 = new QWidget(suggestionsTab);
        horizontalLayoutWidget_14->setObjectName(QString::fromUtf8("horizontalLayoutWidget_14"));
        horizontalLayoutWidget_14->setGeometry(QRect(20, 180, 461, 21));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_14);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        SuggestionPreferenceLabel = new QLabel(horizontalLayoutWidget_14);
        SuggestionPreferenceLabel->setObjectName(QString::fromUtf8("SuggestionPreferenceLabel"));

        horizontalLayout_16->addWidget(SuggestionPreferenceLabel);

        line_8 = new QFrame(horizontalLayoutWidget_14);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        sizePolicy2.setHeightForWidth(line_8->sizePolicy().hasHeightForWidth());
        line_8->setSizePolicy(sizePolicy2);
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_16->addWidget(line_8);

        gridLayoutWidget_10 = new QWidget(suggestionsTab);
        gridLayoutWidget_10->setObjectName(QString::fromUtf8("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(30, 200, 441, 31));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        defaultNUmberofSuggestionsLabel = new QLabel(gridLayoutWidget_10);
        defaultNUmberofSuggestionsLabel->setObjectName(QString::fromUtf8("defaultNUmberofSuggestionsLabel"));

        gridLayout_11->addWidget(defaultNUmberofSuggestionsLabel, 0, 0, 1, 1);

        suggestionsSizeSpinBox = new QSpinBox(gridLayoutWidget_10);
        suggestionsSizeSpinBox->setObjectName(QString::fromUtf8("suggestionsSizeSpinBox"));

        gridLayout_11->addWidget(suggestionsSizeSpinBox, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(suggestionsTab);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(30, 40, 441, 121));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        historySuggestCheckBox = new QCheckBox(gridLayoutWidget_4);
        historySuggestCheckBox->setObjectName(QString::fromUtf8("historySuggestCheckBox"));

        gridLayout_4->addWidget(historySuggestCheckBox, 0, 0, 1, 3);

        clearUserPredictionButton = new QPushButton(gridLayoutWidget_4);
        clearUserPredictionButton->setObjectName(QString::fromUtf8("clearUserPredictionButton"));
        clearUserPredictionButton->setMinimumSize(QSize(120, 0));

        gridLayout_4->addWidget(clearUserPredictionButton, 1, 2, 1, 1);

        dictionarySuggestCheckBox = new QCheckBox(gridLayoutWidget_4);
        dictionarySuggestCheckBox->setObjectName(QString::fromUtf8("dictionarySuggestCheckBox"));

        gridLayout_4->addWidget(dictionarySuggestCheckBox, 3, 0, 1, 3);

        clearUnusedUserPredictionButton = new QPushButton(gridLayoutWidget_4);
        clearUnusedUserPredictionButton->setObjectName(QString::fromUtf8("clearUnusedUserPredictionButton"));
        clearUnusedUserPredictionButton->setMinimumSize(QSize(120, 0));

        gridLayout_4->addWidget(clearUnusedUserPredictionButton, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);

        realtimeConversionCheckBox = new QCheckBox(gridLayoutWidget_4);
        realtimeConversionCheckBox->setObjectName(QString::fromUtf8("realtimeConversionCheckBox"));

        gridLayout_4->addWidget(realtimeConversionCheckBox, 4, 0, 1, 3);

        configDialogTabWidget->addTab(suggestionsTab, QString());
        privacyTab = new QWidget();
        privacyTab->setObjectName(QString::fromUtf8("privacyTab"));
        usageStatsCheckBox = new QCheckBox(privacyTab);
        usageStatsCheckBox->setObjectName(QString::fromUtf8("usageStatsCheckBox"));
        usageStatsCheckBox->setGeometry(QRect(30, 190, 20, 20));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(usageStatsCheckBox->sizePolicy().hasHeightForWidth());
        usageStatsCheckBox->setSizePolicy(sizePolicy4);
        usageStatsCheckBox->setTristate(false);
        usageStatsMessage = new QLabel(privacyTab);
        usageStatsMessage->setObjectName(QString::fromUtf8("usageStatsMessage"));
        usageStatsMessage->setGeometry(QRect(50, 180, 421, 61));
        usageStatsMessage->setWordWrap(true);
        horizontalLayoutWidget_16 = new QWidget(privacyTab);
        horizontalLayoutWidget_16->setObjectName(QString::fromUtf8("horizontalLayoutWidget_16"));
        horizontalLayoutWidget_16->setGeometry(QRect(20, 160, 461, 21));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_16);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        usageStatsLabel = new QLabel(horizontalLayoutWidget_16);
        usageStatsLabel->setObjectName(QString::fromUtf8("usageStatsLabel"));

        horizontalLayout_18->addWidget(usageStatsLabel);

        usageStatsLine = new QFrame(horizontalLayoutWidget_16);
        usageStatsLine->setObjectName(QString::fromUtf8("usageStatsLine"));
        sizePolicy2.setHeightForWidth(usageStatsLine->sizePolicy().hasHeightForWidth());
        usageStatsLine->setSizePolicy(sizePolicy2);
        usageStatsLine->setFrameShape(QFrame::HLine);
        usageStatsLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_18->addWidget(usageStatsLine);

        horizontalLayoutWidget_18 = new QWidget(privacyTab);
        horizontalLayoutWidget_18->setObjectName(QString::fromUtf8("horizontalLayoutWidget_18"));
        horizontalLayoutWidget_18->setGeometry(QRect(20, 10, 461, 21));
        horizontalLayout_20 = new QHBoxLayout(horizontalLayoutWidget_18);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_18);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_20->addWidget(label_10);

        line_11 = new QFrame(horizontalLayoutWidget_18);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        sizePolicy2.setHeightForWidth(line_11->sizePolicy().hasHeightForWidth());
        line_11->setSizePolicy(sizePolicy2);
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        horizontalLayout_20->addWidget(line_11);

        incognitoModeCheckBox = new QCheckBox(privacyTab);
        incognitoModeCheckBox->setObjectName(QString::fromUtf8("incognitoModeCheckBox"));
        incognitoModeCheckBox->setGeometry(QRect(30, 40, 20, 20));
        sizePolicy4.setHeightForWidth(incognitoModeCheckBox->sizePolicy().hasHeightForWidth());
        incognitoModeCheckBox->setSizePolicy(sizePolicy4);
        incognitoModeCheckBox->setTristate(false);
        incognitoModeMessage = new QLabel(privacyTab);
        incognitoModeMessage->setObjectName(QString::fromUtf8("incognitoModeMessage"));
        incognitoModeMessage->setGeometry(QRect(50, 30, 421, 51));
        incognitoModeMessage->setWordWrap(true);
        launchAdministrationDialogButtonForUsageStats = new QPushButton(privacyTab);
        launchAdministrationDialogButtonForUsageStats->setObjectName(QString::fromUtf8("launchAdministrationDialogButtonForUsageStats"));
        launchAdministrationDialogButtonForUsageStats->setGeometry(QRect(320, 180, 150, 25));
        launchAdministrationDialogButtonForUsageStats->setMinimumSize(QSize(150, 0));
        launchAdministrationDialogButtonForUsageStats->setMaximumSize(QSize(150, 16777215));
        presentationModeCheckBox = new QCheckBox(privacyTab);
        presentationModeCheckBox->setObjectName(QString::fromUtf8("presentationModeCheckBox"));
        presentationModeCheckBox->setGeometry(QRect(30, 120, 441, 17));
        horizontalLayoutWidget_19 = new QWidget(privacyTab);
        horizontalLayoutWidget_19->setObjectName(QString::fromUtf8("horizontalLayoutWidget_19"));
        horizontalLayoutWidget_19->setGeometry(QRect(20, 90, 461, 21));
        horizontalLayout_21 = new QHBoxLayout(horizontalLayoutWidget_19);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_19);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_21->addWidget(label_12);

        line_12 = new QFrame(horizontalLayoutWidget_19);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        sizePolicy2.setHeightForWidth(line_12->sizePolicy().hasHeightForWidth());
        line_12->setSizePolicy(sizePolicy2);
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        horizontalLayout_21->addWidget(line_12);

        configDialogTabWidget->addTab(privacyTab, QString());
        miscTab = new QWidget();
        miscTab->setObjectName(QString::fromUtf8("miscTab"));
        widgetMisc = new QWidget(miscTab);
        widgetMisc->setObjectName(QString::fromUtf8("widgetMisc"));
        widgetMisc->setGeometry(QRect(20, 10, 471, 331));
        sizePolicy1.setHeightForWidth(widgetMisc->sizePolicy().hasHeightForWidth());
        widgetMisc->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(widgetMisc);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 2, 5, 0);
        miscDefaultIMEWidget = new QWidget(widgetMisc);
        miscDefaultIMEWidget->setObjectName(QString::fromUtf8("miscDefaultIMEWidget"));
        sizePolicy1.setHeightForWidth(miscDefaultIMEWidget->sizePolicy().hasHeightForWidth());
        miscDefaultIMEWidget->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(miscDefaultIMEWidget);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 5, 0);
        widget_3 = new QWidget(miscDefaultIMEWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(widget_3);
#ifndef Q_OS_MAC
        horizontalLayout_5->setSpacing(6);
#endif
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkDefaultLabel = new QLabel(widget_3);
        checkDefaultLabel->setObjectName(QString::fromUtf8("checkDefaultLabel"));

        horizontalLayout_5->addWidget(checkDefaultLabel);

        checkDefaultLine = new QFrame(widget_3);
        checkDefaultLine->setObjectName(QString::fromUtf8("checkDefaultLine"));
        sizePolicy2.setHeightForWidth(checkDefaultLine->sizePolicy().hasHeightForWidth());
        checkDefaultLine->setSizePolicy(sizePolicy2);
        checkDefaultLine->setFrameShape(QFrame::HLine);
        checkDefaultLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(checkDefaultLine);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(miscDefaultIMEWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, 0, 0);
        checkDefaultCheckBox = new QCheckBox(widget_4);
        checkDefaultCheckBox->setObjectName(QString::fromUtf8("checkDefaultCheckBox"));
        sizePolicy4.setHeightForWidth(checkDefaultCheckBox->sizePolicy().hasHeightForWidth());
        checkDefaultCheckBox->setSizePolicy(sizePolicy4);
        checkDefaultCheckBox->setTristate(false);

        verticalLayout_2->addWidget(checkDefaultCheckBox);

        IMEHotKeyDisabledCheckBox = new QCheckBox(widget_4);
        IMEHotKeyDisabledCheckBox->setObjectName(QString::fromUtf8("IMEHotKeyDisabledCheckBox"));

        verticalLayout_2->addWidget(IMEHotKeyDisabledCheckBox);


        verticalLayout_3->addWidget(widget_4);


        verticalLayout->addWidget(miscDefaultIMEWidget);

        miscAdministrationWidget = new QWidget(widgetMisc);
        miscAdministrationWidget->setObjectName(QString::fromUtf8("miscAdministrationWidget"));
        sizePolicy1.setHeightForWidth(miscAdministrationWidget->sizePolicy().hasHeightForWidth());
        miscAdministrationWidget->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(miscAdministrationWidget);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 5, 0);
        widget_7 = new QWidget(miscAdministrationWidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        horizontalLayout_7 = new QHBoxLayout(widget_7);
#ifndef Q_OS_MAC
        horizontalLayout_7->setSpacing(6);
#endif
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        administrationLabel = new QLabel(widget_7);
        administrationLabel->setObjectName(QString::fromUtf8("administrationLabel"));

        horizontalLayout_7->addWidget(administrationLabel);

        administrationLine = new QFrame(widget_7);
        administrationLine->setObjectName(QString::fromUtf8("administrationLine"));
        sizePolicy2.setHeightForWidth(administrationLine->sizePolicy().hasHeightForWidth());
        administrationLine->setSizePolicy(sizePolicy2);
        administrationLine->setFrameShape(QFrame::HLine);
        administrationLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(administrationLine);


        verticalLayout_4->addWidget(widget_7);

        widget_8 = new QWidget(miscAdministrationWidget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        sizePolicy1.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy1);
        gridLayout_7 = new QGridLayout(widget_8);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(12, 0, 0, 0);
        dictionaryPreloadingAndUACLabel = new QLabel(widget_8);
        dictionaryPreloadingAndUACLabel->setObjectName(QString::fromUtf8("dictionaryPreloadingAndUACLabel"));

        gridLayout_7->addWidget(dictionaryPreloadingAndUACLabel, 0, 0, 1, 1);

        launchAdministrationDialogButton = new QPushButton(widget_8);
        launchAdministrationDialogButton->setObjectName(QString::fromUtf8("launchAdministrationDialogButton"));
        launchAdministrationDialogButton->setMinimumSize(QSize(120, 0));

        gridLayout_7->addWidget(launchAdministrationDialogButton, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_9, 0, 1, 1, 1);


        verticalLayout_4->addWidget(widget_8);


        verticalLayout->addWidget(miscAdministrationWidget);

        miscStartupWidget = new QWidget(widgetMisc);
        miscStartupWidget->setObjectName(QString::fromUtf8("miscStartupWidget"));
        sizePolicy1.setHeightForWidth(miscStartupWidget->sizePolicy().hasHeightForWidth());
        miscStartupWidget->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(miscStartupWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 5, 0);
        widget_11 = new QWidget(miscStartupWidget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        sizePolicy1.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy1);
        horizontalLayout_19 = new QHBoxLayout(widget_11);
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        startupLabel = new QLabel(widget_11);
        startupLabel->setObjectName(QString::fromUtf8("startupLabel"));

        horizontalLayout_19->addWidget(startupLabel);

        startupLine = new QFrame(widget_11);
        startupLine->setObjectName(QString::fromUtf8("startupLine"));
        sizePolicy2.setHeightForWidth(startupLine->sizePolicy().hasHeightForWidth());
        startupLine->setSizePolicy(sizePolicy2);
        startupLine->setFrameShape(QFrame::HLine);
        startupLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_19->addWidget(startupLine);


        verticalLayout_7->addWidget(widget_11);

        widget_12 = new QWidget(miscStartupWidget);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        verticalLayout_6 = new QVBoxLayout(widget_12);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(12, 0, 0, 0);
        startupCheckBox = new QCheckBox(widget_12);
        startupCheckBox->setObjectName(QString::fromUtf8("startupCheckBox"));

        verticalLayout_6->addWidget(startupCheckBox);


        verticalLayout_7->addWidget(widget_12);


        verticalLayout->addWidget(miscStartupWidget);

        miscLoggingWidget = new QWidget(widgetMisc);
        miscLoggingWidget->setObjectName(QString::fromUtf8("miscLoggingWidget"));
        sizePolicy1.setHeightForWidth(miscLoggingWidget->sizePolicy().hasHeightForWidth());
        miscLoggingWidget->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(miscLoggingWidget);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 5, 0);
        widget_9 = new QWidget(miscLoggingWidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        sizePolicy1.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy1);
        horizontalLayout_13 = new QHBoxLayout(widget_9);
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        loggingLabel = new QLabel(widget_9);
        loggingLabel->setObjectName(QString::fromUtf8("loggingLabel"));

        horizontalLayout_13->addWidget(loggingLabel);

        loggingLine = new QFrame(widget_9);
        loggingLine->setObjectName(QString::fromUtf8("loggingLine"));
        sizePolicy2.setHeightForWidth(loggingLine->sizePolicy().hasHeightForWidth());
        loggingLine->setSizePolicy(sizePolicy2);
        loggingLine->setFrameShape(QFrame::HLine);
        loggingLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_13->addWidget(loggingLine);


        verticalLayout_5->addWidget(widget_9);

        widget_10 = new QWidget(miscLoggingWidget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        sizePolicy1.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy1);
        horizontalLayout_15 = new QHBoxLayout(widget_10);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(12, 0, 0, 0);
        verboseLevelLabel = new QLabel(widget_10);
        verboseLevelLabel->setObjectName(QString::fromUtf8("verboseLevelLabel"));

        horizontalLayout_15->addWidget(verboseLevelLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);

        verboseLevelComboBox = new QComboBox(widget_10);
        verboseLevelComboBox->setObjectName(QString::fromUtf8("verboseLevelComboBox"));
        verboseLevelComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_15->addWidget(verboseLevelComboBox);


        verticalLayout_5->addWidget(widget_10);


        verticalLayout->addWidget(miscLoggingWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        configDialogTabWidget->addTab(miscTab, QString());
        horizontalLayoutWidget_12 = new QWidget(centralwidget);
        horizontalLayoutWidget_12->setObjectName(QString::fromUtf8("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(10, 400, 506, 35));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        resetToDefaultsButton = new QPushButton(horizontalLayoutWidget_12);
        resetToDefaultsButton->setObjectName(QString::fromUtf8("resetToDefaultsButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(resetToDefaultsButton->sizePolicy().hasHeightForWidth());
        resetToDefaultsButton->setSizePolicy(sizePolicy5);
        resetToDefaultsButton->setMinimumSize(QSize(110, 0));
        resetToDefaultsButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(resetToDefaultsButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        configDialogButtonBox = new QDialogButtonBox(horizontalLayoutWidget_12);
        configDialogButtonBox->setObjectName(QString::fromUtf8("configDialogButtonBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(configDialogButtonBox->sizePolicy().hasHeightForWidth());
        configDialogButtonBox->setSizePolicy(sizePolicy6);
        configDialogButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(configDialogButtonBox);

        QWidget::setTabOrder(configDialogTabWidget, inputModeComboBox);
        QWidget::setTabOrder(inputModeComboBox, punctuationsSettingComboBox);
        QWidget::setTabOrder(punctuationsSettingComboBox, symbolsSettingComboBox);
        QWidget::setTabOrder(symbolsSettingComboBox, yenSignComboBox);
        QWidget::setTabOrder(yenSignComboBox, spaceCharacterFormComboBox);
        QWidget::setTabOrder(spaceCharacterFormComboBox, selectionShortcutModeComboBox);
        QWidget::setTabOrder(selectionShortcutModeComboBox, numpadCharacterFormComboBox);
        QWidget::setTabOrder(numpadCharacterFormComboBox, keymapSettingComboBox);
        QWidget::setTabOrder(keymapSettingComboBox, editKeymapButton);
        QWidget::setTabOrder(editKeymapButton, editRomanTableButton);
        QWidget::setTabOrder(editRomanTableButton, historyLearningLevelComboBox);
        QWidget::setTabOrder(historyLearningLevelComboBox, clearUserHistoryButton);
        QWidget::setTabOrder(clearUserHistoryButton, editUserDictionaryButton);
        QWidget::setTabOrder(editUserDictionaryButton, localUsageDictionaryCheckBox);
        QWidget::setTabOrder(localUsageDictionaryCheckBox, singleKanjiConversionCheckBox);
        QWidget::setTabOrder(singleKanjiConversionCheckBox, symbolConversionCheckBox);
        QWidget::setTabOrder(symbolConversionCheckBox, emoticonConversionCheckBox);
        QWidget::setTabOrder(emoticonConversionCheckBox, t13nConversionCheckBox);
        QWidget::setTabOrder(t13nConversionCheckBox, zipcodeConversionCheckBox);
        QWidget::setTabOrder(zipcodeConversionCheckBox, emojiConversionCheckBox);
        QWidget::setTabOrder(emojiConversionCheckBox, dateConversionCheckBox);
        QWidget::setTabOrder(dateConversionCheckBox, numberConversionCheckBox);
        QWidget::setTabOrder(numberConversionCheckBox, calculatorCheckBox);
        QWidget::setTabOrder(calculatorCheckBox, spellingCorrectionCheckBox);
        QWidget::setTabOrder(spellingCorrectionCheckBox, useAutoImeTurnOff);
        QWidget::setTabOrder(useAutoImeTurnOff, useAutoConversion);
        QWidget::setTabOrder(useAutoConversion, kutenCheckBox);
        QWidget::setTabOrder(kutenCheckBox, toutenCheckBox);
        QWidget::setTabOrder(toutenCheckBox, questionMarkCheckBox);
        QWidget::setTabOrder(questionMarkCheckBox, exclamationMarkCheckBox);
        QWidget::setTabOrder(exclamationMarkCheckBox, shiftKeyModeSwitchComboBox);
        QWidget::setTabOrder(shiftKeyModeSwitchComboBox, useJapaneseLayout);
        QWidget::setTabOrder(useJapaneseLayout, characterFormEditor);
        QWidget::setTabOrder(characterFormEditor, historySuggestCheckBox);
        QWidget::setTabOrder(historySuggestCheckBox, clearUnusedUserPredictionButton);
        QWidget::setTabOrder(clearUnusedUserPredictionButton, clearUserPredictionButton);
        QWidget::setTabOrder(clearUserPredictionButton, dictionarySuggestCheckBox);
        QWidget::setTabOrder(dictionarySuggestCheckBox, realtimeConversionCheckBox);
        QWidget::setTabOrder(realtimeConversionCheckBox, suggestionsSizeSpinBox);
        QWidget::setTabOrder(suggestionsSizeSpinBox, incognitoModeCheckBox);
        QWidget::setTabOrder(incognitoModeCheckBox, presentationModeCheckBox);
        QWidget::setTabOrder(presentationModeCheckBox, usageStatsCheckBox);
        QWidget::setTabOrder(usageStatsCheckBox, launchAdministrationDialogButtonForUsageStats);
        QWidget::setTabOrder(launchAdministrationDialogButtonForUsageStats, checkDefaultCheckBox);
        QWidget::setTabOrder(checkDefaultCheckBox, IMEHotKeyDisabledCheckBox);
        QWidget::setTabOrder(IMEHotKeyDisabledCheckBox, launchAdministrationDialogButton);
        QWidget::setTabOrder(launchAdministrationDialogButton, startupCheckBox);
        QWidget::setTabOrder(startupCheckBox, verboseLevelComboBox);
        QWidget::setTabOrder(verboseLevelComboBox, resetToDefaultsButton);
        QWidget::setTabOrder(resetToDefaultsButton, configDialogButtonBox);

        retranslateUi(ConfigDialog);

        configDialogTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QCoreApplication::translate("ConfigDialog", "[ProductName] Settings", nullptr));
        inputModeLabel->setText(QCoreApplication::translate("ConfigDialog", "Input mode", nullptr));
        PunctuationsSettingLabel->setText(QCoreApplication::translate("ConfigDialog", "Punctuation style", nullptr));
        symbolsSettingLabel->setText(QCoreApplication::translate("ConfigDialog", "Symbol style", nullptr));
        spaceInputSettingLabel->setText(QCoreApplication::translate("ConfigDialog", "Space input style", nullptr));
        selectionShortcutModeLabel->setText(QCoreApplication::translate("ConfigDialog", "Candidate selection shortcut", nullptr));
        numpadCharacterFormLabel->setText(QCoreApplication::translate("ConfigDialog", "Input from numpad keys", nullptr));
        yenSignLabel->setText(QCoreApplication::translate("ConfigDialog", "Input from \302\245 or backslash key", nullptr));
        keymapSettingLabel->setText(QCoreApplication::translate("ConfigDialog", "Keymap style", nullptr));
        editKeymapButton->setText(QCoreApplication::translate("ConfigDialog", "Customize...", nullptr));
        editRomanTableButton->setText(QCoreApplication::translate("ConfigDialog", "Customize...", nullptr));
        label_11->setText(QCoreApplication::translate("ConfigDialog", "Romaji table", nullptr));
        basicsLabel->setText(QCoreApplication::translate("ConfigDialog", "Basics", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigDialog", "Keymap", nullptr));
        configDialogTabWidget->setTabText(configDialogTabWidget->indexOf(basicTab), QCoreApplication::translate("ConfigDialog", "General", nullptr));
        clearUserHistoryButton->setText(QCoreApplication::translate("ConfigDialog", "Clear personalization data", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigDialog", "Adjust conversion based on previous input", nullptr));
        editUserDictionaryButton->setText(QCoreApplication::translate("ConfigDialog", "Edit user dictionary...", nullptr));
        singleKanjiConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Single kanji conversion", nullptr));
        symbolConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Symbol conversion", nullptr));
        emoticonConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Emoticon conversion", nullptr));
        t13nConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Katakana to English conversion", nullptr));
        zipcodeConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Postal code conversion", nullptr));
        spellingCorrectionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Spelling correction", nullptr));
        calculatorCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Calculator", nullptr));
        numberConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Special number conversion", nullptr));
        dateConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Date/time conversion", nullptr));
        emojiConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Emoji conversion", nullptr));
        label->setText(QCoreApplication::translate("ConfigDialog", "Personalization", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigDialog", "User dictionary", nullptr));
        specialConversionLabel->setText(QCoreApplication::translate("ConfigDialog", "Special conversions", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigDialog", "Usage dictionary", nullptr));
        localUsageDictionaryCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Homonym dictionary", nullptr));
        configDialogTabWidget->setTabText(configDialogTabWidget->indexOf(dictionaryTab), QCoreApplication::translate("ConfigDialog", "Dictionary", nullptr));
        autoCorrectionLable->setText(QCoreApplication::translate("ConfigDialog", "Input Assistance", nullptr));
        autoCorrectionLable_2->setText(QCoreApplication::translate("ConfigDialog", "Fullwidth/Halfwidth", nullptr));
        useAutoImeTurnOff->setText(QCoreApplication::translate("ConfigDialog", "Automatically switch to halfwidth", nullptr));
        autoCorrectionLable_3->setText(QCoreApplication::translate("ConfigDialog", "Shift key mode switch", nullptr));
        toutenCheckBox->setText(QCoreApplication::translate("ConfigDialog", "\343\200\201", nullptr));
        questionMarkCheckBox->setText(QCoreApplication::translate("ConfigDialog", "?", nullptr));
        useAutoConversion->setText(QCoreApplication::translate("ConfigDialog", "Convert at punctuations", nullptr));
        kutenCheckBox->setText(QCoreApplication::translate("ConfigDialog", "\343\200\202", nullptr));
        exclamationMarkCheckBox->setText(QCoreApplication::translate("ConfigDialog", "!", nullptr));
        useJapaneseLayout->setText(QCoreApplication::translate("ConfigDialog", "Always use Japanese keyboard layout for Japanese input", nullptr));
        useModeIndicator->setText(QCoreApplication::translate("ConfigDialog", "Show input mode indicator near the cursor", nullptr));
        configDialogTabWidget->setTabText(configDialogTabWidget->indexOf(inputsupport_tab), QCoreApplication::translate("ConfigDialog", "Advanced", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigDialog", "Source data", nullptr));
        SuggestionPreferenceLabel->setText(QCoreApplication::translate("ConfigDialog", "Other settings", nullptr));
        defaultNUmberofSuggestionsLabel->setText(QCoreApplication::translate("ConfigDialog", "Maximum number of suggestions", nullptr));
        historySuggestCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use input history", nullptr));
        clearUserPredictionButton->setText(QCoreApplication::translate("ConfigDialog", "Clear all history", nullptr));
        dictionarySuggestCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use system dictionary", nullptr));
        clearUnusedUserPredictionButton->setText(QCoreApplication::translate("ConfigDialog", "Clear unused history", nullptr));
        realtimeConversionCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Use realtime conversion", nullptr));
        configDialogTabWidget->setTabText(configDialogTabWidget->indexOf(suggestionsTab), QCoreApplication::translate("ConfigDialog", "Suggest", nullptr));
        usageStatsCheckBox->setText(QString());
        usageStatsMessage->setText(QCoreApplication::translate("ConfigDialog", "Help make [ProductName] better by automatically sending usage statistics and crash reports to Google (changes will take effect after you log out and log back in)", nullptr));
        usageStatsLabel->setText(QCoreApplication::translate("ConfigDialog", "Usage statistics and crash reports", nullptr));
        label_10->setText(QCoreApplication::translate("ConfigDialog", "Secret mode", nullptr));
        incognitoModeCheckBox->setText(QString());
        incognitoModeMessage->setText(QCoreApplication::translate("ConfigDialog", "Temporarily disable conversion personalization, history-based suggestions and user dictionary", nullptr));
        launchAdministrationDialogButtonForUsageStats->setText(QCoreApplication::translate("ConfigDialog", "Settings...", nullptr));
        presentationModeCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Temporarily disable all suggestions", nullptr));
        label_12->setText(QCoreApplication::translate("ConfigDialog", "Presentation mode", nullptr));
        configDialogTabWidget->setTabText(configDialogTabWidget->indexOf(privacyTab), QCoreApplication::translate("ConfigDialog", "Privacy", nullptr));
        checkDefaultLabel->setText(QCoreApplication::translate("ConfigDialog", "Default IME", nullptr));
        checkDefaultCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Check if [ProductName] is the default IME on startup", nullptr));
        IMEHotKeyDisabledCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Disable Keyboard layout hotkey (Ctrl+Shift)", nullptr));
        administrationLabel->setText(QCoreApplication::translate("ConfigDialog", "Administration", nullptr));
        dictionaryPreloadingAndUACLabel->setText(QCoreApplication::translate("ConfigDialog", "Dictionary preloading and UAC settings", nullptr));
        launchAdministrationDialogButton->setText(QCoreApplication::translate("ConfigDialog", "Settings...", nullptr));
        startupLabel->setText(QCoreApplication::translate("ConfigDialog", "Startup", nullptr));
        startupCheckBox->setText(QCoreApplication::translate("ConfigDialog", "Start conversion engine on login", nullptr));
        loggingLabel->setText(QCoreApplication::translate("ConfigDialog", "Logging", nullptr));
        verboseLevelLabel->setText(QCoreApplication::translate("ConfigDialog", "Logging level (debug only)", nullptr));
        configDialogTabWidget->setTabText(configDialogTabWidget->indexOf(miscTab), QCoreApplication::translate("ConfigDialog", "Misc", nullptr));
        resetToDefaultsButton->setText(QCoreApplication::translate("ConfigDialog", "Reset to defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_DIALOG_H
