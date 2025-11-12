#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    Animal(string name,int age,bool isHungry);
    ~Animal();
    void display();
    void feed();
};
#endif
