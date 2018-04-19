#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello world!";
    qDebug() << "Hello world!m1";

    qDebug() << "Hello world!b1";

    qDebug() << "Hello world!b2";
    qDebug() << "Hello world!b3";

    //--full-history with parent rewriting
    //--full-history with parent rewriting


    return a.exec();
}
