#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello world!";

    qDebug() << "Hello world!b1";

    qDebug() << "Hello world!b2";
    qDebug() << "Hello world!b3";


    return a.exec();
}
