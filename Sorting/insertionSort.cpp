#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
     for (int i = 1; i < n; i++)
     {

         int key = arr[i];
         int iter = i - 1;
         while (iter >= 0 && key < arr[iter])
         {
             arr[iter + 1] = arr[iter];
               iter--;
         }
         arr[iter + 1] = key;
     }
}

int main()
{

    cout << "Sorting Using Insertion Sort" << endl;
    int num;
    cout << "Size of Arr ";
    cin >> num;
    cout << "Elements of Arr: ";
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, num);
    printArr(arr, num);
    return 0;
}