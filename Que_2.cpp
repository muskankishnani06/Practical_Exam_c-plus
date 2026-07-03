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