#include <iostream>
using namespace std;

int main()
{
    int n, temp = 0;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            temp = temp + 1;
        }
    }
    if (temp > 0)
    {
        cout << "Not Prime.";
    }
    else
    {
        cout << "Prime";
    }

    return 0;
}