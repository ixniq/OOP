#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int yearOfPublication;
public:
    Book() : yearOfPublication(0) {}
    void setTitle(const string& bookTitle) {
        title = bookTitle;
    }
    void setAuthor(const string& bookAuthor) {
        author = bookAuthor;
    }
    void setYearOfPublication(int year) {
        yearOfPublication = year;
    }
    void displayBookInfo() {
        cout << "Nazvanie: " << title << endl;
        cout << "Avtor: " << author << endl;
        cout << "God izdaniya: " << yearOfPublication << endl;
    }
};
int main() {
    Book book1;
    book1.setTitle("Prestuplenie i nakazanie");
    book1.setAuthor("Fyodor Dostoevsky");
    book1.setYearOfPublication(1866);
    cout << "Informatsiya o knige:" << endl;
    book1.displayBookInfo();
    return 0;
}
