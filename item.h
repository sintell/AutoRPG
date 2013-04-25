#ifndef ITEM_H
#define ITEM_H

#include <QString>
#include <QList>
#include <QVariant>
#include <time.h>

class Item
{
public:
    Item();
    Item(QString name);
    Item(QString name, QList<unsigned> bonusStats);
    ~Item();

    inline void setMaxQuality(unsigned short maxQuality){ m_MaxQuality = maxQuality; qsrand(time(0)); m_Quality = qrand()%(m_MaxQuality+1); }

    inline QString getName(){ return m_Name; }
    inline QString getFullName() {return m_Name + " +" + QVariant(m_Quality).toString(); }
    inline QList<unsigned> getBonusStats(){ return m_BonusStats; }
    inline unsigned short getQuality(){ return m_Quality; }

private:
    unsigned clasculateCost();

    QString m_Name;
    QList<unsigned> m_BonusStats;
    unsigned short m_Quality;
    unsigned short m_MaxQuality;

    unsigned m_Cost;
};

#endif // ITEM_H
