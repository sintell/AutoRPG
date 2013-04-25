/********************************************************************************
** Form generated from reading UI file 'autorpg.ui'
**
** Created: Tue Apr 23 20:53:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORPG_H
#define UI_AUTORPG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QFrame>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QProgressBar>
#include <QPushButton>
#include <QStatusBar>
#include <QTextEdit>
#include <QToolBar>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoRpg
{
public:
    QAction *actionNew_character;
    QAction *actionLoad_character;
    QAction *actionMain_options;
    QAction *actionAbout_game;
    QAction *actionAbout_author;
    QAction *actionHelp;
    QAction *actionQuit;
    QAction *actionGenerate_name;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *lb_chCon;
    QTextEdit *te_EventLog;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *lb_chStr;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *lb_chInt;
    QProgressBar *prb_Exp;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lb_chName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *lb_chDex;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QMenu *menuOptions;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AutoRpg)
    {
        if (AutoRpg->objectName().isEmpty())
            AutoRpg->setObjectName(QString::fromUtf8("AutoRpg"));
        AutoRpg->resize(618, 394);
        actionNew_character = new QAction(AutoRpg);
        actionNew_character->setObjectName(QString::fromUtf8("actionNew_character"));
        actionLoad_character = new QAction(AutoRpg);
        actionLoad_character->setObjectName(QString::fromUtf8("actionLoad_character"));
        actionMain_options = new QAction(AutoRpg);
        actionMain_options->setObjectName(QString::fromUtf8("actionMain_options"));
        actionAbout_game = new QAction(AutoRpg);
        actionAbout_game->setObjectName(QString::fromUtf8("actionAbout_game"));
        actionAbout_author = new QAction(AutoRpg);
        actionAbout_author->setObjectName(QString::fromUtf8("actionAbout_author"));
        actionHelp = new QAction(AutoRpg);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionQuit = new QAction(AutoRpg);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionGenerate_name = new QAction(AutoRpg);
        actionGenerate_name->setObjectName(QString::fromUtf8("actionGenerate_name"));
        centralWidget = new QWidget(AutoRpg);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(false);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_7);

        lb_chCon = new QLabel(frame);
        lb_chCon->setObjectName(QString::fromUtf8("lb_chCon"));
        lb_chCon->setStyleSheet(QString::fromUtf8("background: white"));
        lb_chCon->setFrameShape(QFrame::StyledPanel);
        lb_chCon->setFrameShadow(QFrame::Sunken);
        lb_chCon->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lb_chCon);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        te_EventLog = new QTextEdit(frame);
        te_EventLog->setObjectName(QString::fromUtf8("te_EventLog"));
        QPalette palette;
        QBrush brush(QColor(237, 237, 237, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush1);
        te_EventLog->setPalette(palette);
        te_EventLog->setFrameShape(QFrame::StyledPanel);
        te_EventLog->setFrameShadow(QFrame::Sunken);
        te_EventLog->setReadOnly(true);

        gridLayout_2->addWidget(te_EventLog, 2, 0, 1, 5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        lb_chStr = new QLabel(frame);
        lb_chStr->setObjectName(QString::fromUtf8("lb_chStr"));
        lb_chStr->setStyleSheet(QString::fromUtf8("background: white"));
        lb_chStr->setFrameShape(QFrame::StyledPanel);
        lb_chStr->setFrameShadow(QFrame::Sunken);
        lb_chStr->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lb_chStr);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_9);

        lb_chInt = new QLabel(frame);
        lb_chInt->setObjectName(QString::fromUtf8("lb_chInt"));
        lb_chInt->setStyleSheet(QString::fromUtf8("background: white"));
        lb_chInt->setFrameShape(QFrame::StyledPanel);
        lb_chInt->setFrameShadow(QFrame::Sunken);
        lb_chInt->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lb_chInt);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 3, 1, 1);

        prb_Exp = new QProgressBar(frame);
        prb_Exp->setObjectName(QString::fromUtf8("prb_Exp"));
        prb_Exp->setValue(0);

        gridLayout_2->addWidget(prb_Exp, 0, 2, 1, 3);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lb_chName = new QLabel(frame);
        lb_chName->setObjectName(QString::fromUtf8("lb_chName"));
        QFont font1;
        font1.setUnderline(true);
        lb_chName->setFont(font1);
        lb_chName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lb_chName);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        lb_chDex = new QLabel(frame);
        lb_chDex->setObjectName(QString::fromUtf8("lb_chDex"));
        lb_chDex->setStyleSheet(QString::fromUtf8("background: white"));
        lb_chDex->setFrameShape(QFrame::StyledPanel);
        lb_chDex->setFrameShadow(QFrame::Sunken);
        lb_chDex->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lb_chDex);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        AutoRpg->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AutoRpg);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 618, 21));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QString::fromUtf8("menuGame"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        AutoRpg->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AutoRpg);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AutoRpg->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AutoRpg);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AutoRpg->setStatusBar(statusBar);

        menuBar->addAction(menuGame->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuGame->addAction(actionNew_character);
        menuGame->addAction(actionLoad_character);
        menuGame->addSeparator();
        menuGame->addAction(actionQuit);
        menuOptions->addAction(actionMain_options);
        menuOptions->addAction(actionGenerate_name);
        menuAbout->addAction(actionAbout_game);
        menuAbout->addAction(actionAbout_author);
        menuAbout->addSeparator();
        menuAbout->addAction(actionHelp);

        retranslateUi(AutoRpg);

        QMetaObject::connectSlotsByName(AutoRpg);
    } // setupUi

    void retranslateUi(QMainWindow *AutoRpg)
    {
        AutoRpg->setWindowTitle(QApplication::translate("AutoRpg", "AutoRpg", 0));
        actionNew_character->setText(QApplication::translate("AutoRpg", "New character", 0));
        actionLoad_character->setText(QApplication::translate("AutoRpg", "Load character", 0));
        actionMain_options->setText(QApplication::translate("AutoRpg", "Main options", 0));
        actionAbout_game->setText(QApplication::translate("AutoRpg", "About game", 0));
        actionAbout_author->setText(QApplication::translate("AutoRpg", "About author", 0));
        actionHelp->setText(QApplication::translate("AutoRpg", "Help", 0));
        actionQuit->setText(QApplication::translate("AutoRpg", "Quit", 0));
        actionGenerate_name->setText(QApplication::translate("AutoRpg", "Generate name", 0));
        label_7->setText(QApplication::translate("AutoRpg", "Con:", 0));
        lb_chCon->setText(QApplication::translate("AutoRpg", "000", 0));
        te_EventLog->setHtml(QApplication::translate("AutoRpg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:normal;\" bgcolor=\"#ffffff\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label_3->setText(QApplication::translate("AutoRpg", "Str:", 0));
        lb_chStr->setText(QApplication::translate("AutoRpg", "000", 0));
        label_9->setText(QApplication::translate("AutoRpg", "Int:", 0));
        lb_chInt->setText(QApplication::translate("AutoRpg", "000", 0));
        prb_Exp->setFormat(QApplication::translate("AutoRpg", "%v/%m", 0));
        pushButton->setText(QApplication::translate("AutoRpg", "Set behaviour", 0));
        label->setText(QApplication::translate("AutoRpg", "Name:", 0));
        lb_chName->setText(QApplication::translate("AutoRpg", "CharName", 0));
        label_5->setText(QApplication::translate("AutoRpg", "Dex:", 0));
        lb_chDex->setText(QApplication::translate("AutoRpg", "000", 0));
        menuGame->setTitle(QApplication::translate("AutoRpg", "Game", 0));
        menuOptions->setTitle(QApplication::translate("AutoRpg", "Options", 0));
        menuAbout->setTitle(QApplication::translate("AutoRpg", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class AutoRpg: public Ui_AutoRpg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORPG_H
