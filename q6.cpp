#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int sum = 0, term = x;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - term;
        else
            sum = sum + term;

        term = term * x;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}