#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter the limit: ";
    cin >> n;

    cout << "Prime numbers are:\n";

    for (i = 2; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == i)
            cout << i << " ";
    }

    return 0;
}