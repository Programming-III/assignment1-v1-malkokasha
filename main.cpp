/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <string>
Animal::Animal(string name = "",int age=0,bool isHungry=false) {
	this->name=name;
	this->age=age;
	this->isHungry=isHungry;
}
Animal::~Animal() {}
void Animal::display(){
	cout<<name<<"(Age:"<<age<<","<<boolalpha<<isHungry<<endl;
}
void Animal::feed(){
	return (isHungry==true);
}


Mammal::Mammal(string name,int age,bool isHungry,string furColor="") :Animal(name,age,isHungry) {
	this->furColor=furColor;
}
Mammal::~Mammal() {}


Bird::Bird(string name,int age,bool isHungry,float wingSpan=0.0) :Animal(name,age,isHungry) {
	this->wingSpan=wingSpan;
}
Bird::~Bird() {}


Reptile::Reptile(string name,int age,bool isHungry,bool isVenomous=false) :Animal(name,age,isHungry) {
	this->isVenomous=isVenomous;
}
Reptile::~Reptile() {}

Enclosure::Enclosure(string name,int age,bool isHungry,Animal* animal=nullptr,
                     int capacity=0,int currentCount=0):Animal(name,age,isHungry) {
	this->animal=animal;
	this->capacity=capacity;
	this->currentCount=currentCount;
}
Enclosure::~Enclosure() {
	delete[] animal;
}
void Enclosure:: addAnimal(Animal* a) {
	if(currentCount<capacity) {
		animal[currentCount]=a;
		currentCount++;
	}
	else {
		cout<<"Capacity has been reached can not add animal"<<endl;
	}
}
void Enclosure :: displayAnimals() {
	for(int i=0; i<capacity; i++) {
		cout<<"Enclosure "<<currentCount<<" Animals:"<<endl<<endl
		    cout<<Animal::display();
		cout<<endl;
	}
}

Visitor::Visitor(string visitorName="",int ticketsBought=0) {
	this->visitorName=visitorName;
	this->ticketsBought=ticketsBought;
}
Visitor::~Visitor(){}
void Visitor::Visitor displayInfo(){
    cout<<"Visiter Info:"<<endl<<endl;
    cout<<"Name: "<<visitorName<<endl<<endl;
    cout<<"Tickets Bought: "<<ticketsBought<<endl<<endl;
}
int main()
{
    Animal a1("Lion",5,true);
	Animal a2("Parrot",2,false);
	Animal a3("Snake",3,false);
	Enclosure e(a1,0,);
	Visitor v("Sarah ali",3);
	
	cout<<e<<endl;
	cout<<v;

	return 0;
}
