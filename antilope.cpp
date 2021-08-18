#include "antilope.h"

#include <QDebug>

Antilope::Antilope(QObject *parent) : QObject(parent)
{

}

void Antilope::sleep()
{
    qDebug() << this << "*Snorring*";
}

void Antilope::hunt()
{
    qDebug() << this << "Searching for sparkling wine...";
}

void Antilope::eat()
{
     qDebug() << this << "*Blob* + *Fizzle*";
}
