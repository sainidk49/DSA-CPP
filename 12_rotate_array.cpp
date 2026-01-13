#include <bits/stdc++.h>
using namespace std;

void roateArr(int arr[], int n)
{

    // brute force
    // int temp[n];
    // for (int i = 1; i < n; i++) {
    //     temp[i - 1] = arr[i];
    // }
    // temp[n - 1] = arr[0];

    // for (int i = 0; i < n; i++) {
    //     cout << temp[i] << " ";
    // }

    ///////// otimal aproch
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    roateArr(arr, n);

    return 0;
}