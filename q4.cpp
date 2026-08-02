#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int sum = 1;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        sum = sum + i * x * x;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}