#include <iostream>
using namespace std;

class Book {
private:
    const char* author;
    const char* name;
    const char* publishingHouse;
    int year;
    int numberPages;
public:
    //������� ����������� ( � ���� ����� ���� )
    explicit Book(const char* a, const char* n, const char* pH, int y, int nP) : author(a), name(n), publishingHouse(pH), year(y), numberPages(nP) {}
    //�������
    const char* getauthor() {
        return author;
    }
    const char* getname() {
        return name;
    }
    const char* getpublishingHouse() {
        return publishingHouse;
    }
    int getyear() {
        return year;
    }
    int getnumberPages() {
        return numberPages;
    }
    //�������
    void setauthor(const char* a) {
        author = a;
    }
    void setname(const char* n) {
        name = n;
    }
    void setpublishingHouse(const char* pH) {
        publishingHouse= pH;
    }
    void setyear(int y) {
        year = y;
    }
    void setnumberPages(int nM) {
        numberPages = nM;
    }
    //���� ������
    void printall() {
        cout << "Author: " << author << " |Name: " << name << " |Publishing House: " << publishingHouse << " |Year: " << year << " |Number of Pages: " << numberPages << endl;
    }
};

void sortByAuthor(Book books[], const char* authorName) {
    cout << "Books published by: " << authorName << endl;
    for (int i = 0; i < sizeof(books); i++) {
        if (books[i].getauthor() == authorName) {
            books[i].printall();
        }
    }
    cout << endl;
}
void sortByHouse(Book books[], const char* houseName) {
    cout << "Books published by: " << houseName << endl;
    for (int i = 0; i < sizeof(books); i++) {
        if (books[i].getpublishingHouse() == houseName) {
            books[i].printall();
        }
    }
    cout << endl;
}

void sortByYear(Book books[], int afterYear) {
    cout << "Books published after: " << afterYear << endl;
    for (int i = 0; i < sizeof(books); i++) {
        if (books[i].getyear() >= afterYear) {
            books[i].printall();
        }
    }
    cout << endl;
}

int main() {
    Book books[5] = {
        Book("Gabe", "My Book", "House Of Sheesh", 2022, 20),
        Book("Tyler", "Fight Club", "Sigma Writing House", 2009, 380),
        Book("Gabe", "How To Become a sigma", "Sigma Writing House", 2021, 101),
        Book("Tyler", "Fight Club Rules", "Tyler's Fighting Basement", 2009, 1),
        Book("Gabe", "20 and 12", "House Of Sheesh", 2012, 212)
    };

    // printBook({"Author", "Name", "House", 2024, 300}); //�������: ������ ��������� ����������
    //Book book1("Author", "Name", "House", 2024, 300); //����� ������
    //book1.setauthor("lol");
    //book1.printall();
    sortByAuthor(books, "Tyler");
    sortByHouse(books, "House Of Sheesh");
    sortByYear(books, 2012);
}