#include <iostream>
#include <vector>
using namespace std;

// // == == == == == == print 1 to n number == == == == == == == ==
// int printNums(int n)
// {
//     if (n < 1)
//     {
//         return 1;
//     }
//     printNums(n - 1);

//     cout << n << " ";
// }

// int main()
// {
//     int number;
//     cout << "Enter the number to print 1 to number :: ";
//     cin >> number;
//     if (number)
//     {
//         cout << "Series of number :: ";
//         printNums(number);
//     }

//     return 0;
// }

// // == == == == == == factorial number == == == == == == == ==
// int factorial(int n)
// {
//     int fectValue = 1;
//     if (n <= 1)
//     {
//         return 1;
//     }

//     return n * factorial(n - 1);
// }

// int main()
// {
//     int number, result;
//     cout << "enter factorial number :: ";
//     cin >> number;
//     result = factorial(number);
//     cout << "Factorial value of " << number << " is: " << result << endl;
//     return 0;
// }

// // == == == == == == fabonacci number == == == == == == == ==
// int fabonacci(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }

//     return fabonacci(n - 1) + fabonacci(n - 2);
// }

// int main()
// {
//     int number, result;
//     cout << "enter number to make to fabonacci:: ";
//     cin >> number;
//      cout << "Fabonacci list of " << number << " is: ";
//     for (size_t i = 0; i < number; i++)
//     {
//         result = fabonacci(i);
//         cout << result << ", ";
//     }

//     return 0;
// }

// == == == == == == check array is shorted or not == == == == == == == ==
// int checkArray(int size, int arr[]) //// for array
// // int checkArray(int size, vector<int> arr) //////// for vector
// {
//     if (size == 1)
//     {
//         cout << "array is sorted.";
//         return 0;
//     }

//     if (arr[size - 1] >= arr[size - 2])
//     {
//         return checkArray(size - 1, arr); /// for array
//         // return checkArray(size - 1, arr); //////// for vector
//     }
//     else
//     {
//         cout << "array is not sorted.";
//     }
// }

// int main()
// {
//     // by using array
//     int number;
//     cout << "how long your array :: ";
//     cin >> number;
//     if (number != 0)
//     {
//         int arr[number];
//         for (size_t i = 0; i < number; i++)
//         {
//             cin >> arr[i];
//         }
//         int size = sizeof(arr) / sizeof(int);
//         checkArray(size, arr);
//     }

//     // // by using vector
//     // vector<int> arr;
//     // int number;
//     // cout << "how long your vector :: ";
//     // cin >> number;
//     // if (number != 0)
//     // {
//     //     arr.resize(number);
//     //     cout << "enter your " << number << " vector number :: ";
//     //     for (size_t i = 0; i < number; i++)
//     //     {
//     //         cin >> arr[i];
//     //     }

//     //     if (arr.size() > 0)
//     //     {
//     //         checkArray(number, arr);
//     //     }
//     // }

//     return 0;
// }

// == == == == == == subset of array == == == == == == == ==

// void printSubset(vector<int> &arr, vector<int> &ans, int i)
// {
//     // cout << "index1 :: " << i << endl;
//     if (i == arr.size())
//     {
//         for (int val : ans)
//         {
//             cout << val << ", ";
//         }
//         cout << endl;
//         return;
//     }

//     //// include /////
//     ans.push_back(arr[i]);

//     printSubset(arr, ans, i + 1);

//     //// exclude
//     ans.pop_back();

//     printSubset(arr, ans, i + 1);
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3};
//     vector<int> ans;
//     printSubset(arr, ans, 0);

//     return 0;
// }

// == == == == == == subsets of array without duplicate == == == == == == == ==
// void printSubset(vector<int> &arr, vector<int> &ans, int index)
// {
//     if (index == arr.size())
//     {
//         for (int val : ans)
//         {
//             cout << val << ", ";
//         }
//         cout << endl;
//         return;
//     }

//     ////// include //////
//     ans.push_back(arr[index]);
//     printSubset(arr, ans, index + 1);

//     /////// exclude which is call backtarcking ///
//     ans.pop_back();
//     int incIndex = index + 1;
//     while (incIndex < arr.size() && arr[incIndex] == arr[incIndex - 1])
//         incIndex++;
//     printSubset(arr, ans, incIndex);
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 3};
//     vector<int> ans;
//     printSubset(arr, ans, 0);

//     return 0;
// }

// == == == == == == permutations  of array == == == == == == == ==
void permutations(vector<int> &arr, int start)
{
    if (start == arr.size())
    {
        for (int val : arr)
        {
            cout << val << ", ";
        }
        cout << endl;
        return;
    }
    for (size_t i = start; i < arr.size(); i++)
    {
        swap(arr[start], arr[i]);

        permutations(arr, start + 1);

        ////// back tracking ///////
        swap(arr[start], arr[i]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    permutations(arr, 0);

    return 0;
}