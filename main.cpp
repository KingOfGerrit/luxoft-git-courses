#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello world!";
    qDebug() << "Hello world!m1";

    qDebug() << "Hello world!b1";


    return a.exec();
}
