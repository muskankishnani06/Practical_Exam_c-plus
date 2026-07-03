// Que=1

#include <iostream>
using namespace std;

// Define a class to represent a book

class Book
{
public:
    string title;
    string author;
    int publishedYear;
};
// Main function to demonstrate the Book class

int main()
{

    // Get the number of books from the user
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    // Create an array of Book objects to store the details of each book

    Book books[n];

    // Get the details of each book from the user

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Title of book : ";
        getline(cin, books[i].title);

        cout << "Author of book : ";
        getline(cin, books[i].author);

        cout << "Published Year of book : ";
        cin >> books[i].publishedYear;
        cin.ignore();
    }

    // Display the details of each book
    
    cout << "\n======= Book Details =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Title : " << books[i].title << endl;
        cout << "Author : " << books[i].author << endl;
        cout << "Year : " << books[i].publishedYear << endl;
    }

    return 0;
}

//Que-2

#include <iostream>
using namespace std;

// Define a class to represent a person

class Person
{

    // Private member variables to store the name, age, and address of the person
private:
    string name;
    int age;
    string address;

    // Public member functions to set and get the values of the member variables

public:
    // Parameterized Constructor to initialize the member variables
    Person(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    // setter
    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setAddress(string address)
    {
        this->address = address;
    }

    // getter
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getAddress()
    {
        return address;
    }
};

// Main function to demonstrate the Person class

int main()
{

    // Get the number of persons from the user
    int n;

    cout << "Enter number of persons: ";
    cin >> n;
    cin.ignore();

    // Create an array of Person pointers to store the details of each person

    Person *p[n];

    string name, address;
    int age;

    // Get the details of each person from the user

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Person " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore();

        cout << "Address: ";
        getline(cin, address);

        p[i] = new Person(name, age, address);
    }

    // Display the details of each person

    cout << "\n==== Person Details ====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n Person" << i + 1 << endl;
        cout << "Name : " << p[i]->getName() << endl;
        cout << "Age : " << p[i]->getAge() << endl;
        cout << "Address : " << p[i]->getAddress() << endl;
    }

    return 0;
}

//Que-3

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

//Que-4

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

//Que-5

#include <iostream>
using namespace std;

// Define an abstract base class Shape with pure virtual functions area() and draw()

class Shape
{

    // Public member functions to calculate the area and draw the shape

public:
    virtual float area() = 0;
    virtual void draw() = 0;

    // Virtual destructor to ensure proper cleanup of derived class objects

    virtual ~Shape() {}
};

// Define classes for Circle and Rectangle that inherit from Shape

class Circle : public Shape
{
    // Private member variable to store the radius of the circle
private:
    float radius;

    // Public member functions to calculate the area and draw the circle

public:
    // Parameterized constructor to initialize the radius of the circle

    Circle(float r)
    {
        radius = r;
    }

    // Function to calculate the area of the circle

    float area()
    {
        return 3.14 * radius * radius;
    }

    // Function to draw the circle and display its area

    void draw()
    {
        cout << "Drawing Circle" << endl;
        cout << "Area = " << area() << endl;
    }
};

// Define classes for Rectangle that inherit from Shape

class Rectangle : public Shape
{

    // Private member variables to store the length and width of the rectangle

private:
    float length, width;

    //  Public member functions to calculate the area and draw the rectangle

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    // Function to calculate the area of the rectangle

    float area()
    {
        return length * width;
    }

    // Function to draw the rectangle and display its area

    void draw()
    {
        cout << "Drawing Rectangle" << endl;
        cout << "Area = " << area() << endl;
    }
};

// Main function to demonstrate the Shape class and its derived classes

int main()
{

    // Create an array of Shape pointers to store the details of each shape
    Shape *shapes[2];

    // Create objects of Circle and Rectangle classes and store them in the array

    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);

    // Call the draw() function of Circle and Rectangle classes to display their areas

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->draw();
        cout << endl;
    }
    
    // Clean up memory by deleting the dynamically allocated objects

    delete shapes[0];
    delete shapes[1];

    return 0;
}
