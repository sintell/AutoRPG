#ifndef GAME_H
#define GAME_H

#include "character.h"
#include "eventsgenerator.h"

#include <QTimer>
#include <QTextEdit>


class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = 0);
    Game(Character* ch, QTextEdit* textLog);
    ~Game();

    void start();
    void stop();

public slots:
    void declamation(QString);
private slots:
    void proceed();

signals:
    void showString(QString);
    void update();

private:
    Character *m_MainChar;
    QTextEdit *m_EventLog;
    QTimer * timer;


    const unsigned short TIME_TILL_NEXT_TURN;
};

#endif // GAME_H
