#include "item.h"

Item::Item() :
    m_Name("Trash")
{
}

Item::Item(QString name) :
    m_Name(name)
{
}

Item::Item(QString name, QList<unsigned> bonusStats) :
    m_Name(name),
    m_BonusStats(bonusStats)
{
}


unsigned Item::clasculateCost()
{
    return m_MaxQuality>0?m_MaxQuality - (m_MaxQuality - m_Quality) * 200:1;
}
