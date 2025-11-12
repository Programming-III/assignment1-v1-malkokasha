#ifndef MAMMAL_H
#define MAMMAL_H
#include <string>
#include "Animal.h"
class Mammal: Animal{
    private:
    string furColor;
    
    public:
    Mammal(string name,int age,bool isHungry,string furColor);
    ~Mammal();
};
#endif
