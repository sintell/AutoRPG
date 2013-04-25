#include "game.h"
#include <QDebug>

Game::Game(QObject *parent) :
   QObject(parent),
   TIME_TILL_NEXT_TURN(1)
{

}
Game::~Game()
{
}

Game::Game(Character *ch, QTextEdit *textLog) :
    m_MainChar(ch),
    m_EventLog(textLog),
    TIME_TILL_NEXT_TURN(2)
{
    qDebug() << ch->getName();
    foreach ( unsigned stat, ch->statsList() ) {
        qDebug() << stat << " ";
    }

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(proceed()));
    connect(&EventsGenerator::Instance(), SIGNAL(appendToLog(QString)), m_EventLog, SLOT(append(QString)));
    connect(&EventsGenerator::Instance(), SIGNAL(appendToLog(QString)), this, SLOT(declamation(QString)));
}

void Game::start()
{
    timer->start(1000*TIME_TILL_NEXT_TURN);
}

void Game::stop()
{
    disconnect(&EventsGenerator::Instance(), SIGNAL(appendToLog(QString)), m_EventLog, SLOT(append(QString)));
    timer->stop();
    delete(timer);
    timer = 0;
}

void Game::declamation(QString str)
{
    qDebug() << str;


}

void Game::proceed()
{

    qsrand(time(0));

    unsigned difficulty = m_MainChar->getLvl() + m_MainChar->getLvl()/2+qrand()%(m_MainChar->getLvl()/2+1);
    EventsGenerator::Instance().setDifficulty((difficulty > 0) ? (difficulty) : (1) );
    EventsGenerator::Instance().setActor(m_MainChar);

    if(qrand()%100 > 50) {
       EventsGenerator::Instance().generate(EV_GLOBAL_EVENT);
        qDebug() << "Game Event!";
    } else {
        EventsGenerator::Instance().generate(EV_QUEST);
        qDebug() << "Quest!";
    }

    emit(update());

}
