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