#ifndef NEWCHARACTER_H
#define NEWCHARACTER_H

#include "character.h"

#include <QDialog>

namespace Ui {
class NewCharacter;
}

class NewCharacter : public QDialog
{
    Q_OBJECT
    
public:
    explicit NewCharacter(QWidget *parent = 0);
    ~NewCharacter();


signals:
    void characterCreated(Character*);
    
protected:
    void changeEvent(QEvent *e);
    
private slots:
    void on_sb_chStr_valueChanged(int arg1);

    void on_sb_chDex_valueChanged(int arg1);

    void on_sb_chCon_valueChanged(int arg1);

    void on_sb_chInt_valueChanged(int arg1);

    void classPreset(int chClass);

    void reset();

    void on_buttonBox_accepted();

private:
    Ui::NewCharacter *ui;

    unsigned short m_Points;
};

#endif // NEWCHARACTER_H
