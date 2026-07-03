#include <iostream>
using namespace std;

// Define a base class Animal with a virtual function displayDetails()

class Animal
{
    // Protected member variable to store the name of the animal

protected:
    string name;

    // Public member function to display the details of the animal

public:
    // Parameterized constructor to initialize the name of the animal

    Animal(string n)
    {
        name = n;
    }

    // Virtual function to display the details of the animal

    virtual void displayDetails()
    {
        cout << "Animal: " << name << endl;
    }
    // Virtual destructor to ensure proper cleanup of derived class objects

    virtual ~Animal() {}
};

// Define classes for Dog that inherit from Animal

class Dog : public Animal
{
public:
    Dog(string n) : Animal(n) {}

    void displayDetails() override
    {
        cout << "Dog Name : " << name << endl;
        cout << "Sound : Bark" << endl;
    }
};
// Define classes for Cat that inherit from Animal

class Cat : public Animal
{
public:
    Cat(string n) : Animal(n) {}

    void displayDetails() override
    {
        cout << "Cat Name : " << name << endl;
        cout << "Sound : Meow" << endl;
    }
};

// Main function to demonstrate the Animal class and its derived classes

int main()
{
    // Create an array of Animal pointers to store the details of each animal

    Animal *animals[2];
    
    // Create objects of Dog and Cat classes and store them in the array

    animals[0] = new Dog("Tommy");
    animals[1] = new Cat("Kitty");

    // Call the displayDetails() function of Dog and Cat classes to display their names and sounds

    for (int i = 0; i < 2; i++)
    {
        animals[i]->displayDetails();
        cout << endl;
    }
    
    // Clean up memory by deleting the dynamically allocated objects

    delete animals[0];
    delete animals[1];

    return 0;
}