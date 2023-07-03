#include <iostream>
using namespace std;

class Animal
{
public:
    void who_am_i()
    {
        cout << "I am an animal" << endl;
    }

    void eat()
    {
        cout << "I am eating" << endl;
    }
};

class Mammal : public Animal
{
public:
    void feed_young_with_milk()
    {
        cout << "Feeding young with milk" << endl;
    }
};

class Dog : public Mammal
{
public:
    void bark()
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Mammal
{
public:
    void meow()
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Dog my_dog;
    my_dog.feed_young_with_milk();
    my_dog.bark();

    Cat my_cat;
    my_cat.feed_young_with_milk();
    my_cat.meow();

    return 0;
}