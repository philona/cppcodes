#include<iostream>
using namespace std;

void bubble(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size -1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}

int main()
{
    int arr[] = {14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);

    bubble(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }


}