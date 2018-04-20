#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello world!";
    qDebug() << "Hello world!m1";

    qDebug() << "Hello world!b2";
    qDebug() << "Hello world!b3";

    qDebug() << "Hello world!b2";
    qDebug() << "Hello world!b3";

    //--full-history with parent rewriting
    //--full-history with parent rewriting1

    qDebug() << "rebase1";
    qDebug() << "rebase2";

    qDebug() << "rebase3";
    qDebug() << "rebase4";
    qDebug() << "rebase5";
    qDebug() << "rebase6";
    qDebug() << "rebase7";
    qDebug() << "rebase8";
    qDebug() << "rebase9";



    return a.exec();
}
