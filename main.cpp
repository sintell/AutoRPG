#include <QApplication>
#include "autorpg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AutoRpg w;
    w.show();
    
    return a.exec();
}
