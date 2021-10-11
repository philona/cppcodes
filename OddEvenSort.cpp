// This algorithm is called Odd-Even or Brick Sort
#include<bits/stdc++.h>
using namespace std;
 
//Algorithm sort using Odd Even sort
void oddEvenSort(int arr[], int n)
{
    bool isSorted = false;
 
    while (!isSorted)
    {
        isSorted = true;
 
        // Bubble sort on odd indexed element
        for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                swap(arr[i], arr[i+1]);
                isSorted = false;
              }
        }
 
        // Bubble sort on even indexed element
        for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                isSorted = false;
            }
        }
    }
 
    return;
}
 
// Print an array of size n
void printArray(int arr[], int n)
{
   for (int i=0; i < n; i++)
       cout << arr[i] << " ";
   cout << "\n";
}
 
// tester of the above functions.
int main()
{
    int arr[] = {34, 2, 10, -9};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    oddEvenSort(arr, n);
    printArray(arr, n);
 
    return (0);
}