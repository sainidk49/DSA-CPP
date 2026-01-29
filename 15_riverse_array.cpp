#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    ////// brute force ////////
    // vector<int> temp(n);
    // for (int i = 0; i < n; i++)
    // {
    //     temp[i] = arr[n - i - 1];
    // }

    // for (int j = 0; j < n; j++)
    // {
    //     arr[j] = temp[j];
    // }

    //////////// optimal ////////
    // for (int j = 0; j < n / 2; j++) //// for loop
    // {
    //     int k = arr[j];
    //     arr[j] = arr[n - j - 1];
    //     arr[n - j - 1] = k;
    // }

    ///// while loop  ////
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        int k = arr[j];
        arr[j] = arr[i];
        arr[i] = k;
        i++;
        j--;
    }

    for (int x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}