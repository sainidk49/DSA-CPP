#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a number 1 to 7 :: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Moday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thurday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Unknown day";
        break;
    }

    return 0;
}