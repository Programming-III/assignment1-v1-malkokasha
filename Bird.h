#ifndef BIRD_H
#define BIRD_H
#include <string>
#include "Animal.h"
class Bird: Animal{
    private:
    float wingSpan;
    
    public:
    Bird(string name,int age,bool isHungry,float wingSpan);
    ~Bird();
};
#endif
