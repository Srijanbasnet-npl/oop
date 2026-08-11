#include <iostream>
using namespace std;

class number
{
    private:
        int x;
        
    public:
        number(int n)
        {
            x = n;
        }
        void display()
        {
            cout << "The value of x is: " << x << endl;
        }
};
int main()
{
    number n1(10);
    n1.display();
    return 0;
}