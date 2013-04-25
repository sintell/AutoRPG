#include "newcharacter.h"
#include "ui_newcharacter.h"

NewCharacter::NewCharacter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewCharacter)
{
    ui->setupUi(this);
    classPreset(WARRIOR);
    m_Points = 15;
    ui->lb_PointsLeft->setText(QVariant(m_Points).toString());

    connect(ui->cb_chClass, SIGNAL(activated(int)), this, SLOT(classPreset(int)));
    connect(ui->pb_ResetStats, SIGNAL(clicked()), this, SLOT(reset()));
}

NewCharacter::~NewCharacter()
{
    delete ui;

}

void NewCharacter::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void NewCharacter::classPreset(int chClass)
{
    switch(chClass) {
    case WARRIOR: {
        ui->sb_chStr->setMinimum(10);
        ui->sb_chDex->setMinimum(5);
        ui->sb_chCon->setMinimum(7);
        ui->sb_chInt->setMinimum(3);
        break;
    }
    case ROGUE: {
        ui->sb_chStr->setMinimum(7);
        ui->sb_chDex->setMinimum(10);
        ui->sb_chCon->setMinimum(7);
        ui->sb_chInt->setMinimum(3);
        break;
    }
    case MAGE: {
        ui->sb_chStr->setMinimum(3);
        ui->sb_chDex->setMinimum(7);
        ui->sb_chCon->setMinimum(5);
        ui->sb_chInt->setMinimum(10);
        break;
    }
    }
    reset();
}

void NewCharacter::reset() {
    ui->sb_chStr->setValue(ui->sb_chStr->minimum());
    ui->sb_chDex->setValue(ui->sb_chDex->minimum());
    ui->sb_chCon->setValue(ui->sb_chCon->minimum());
    ui->sb_chInt->setValue(ui->sb_chInt->minimum());
}

void NewCharacter::on_sb_chStr_valueChanged(int arg1)
{
    int val = 40 - ui->sb_chStr->value() - ui->sb_chDex->value() - ui->sb_chCon->value() - ui->sb_chInt->value();
    if( val < 0 ) {
        ui->sb_chStr->setValue(arg1 - 1);
        return;
    }
    m_Points = val;
    ui->lb_PointsLeft->setText(QVariant(m_Points).toString());

}

void NewCharacter::on_sb_chDex_valueChanged(int arg1)
{
    int val = 40 - ui->sb_chStr->value() - ui->sb_chDex->value() - ui->sb_chCon->value() - ui->sb_chInt->value();
    if( val < 0 ) {
        ui->sb_chDex->setValue(arg1 - 1);
        return;
    }
    m_Points = val;
    ui->lb_PointsLeft->setText(QVariant(m_Points).toString());
}

void NewCharacter::on_sb_chCon_valueChanged(int arg1)
{
    int val = 40 - ui->sb_chStr->value() - ui->sb_chDex->value() - ui->sb_chCon->value() - ui->sb_chInt->value();
    if( val < 0 ) {
        ui->sb_chCon->setValue(arg1 - 1);
        return;
    }
    m_Points = val;
    ui->lb_PointsLeft->setText(QVariant(m_Points).toString());
}

void NewCharacter::on_sb_chInt_valueChanged(int arg1)
{
    int val = 40 - ui->sb_chStr->value() - ui->sb_chDex->value() - ui->sb_chCon->value() - ui->sb_chInt->value();
    if( val < 0 ) {
        ui->sb_chInt->setValue(arg1 - 1);
        return;
    }
    m_Points = val;
    ui->lb_PointsLeft->setText(QVariant(m_Points).toString());
}


void NewCharacter::on_buttonBox_accepted()
{
    Character *ch = new Character(ui->le_chName->text(), static_cast<CH_RACE>(ui->cb_chRace->currentIndex()), static_cast<CH_CLASS>(ui->cb_chClass->currentIndex()),
                                  ui->sb_chStr->value(), ui->sb_chDex->value(), ui->sb_chCon->value(), ui->sb_chInt->value());
    emit(characterCreated(ch));
}
