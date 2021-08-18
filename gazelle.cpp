#include "gazelle.h"

#include <QDebug>

Gazelle::Gazelle(QObject *parent) : QObject(parent)
{

}

void Gazelle::sleep()
{
    qDebug() << this << "Zzzzzzzz....";
}

void Gazelle::hunt()
{
    qDebug() << this << "Searching for instant ramen...";
}

void Gazelle::eat()
{
    qDebug() << this << "*Slurping noises*";
}
