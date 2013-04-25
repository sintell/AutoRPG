#include "character.h"
#include "qmath.h"
#include <QDebug>

Character::Character(QString name, CH_RACE chRace, CH_CLASS chClass) :
    Creature(name),
    m_Name(name),
    m_Race(chRace),
    m_Class(chClass),
    m_Lvl(100),
    m_Str(100),
    m_Dex(100),
    m_Con(100),
    m_Int(100),
    m_CurrentExp(0),
    m_ExpToLvlUp(100)
{
}


Character::Character(QString name, CH_RACE chRace, CH_CLASS chClass, unsigned strength,
                     unsigned dexterity, unsigned constitution, unsigned intellect) :
    Creature(name, strength, dexterity, constitution, intellect),
    m_Name(name),
    m_Race(chRace),
    m_Class(chClass),
    m_Lvl(0),
    m_Str(strength),
    m_Dex(dexterity),
    m_Con(constitution),
    m_Int(intellect),
    m_GoldAmount(10),
    m_CurrentExp(0),
    m_ExpToLvlUp(100)
{
    if( m_Name.isEmpty() ) m_Name =  NameGenerator::generate(m_Race, m_Class);
    this->setTitle(NameGenerator::generateTitle("Dupper", "Supper"));
    this->addGold(10);
}

Character::~Character()
{

}

void Character::addExp(unsigned expirience)
{
    if(expirience + m_CurrentExp >= m_ExpToLvlUp) {
        m_Lvl++;
        m_CurrentExp = (expirience + m_CurrentExp) % m_ExpToLvlUp;
        m_ExpToLvlUp *= exp(m_Lvl)/exp(m_Lvl-1);
        this->lvlUp();
    } else {
        m_CurrentExp += expirience;
    }
}

void Character::lvlUp()
{
    float strCoef = 0,
          dexCoef = 0,
          conCoef = 0,
          intCoef = 0;

    switch (m_Class) {
    case WARRIOR:
        strCoef += m_Lvl%5 * 2;
        dexCoef += m_Lvl%5 * 0.5;
        conCoef += m_Lvl%5 * 1;
        intCoef += m_Lvl%5 * 0.2;
        break;
    case ROGUE:
        strCoef += m_Lvl%5 * 0.5;
        dexCoef += m_Lvl%5 * 2;
        conCoef += m_Lvl%5 * 1;
        intCoef += m_Lvl%5 * 0.2;
        break;
    case MAGE:
        strCoef += m_Lvl%5 * 0.2;
        dexCoef += m_Lvl%5 * 0.5;
        conCoef += m_Lvl%5 * 1;
        intCoef += m_Lvl%5 * 2;
        break;
    default: Q_ASSERT("WRONG CH_CLASS");
        break;
    }

    switch (m_Race) {
    case HUMAN:
        strCoef *= 1.2;
        dexCoef *= 1.2;
        conCoef *= 1.2;
        intCoef *= 1.2;
        break;
    case ELF:
        strCoef *= 0.9;
        dexCoef *= 1.5;
        conCoef *= 0.9;
        intCoef *= 1.5;
        break;
    case ORC:
        strCoef *= 1.5;
        dexCoef *= 0.9;
        conCoef *= 1.5;
        intCoef *= 0.9;
        break;
    default: Q_ASSERT("WRONG CH_RACE");
        break;
    }

    m_Str += round(strCoef);
    m_Dex += round(dexCoef);
    m_Con += round(conCoef);
    m_Int += round(intCoef);
}
