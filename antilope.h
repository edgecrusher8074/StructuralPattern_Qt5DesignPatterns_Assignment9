#pragma once

#include <QObject>
#include <animalinterface.h>

class Antilope : public QObject, public AnimalInterface
{
    Q_OBJECT
public:
    explicit Antilope(QObject *parent = nullptr);

    // AnimalInterface interface
    virtual void sleep() override;
    virtual void hunt() override;
    virtual void eat() override;
};

