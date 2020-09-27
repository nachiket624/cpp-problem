#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    char name[15];
    int year;

public:
    void getdata()
    {
        cout << "Enter student roll no. : ";
        cin >> roll_no;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter year: ";
        cin >> year;
    }
    void display()
    {
        cout << "\n\n";
        cout << "Student roll no: " << roll_no << endl
             << "student name: " << name << endl
             << "student year: " << year;
    }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}