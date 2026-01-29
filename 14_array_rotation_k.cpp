#include <iostream>
#include <vector>
using namespace std;

void reverseArry(vector<int> &arr, int start, int end)
{
    int i = start;
    int j = end - 1;

    while (i <= j)
    {
        int k = arr[j];
        arr[j] = arr[i];
        arr[i] = k;
        i++;
        j--;
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 1;
    int n = arr.size();
    vector<int> temp(d);

    if (d >= n)
    {
        cout << "Value is greater than or equal array size.\n";
        return 0;
    }

    //////////// left rotation //////
    // for (int i = 0; i < d; i++)
    // {
    //     temp[i] = arr[i];
    // }

    // for (int j = d; j < n; j++)
    // {
    //     arr[j - d] = arr[j];
    // }

    // for (int j = 0; j < d; j++)
    // {
    //     arr[n - d + j] = temp[j];
    // }

    //////////// right rotation //////
    // int count = 0;
    // for (int i = n - d; i < n; i++)
    // {
    //     temp[count] = arr[i];
    //     count++;
    // }

    // for (int i = n - d - 1; i >= 0; i--)
    // {
    //     arr[i + d] = arr[i];
    // }

    // ==================== optimal ============

    // ////////// left shift ////////////
    reverseArry(arr, 0, n);

    reverseArry(arr, 0, n - d);

    reverseArry(arr, n - d, n);

    ////////// left shift ////////////
    // reverseArry(arr, 0, n);

    // reverseArry(arr, 0, d);

    // reverseArry(arr, d, n);

    ////////// itrate arry ////////////
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
