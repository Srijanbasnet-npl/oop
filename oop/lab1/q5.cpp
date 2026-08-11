#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;
    float sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + (float)i / fact;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}