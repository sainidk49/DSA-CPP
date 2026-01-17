#include <iostream>
#include <vector>
using namespace std;

////// left rotation ///////

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2;
    int n = arr.size();
    vector<int> temp(d);

    if (d > n)
    {
        cout << "Value is greater than array size.\n";
        return 0;
    }

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int j = d; j < n; j++)
    {
        arr[j - d] = arr[j];
    }

    for (int j = 0; j < d; j++)
    {
        arr[n - d + j] = temp[j];
    }

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}