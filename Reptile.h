#ifndef REPTILE_H
#define REPTILE_H
#include <string>
#include "Animal.h"
class Reptile: Animal{
    private:
    bool isVenomous;
    public:
    
    Reptile(string name,int age,bool isHungry,bool isVenomous);
    ~Reptile();
};
#endif
