#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
{
    vector<int> arr = {8, 10, 5, 7, 9};

    ////// time complexity N //////

    // int largetNum = arr[0];
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] > largetNum)
    //     {
    //         largetNum = arr[i];
    //     }
    // }
    // cout << largetNum << "\n";


    ////// time complexity nlogn //////
    sort(arr.begin(), arr.end());

    cout << arr[arr.size() - 1] << "\n";

    return 0;
}