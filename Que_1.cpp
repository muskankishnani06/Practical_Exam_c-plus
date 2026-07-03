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