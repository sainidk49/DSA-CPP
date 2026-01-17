#include <iostream>
#include <vector>
using namespace std;



int main()
{

    // vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
    vector<int> arr = {1, 0, 2, 4, 0, 2, 0};

    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }

     for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}