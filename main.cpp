#include <QCoreApplication>

/**
 * @brief Assignment 7 for Qt5 Design Patterns Tutorial on Udemy.
 * @details Simple application to demonstrate how to brigde
 *          classes with a common interface.
 * @author edgecrusher8074
 */

#include <animalinterface.h>
#include <antilope.h>
#include <gazelle.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Antilope panzi;
    Gazelle nmzs;

    AnimalInterface::testInterface(&panzi);
    AnimalInterface::testInterface(&nmzs);


    return a.exec();
}
