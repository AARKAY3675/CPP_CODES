#include<iostream>
using namespace std ;
class Book {
    public:
    string title ;
    string author;
    int pages;
};
int main ()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 1200;

    Book book2;
    book2.title = "12 Rules for Life";
    book2.author = "Jordan B Peterson";
    book2.pages = 400;


    cout<< book1.title << endl << book1.author << endl << book1.pages << endl << endl ;
    cout<< book2.title << endl << book2.author << endl << book2.pages << endl ;
}
