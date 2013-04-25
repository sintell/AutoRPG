#ifndef CHARACTER_H
#define CHARACTER_H

#include "creature.h"

class Quest;

class Character : public Creature
{
public:
    Character(QString name,
              CH_RACE chRace,
              CH_CLASS chClass
              );
    Character(QString name,
              CH_RACE chRace,
              CH_CLASS chClass,
              unsigned strength,
              unsigned dexterity,
              unsigned constitution,
              unsigned intellect
              );
    ~Character();

    inline QString getName(){ return m_Name; }
    inline QString getFullName(){ return m_Name + " " + m_Title; }

    inline QString getTitle(){ return m_Title; }
    inline void setTitle(QString title){ m_Title = title; }

    inline unsigned getStr(){ return m_Str; }
    inline unsigned getDex(){ return m_Dex; }
    inline unsigned getCon(){ return m_Con; }
    inline unsigned getInt(){ return m_Int; }

    void addExp(unsigned expirience);
    inline unsigned getExp(){ return m_CurrentExp; }
    inline unsigned getExpToLvlUp(){ return m_ExpToLvlUp; }
    inline unsigned getLvl(){return m_Lvl;}

    inline void setCurrentQuest(Quest* newQuest){ m_CurrentQuest = newQuest; }
    inline Quest* getCurrentQuest(){ return m_CurrentQuest; }

    inline CH_CLASS getClass(){ return m_Class; }
    inline CH_RACE getRace(){ return m_Race; }

    inline void addToBackPack(Item* item){ m_BackPack.append(item); }
    inline void addGold(unsigned amount){ m_GoldAmount += amount; }
    inline void spendGold(unsigned amount){ m_GoldAmount -= amount; }
    inline unsigned getGold(){ return m_GoldAmount; }
    inline QList<Item*> lookInBackPack(){ return m_BackPack; }
    inline Item* getFromBackPack(){ return m_BackPack.takeLast(); }


    inline QList<unsigned> statsList(){ QList<unsigned> stats; stats << m_Str << m_Dex << m_Con << m_Int; return stats; }

private:

    void lvlUp();

    QString m_Name;
    QString m_Title;

    Quest* m_CurrentQuest;

    CH_RACE m_Race;
    CH_CLASS m_Class;


    unsigned m_Lvl;
    unsigned m_Str;
    unsigned m_Dex;
    unsigned m_Con;
    unsigned m_Int;

    unsigned m_CurrentExp;
    unsigned m_ExpToLvlUp;

    unsigned m_GoldAmount;
    QList<Item*> m_BackPack;

};

#endif // CHARACTER_H
