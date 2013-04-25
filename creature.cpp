#include "creature.h"

Creature::Creature(QString name) :
    m_Name(name),
    m_Lvl(100),
    m_Str(100),
    m_Dex(100),
    m_Con(100),
    m_Int(100)
{
}

Creature::Creature(QString name, unsigned strength,
                     unsigned dexterity, unsigned constitution, unsigned intellect) :
    m_Name(name),
    m_Lvl(0),
    m_Str(strength),
    m_Dex(dexterity),
    m_Con(constitution),
    m_Int(intellect)
{
    if( m_Name.isEmpty() ) m_Name =  NameGenerator::generate();
}

Creature::~Creature()
{

}
