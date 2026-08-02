#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }

    cout << "Sum of the harmonic series = " << sum << endl;

    return 0;
}