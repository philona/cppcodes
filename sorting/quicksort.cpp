#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int piv = arr[r];

    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if(arr[j] < piv)
        {
            i++;
            swap(arr,i,j);
        }
    }
    
    swap(arr,i+1,r);

    return i+1;
}

void QuickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int piv = partition(arr, l, r);

        QuickSort(arr, l, piv-1);
        QuickSort(arr,piv+1,r);
    }
}

int main()
{
    int arr[5] = {5,4,3,2,1};

    QuickSort(arr,0,4);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}