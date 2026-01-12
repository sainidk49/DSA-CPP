#include <iostream>
#include <vector>

using namespace std;

bool isArrSorted(const vector<int>& arr)
{

    if (arr.size() <= 1)
        return true;

    for (size_t i = 1; i < arr.size(); i++)
    {

        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {5, 4, 6, 7, 8};

    cout << (isArrSorted(arr1) ? "Array 1 is sorted\n" : "Array 1 is not sorted\n");
    cout << (isArrSorted(arr2) ? "Array 2 is sorted\n" : "Array 2 is not sorted\n");

    return 0;
}