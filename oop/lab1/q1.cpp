#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "Enter 5 numbers:\n";

    for (int i = 1; i <= 5; i++)
    {
        cin >> num;
        cout << "Number " << i << " = " << num << endl;
        sum += num;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}