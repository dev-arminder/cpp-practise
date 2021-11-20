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

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (i != minIdx)
        {
            swap(&arr[i], &arr[minIdx]);
        }
    }
}

int main()
{

    cout << "Sorting Using Selection Sort";
    cout << "Size of Arr ";
    int num;
    cin >> num;

    int arr[num];
    cout << "Elements of Arr ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, num);
    printArr(arr, num);
    return 0;
}