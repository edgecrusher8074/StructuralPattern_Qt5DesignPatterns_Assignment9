#pragma once

class AnimalInterface
{
public:
    virtual void eat() = 0;
    virtual void sleep() = 0;
    virtual void hunt() = 0;

    static void testInterface(AnimalInterface* animal)
    {
        animal->sleep();
        animal->hunt();
        animal->eat();
    }
};
