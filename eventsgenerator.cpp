#include "eventsgenerator.h"
#include "qmath.h"
#include <QDebug>

EventsGenerator::EventsGenerator(QObject *parent) :
    QObject(parent)
{
}

EventsGenerator::~EventsGenerator()
{
}


EventsGenerator &EventsGenerator::Instance()
{
    static EventsGenerator evGen = EventsGenerator();
    return evGen;
}

void EventsGenerator::generate(EVENT_TYPE type)
{
    if(!m_MainActor) Q_ASSERT("No character was given!");
    m_EventType = type;

    qsrand(time(0));

    m_Description = generateEventDescription(m_MainActor);
    m_Goals = generateEventTarget(m_MainActor);
    m_Results = generateEventResults(m_MainActor);
    m_Revard = generateRevard(m_MainActor);

    m_Gold = qrand()%10 + qrand()%(m_Difficulty+1) + 7;
    qDebug() << ((m_Difficulty + m_MainActor->getLvl())+1) << log((m_Difficulty > 1)?m_Difficulty:2) << log10((m_Difficulty > 1)?m_Difficulty:2) << log2((m_Difficulty > 1)?m_Difficulty:2);
    m_Expirience = ((m_Difficulty + m_MainActor->getLvl())+1) * log((m_Difficulty > 1)?m_Difficulty:2)*10;
    switch (m_EventType) {
    case EV_GLOBAL_EVENT:
        emit(appendToLog(m_Description + "\n" + m_Goals + "\n" + m_Results + ((m_Revard) ? " " + m_Revard->getFullName() : "")));
        break;
    case EV_BATTLE_EVENT:
        emit(appendToLog(m_Description + "\n" + m_Goals + "\n" + m_Results + ((m_Revard) ? " " + m_Revard->getFullName() : "")));
        break;
    case EV_QUEST:
        emit(appendToLog(m_Description + "\n" + m_Goals + "\n" + m_Results + ((m_Revard) ? " " + m_Revard->getFullName() : "")));
        break;
    default:
        Q_ASSERT("WRONG EVENT_TYPE");
        break;
    }

    if(m_Revard){
        m_MainActor->addToBackPack(m_Revard);
        emit(appendToLog(QString("%1 was added to backpack.").arg(m_Revard->getFullName())));
    }
    emit(appendToLog(QString("You've earned %1 gold and %2 expirience.").arg(m_Gold).arg(m_Expirience)));

    m_MainActor->addGold(m_Gold);
    m_MainActor->addExp(m_Expirience);

    //qDebug() << m_Description + "\n" + m_Goals + "\n" + m_Results + " "+ m_Revard->getFullName();
    qDebug() << m_Gold << m_Expirience;
}

QString EventsGenerator::generateEventDescription(Character* mainActor)
{
    QString desc;

    switch (m_EventType) {
    case EV_GLOBAL_EVENT:
        desc.append("As a night comes closer ").append(mainActor->getName().append(" falls asleep."));
        break;
    case EV_BATTLE_EVENT:
        desc.append("");
        break;
    case EV_QUEST:
        desc.append("");
        break;
    default:
        Q_ASSERT("WRONG EVENT_TYPE");
        break;
    }
    return desc;
}

QString EventsGenerator::generateEventTarget(Character *mainActor)
{
    QString target("But before that he remembered");

    switch (m_EventType) {
    case EV_GLOBAL_EVENT:
        switch(mainActor->getClass()) {
        case WARRIOR: target += " the taste of old batles where he get one of that items that are packed in his bag."; break;
        case ROGUE: target += " the old ghost-castle where he get one of that items that are packed in his bag."; break;
        case MAGE: target += " the Academy where he get one of that items that are packed in his bag."; break;
        default: Q_ASSERT("WRONG CH_CLASS!");
        }
        break;
    case EV_BATTLE_EVENT:
        target="";
        break;
    case EV_QUEST:
        target="";
        break;
    default:
        Q_ASSERT("WRONG EVENT_TYPE");
        break;
    }


    return target;
}

QString EventsGenerator::generateEventResults(Character *mainActor)
{
    QString res;

    switch (m_EventType) {
    case EV_GLOBAL_EVENT:
        res.append("He opened his bag once more to check his ");
        break;
    case EV_BATTLE_EVENT:
        res.append("");
        break;
    case EV_QUEST:
        res.append("");
        break;
    default:
        Q_ASSERT("WRONG EVENT_TYPE");
        break;
    }
    return res;
}

Item* EventsGenerator::generateRevard(Character *mainActor)
{
    Item *item;

    switch (m_EventType) {
    case EV_GLOBAL_EVENT:
        item = new Item("Super Hyper Destroyer");
        item->setMaxQuality(mainActor->getLvl()+4);
        break;
    case EV_BATTLE_EVENT:
        item = new Item("Super Hyper Destroyer");
        item->setMaxQuality(mainActor->getLvl()+4);
        break;
    case EV_QUEST:
        item = new Item("Super Hyper Destroyer");
        item->setMaxQuality(mainActor->getLvl()+4);
        break;
    default:
        Q_ASSERT("WRONG EVENT_TYPE");
        break;
    }

    return item;
}
