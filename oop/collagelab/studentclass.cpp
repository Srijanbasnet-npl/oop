#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;

public:
    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}
