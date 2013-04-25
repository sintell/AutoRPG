#ifndef EVENTSGENERATOR_H
#define EVENTSGENERATOR_H

#include "character.h"

#include <QObject>
#include <QString>
#include <QStringList>


enum EVENT_TYPE {
    EV_GLOBAL_EVENT = 0,
    EV_QUEST = 1,
    EV_BATTLE_EVENT
};

enum QUEST_TYPE {
    QST_FIND = 0,
    QST_KILL = 1,
    QST_CREATE
};

class EventsGenerator : public QObject
{
    Q_OBJECT
public:
    inline void setActor(Character* mainActor){ m_MainActor = mainActor; }
    static EventsGenerator &Instance();

    void generate(EVENT_TYPE type);
    void generateQuest();
    void generateBattleEvent();

    inline unsigned getDifficulty() { return m_Difficulty; }
    inline void setDifficulty(unsigned difficulty){ m_Difficulty = difficulty; }
    inline QUEST_TYPE getQuestType(){ return m_QuestType; }
    inline void setQuestType(QUEST_TYPE type){ m_QuestType = type; }

    inline EVENT_TYPE getEventType(){ return m_EventType; }
    inline void setEventType(EVENT_TYPE type){ m_EventType = type; }

signals:
    void appendToLog(QString);
public slots:
    
private:
    explicit EventsGenerator(QObject *parent = 0);
    EventsGenerator(const EventsGenerator& root);
    EventsGenerator& operator=(const EventsGenerator&);
    ~EventsGenerator();

    Item *generateRevard(Character *mainActor);
    QString generateEventResults(Character *mainActor);
    QString generateEventTarget(Character *mainActor);
    QString generateEventDescription(Character *mainActor);

    Character *m_MainActor;
    Creature *m_TargetCreature;

    EVENT_TYPE m_EventType;
    QUEST_TYPE m_QuestType;
    unsigned m_Difficulty;
    unsigned m_TurnsRequired;

    QString m_Description;
    QString m_Goals;
    QString m_Results;
    Item* m_Revard;

    int m_Gold;
    int m_Expirience;
};
#endif // EVENTSGENERATOR_H
