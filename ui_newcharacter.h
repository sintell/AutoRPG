/********************************************************************************
** Form generated from reading UI file 'newcharacter.ui'
**
** Created: Tue Apr 23 20:53:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHARACTER_H
#define UI_NEWCHARACTER_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDialog>
#include <QDialogButtonBox>
#include <QFrame>
#include <QGridLayout>
#include <QGroupBox>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpinBox>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewCharacter
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *cb_chClass;
    QLabel *label;
    QLineEdit *le_chName;
    QComboBox *cb_chRace;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSpinBox *sb_chStr;
    QLabel *label_4;
    QLabel *lb_PointsLeft;
    QSpinBox *sb_chCon;
    QLabel *label_5;
    QSpinBox *sb_chInt;
    QSpinBox *sb_chDex;
    QLabel *label_8;
    QFrame *line;
    QPushButton *pb_ResetStats;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewCharacter)
    {
        if (NewCharacter->objectName().isEmpty())
            NewCharacter->setObjectName(QString::fromUtf8("NewCharacter"));
        NewCharacter->setWindowModality(Qt::WindowModal);
        NewCharacter->resize(347, 379);
        NewCharacter->setModal(true);
        verticalLayout = new QVBoxLayout(NewCharacter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(NewCharacter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        cb_chClass = new QComboBox(groupBox);
        cb_chClass->setObjectName(QString::fromUtf8("cb_chClass"));

        gridLayout_2->addWidget(cb_chClass, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_chName = new QLineEdit(groupBox);
        le_chName->setObjectName(QString::fromUtf8("le_chName"));

        gridLayout_2->addWidget(le_chName, 0, 1, 1, 1);

        cb_chRace = new QComboBox(groupBox);
        cb_chRace->setObjectName(QString::fromUtf8("cb_chRace"));

        gridLayout_2->addWidget(cb_chRace, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NewCharacter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        sb_chStr = new QSpinBox(groupBox_2);
        sb_chStr->setObjectName(QString::fromUtf8("sb_chStr"));
        sb_chStr->setReadOnly(false);
        sb_chStr->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout->addWidget(sb_chStr, 0, 1, 1, 2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lb_PointsLeft = new QLabel(groupBox_2);
        lb_PointsLeft->setObjectName(QString::fromUtf8("lb_PointsLeft"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        lb_PointsLeft->setFont(font);

        gridLayout->addWidget(lb_PointsLeft, 8, 1, 1, 1);

        sb_chCon = new QSpinBox(groupBox_2);
        sb_chCon->setObjectName(QString::fromUtf8("sb_chCon"));
        sb_chCon->setReadOnly(false);

        gridLayout->addWidget(sb_chCon, 2, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        sb_chInt = new QSpinBox(groupBox_2);
        sb_chInt->setObjectName(QString::fromUtf8("sb_chInt"));
        sb_chInt->setMinimumSize(QSize(0, 27));
        sb_chInt->setReadOnly(false);

        gridLayout->addWidget(sb_chInt, 3, 1, 1, 2);

        sb_chDex = new QSpinBox(groupBox_2);
        sb_chDex->setObjectName(QString::fromUtf8("sb_chDex"));
        sb_chDex->setMinimumSize(QSize(0, 27));
        sb_chDex->setReadOnly(false);

        gridLayout->addWidget(sb_chDex, 1, 1, 1, 2);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        line = new QFrame(groupBox_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 3, 3);

        pb_ResetStats = new QPushButton(groupBox_2);
        pb_ResetStats->setObjectName(QString::fromUtf8("pb_ResetStats"));

        gridLayout->addWidget(pb_ResetStats, 8, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(NewCharacter);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(cb_chRace);
        label->setBuddy(le_chName);
        label_3->setBuddy(cb_chClass);
        label_6->setBuddy(sb_chCon);
        label_4->setBuddy(sb_chStr);
        label_5->setBuddy(sb_chDex);
        label_7->setBuddy(sb_chInt);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(le_chName, cb_chRace);
        QWidget::setTabOrder(cb_chRace, cb_chClass);
        QWidget::setTabOrder(cb_chClass, sb_chStr);
        QWidget::setTabOrder(sb_chStr, sb_chDex);
        QWidget::setTabOrder(sb_chDex, sb_chCon);
        QWidget::setTabOrder(sb_chCon, sb_chInt);
        QWidget::setTabOrder(sb_chInt, buttonBox);
        QWidget::setTabOrder(buttonBox, pb_ResetStats);

        retranslateUi(NewCharacter);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewCharacter, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewCharacter, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewCharacter);
    } // setupUi

    void retranslateUi(QDialog *NewCharacter)
    {
        NewCharacter->setWindowTitle(QApplication::translate("NewCharacter", "Creane new character", 0));
#ifndef QT_NO_WHATSTHIS
        NewCharacter->setWhatsThis(QApplication::translate("NewCharacter", "Character creation dialog", 0));
#endif // QT_NO_WHATSTHIS
        groupBox->setTitle(QApplication::translate("NewCharacter", "Information", 0));
        label_2->setText(QApplication::translate("NewCharacter", "Race", 0));
        cb_chClass->clear();
        cb_chClass->insertItems(0, QStringList()
         << QApplication::translate("NewCharacter", "Warrior", 0)
         << QApplication::translate("NewCharacter", "Rogue", 0)
         << QApplication::translate("NewCharacter", "Mage", 0)
        );
        label->setText(QApplication::translate("NewCharacter", "Name", 0));
        le_chName->setText(QString());
        le_chName->setPlaceholderText(QApplication::translate("NewCharacter", "Leave blank to generate random name", 0));
        cb_chRace->clear();
        cb_chRace->insertItems(0, QStringList()
         << QApplication::translate("NewCharacter", "Human", 0)
         << QApplication::translate("NewCharacter", "Elf", 0)
         << QApplication::translate("NewCharacter", "Orc", 0)
        );
        label_3->setText(QApplication::translate("NewCharacter", "Class", 0));
        groupBox_2->setTitle(QApplication::translate("NewCharacter", "Characteristics", 0));
        label_6->setText(QApplication::translate("NewCharacter", "Constitution", 0));
        label_4->setText(QApplication::translate("NewCharacter", "Strength", 0));
        lb_PointsLeft->setText(QApplication::translate("NewCharacter", "0", 0));
        label_5->setText(QApplication::translate("NewCharacter", "Dexterity", 0));
        label_8->setText(QApplication::translate("NewCharacter", "Points left to spend:", 0));
        pb_ResetStats->setText(QApplication::translate("NewCharacter", "Reset", 0));
        label_7->setText(QApplication::translate("NewCharacter", "Intelegence", 0));
    } // retranslateUi

};

namespace Ui {
    class NewCharacter: public Ui_NewCharacter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHARACTER_H
