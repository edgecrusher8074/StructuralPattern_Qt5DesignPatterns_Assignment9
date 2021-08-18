#pragma once

#include <QObject>
#include <animalinterface.h>

class Gazelle : public QObject, public AnimalInterface
{
    Q_OBJECT
public:
    explicit Gazelle(QObject *parent = nullptr);

    // AnimalInterface interface
    virtual void sleep() override;
    virtual void hunt() override;
    virtual void eat() override;
};

