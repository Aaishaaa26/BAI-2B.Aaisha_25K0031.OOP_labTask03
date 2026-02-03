#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    string author;
    float price;

public:

    Book(){
        title = "Untitled";
        author = "Anonymouss";
        price = 0.0;
    }

    Book(string t, string a = "Unknown", float p = 0.0){
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b){
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void show(){
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: Rs." << price << endl <<endl;
    }
};

int main(){
   
    Book b1;
    Book b2("Harry Potter", "JK Rowling", 2000);
    Book b3(b2);
    Book b4("Cleopatra");

    b1.show();
    b2.show();
    b3.show();
    b4.show();

    return 0;
}

