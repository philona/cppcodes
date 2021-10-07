// Program to sort array using insertion sort algorithm

#include<iostream>
using namespace std;
void display(int a[], int n)
{
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}
void insertion_sort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
 
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int a[] = {2,6,8,3,5,9,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    insertion_sort(a,n);
    display(a,n);
}