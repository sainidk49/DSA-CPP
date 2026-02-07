#include <iostream>
#include <vector>
using namespace std;

void swapArr(vector<int> &arr, int s, int e)
{
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
}

void reverseNums(vector<int> &arr, int s)
{
    int e = arr.size() - 1;
    while (s <= e)
    {
        swapArr(arr, s, e);
        s++;
        e--;
    }
}

int main()
{
    vector<int> arr = {2, 1, 5, 4, 3};
    int n = arr.size() - 1;
    int pvt = -1;

    for (int i = arr.size() - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            pvt = i - 1;
            break;
        }
    }

    if (pvt == -1)
    {
        reverseNums(arr, 0);
    }

    else
    {
        int i;
        for (i = n; i > pvt; i--)
        {
            if (arr[i] > arr[pvt])
                break;
        }
        swapArr(arr, pvt, i);
        reverseNums(arr, pvt + 1);
    }

    for (int x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}