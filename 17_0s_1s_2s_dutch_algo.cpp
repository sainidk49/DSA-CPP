#include <iostream>
#include <vector>
using namespace std;

void swapValues(vector<int> &arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main()
{

    vector<int> arr = {2, 0, 2, 1, 2, 0, 1, 2, 1, 0};
    int s = 0, m = 0, e = arr.size() - 1;

    while (m <= e)
    {
        if (arr[m] == 0)
        {
            swapValues(arr, s, m);
            s++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else if (arr[m] == 2)
        {
            swapValues(arr, m, e);
            e--;
        }
    }

    for (int x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}