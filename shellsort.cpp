#include <iostream>
using namespace std;

void shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[5];
    cout<<"Enter 5 elements in the array"<<endl;
    for (int i=0; i < 5; i++)
        cin>>arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
    shellSort(arr, n);
    printArray(arr, n);

    return 0;
}