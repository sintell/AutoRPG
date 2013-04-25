#ifndef CREATURE_H
#define CREATURE_H

#include "namegenerator.h"
#include "item.h"

#include <QString>
#include <QStringList>

class Creature
{
public:
    Creature( QString name);
    Creature( QString name,
              unsigned strength,
              unsigned dexterity,
              unsigned constitution,
              unsigned intellect
              );
    ~Creature();

    inline QString getName(){ return m_Name; }
    inline unsigned getLvl(){return m_Lvl;}

    inline unsigned getStr(){ return m_Str; }
    inline unsigned getDex(){ return m_Dex; }
    inline unsigned getCon(){ return m_Con; }
    inline unsigned getInt(){ return m_Int; }

    inline void setName(QString name){ m_Name = name; }
    inline void setLvl(unsigned lvl){ m_Lvl = lvl;}

    inline void setStr(unsigned strength){ m_Str = strength; }
    inline void setDex(unsigned dexterity){ m_Dex = dexterity; }
    inline void setCon(unsigned constitution){ m_Con = constitution; }
    inline void setInt(unsigned intellect){ m_Int = intellect; }

    inline QList<unsigned> statsList(){ QList<unsigned> stats; stats << m_Str << m_Dex << m_Con << m_Int; return stats; }

protected:
    QString m_Name;

    unsigned m_Lvl;
    unsigned m_Str;
    unsigned m_Dex;
    unsigned m_Con;
    unsigned m_Int;

};

#endif // CREATURE_H
