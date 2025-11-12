#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"
#include <string>
class Enclosure{
    private:
    Animal* animal;
    int capacity;
    int currentCount;
    
    public:
    Enclosure(Animal* animal,int capacity,int currentCount);
    ~Enclosure();
    void addAnimal(Animal* a);
    void displayAnimals();
};
#endif
