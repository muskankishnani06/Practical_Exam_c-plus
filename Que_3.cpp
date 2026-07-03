#include <iostream>

using namespace std;

// Define a class to represent an animal

class Animal
{
    // Private member variables to store the name and sound of the animal
private:
    string name;
    string sound;

    // Public member functions to set and get the values of the member variables

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setSound(string sound)
    {
        this->sound = sound;
    }

    string getName()
    {
        return name;
    }

    string getSound()
    {
        return sound;
    }
};

// Define classes for Dog and Cat that inherit from Animal

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << getName() << " says " << getSound() << endl;
    }
};

// Define classes for Dog and Cat that inherit from Animal

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << getName() << " says " << getSound() << endl;
    }
};

// Main function to demonstrate the Animal class and its derived classes

int main()
{

    // Create objects of Dog class and set it names and sounds
    Dog d;
    d.setName("Dog");
    d.setSound("Bark");
    
    // Create objects of Cat class and set it names and sounds

    Cat c;
    c.setName("Cat");
    c.setSound("Meow");

    // Call the makeSound() function of Dog and Cat classes to display their names and sounds

    d.makeSound();
    c.makeSound();

    return 0;
}