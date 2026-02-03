#include <iostream>
using namespace std;

int maxDivider(int n1, int n2)
{
    int divi = n1 / 2;
    while (divi > 1)
    {
        if (n1 % divi == 0 && n2 % divi == 0)
        {
            return divi;
        }
        divi--;
    }
    return -1;
}

int main()
{

    int n1 = 15, n2 = 25;

    if (n1 < n2)
    {
        cout << maxDivider(n1, n2);
    }
    else
    {
        cout << maxDivider(n2, n1);
    }

    return 0;
}