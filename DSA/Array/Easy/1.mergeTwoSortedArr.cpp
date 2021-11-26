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

// Approch -  1 Idea from insertion Sort

void implementionOfIdeaFirst()
{
    int arrA[4] = {10, 15, 20, 40};
    int arrB[5] = {5, 6, 6, 10, 15};

    int mergeSortedArr[9] = {0};
    int sizeMS = 3;
    for (int i = 0; i < 4; i++)
    {
        mergeSortedArr[i] = arrA[i];
    }

    for (int i = 0; i < 5; i++)
    {
        int targetEl = arrB[i];
        int j = sizeMS;
        while (j >= 0 && mergeSortedArr[j] > targetEl)
        {
            mergeSortedArr[j + 1] = mergeSortedArr[j];
            j--;
        }
        mergeSortedArr[j + 1] = targetEl;
        sizeMS += 1;
    }
    printArr(mergeSortedArr, 9);
}

void optimizedApp(int arrA[], int a, int arrB[], int b)
{
    int i = 0, j = 0;
    while (i < a && j < b)
    {
        if (arrA[i] < arrB[j])
        {
            cout << arrA[i] << " ";
            i++;
        }
        else
        {
            cout << arrB[j] << " ";
            j++;
        }
    }
    while (i < a)
    {
        cout << arrA[i] << " ";
        i++;
    }
    while (j < b)
    {
        cout << arrB[j] << " ";
        j++;
    }
}

int main()
{
    int arrA[4] = {10, 15, 20, 40};
    int arrB[5] = {5, 6, 6, 10, 15};

    optimizedApp(arrA, 4, arrB, 5);

    return 0;
}
