#include<iostream>

using namespace std;

void swap(int &x, int &y)
 {
     int temp;
     temp = x;
     x = y;
     y = temp;
 }

int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"Before Swapping:"<<endl<<"Value of a is:"<<a<<"\n Value of b is:"<<b<<endl;

    swap(a,b);

    cout<<"\nAfter Swapping:"<<endl<<"Value of a is:"<<a<<"\n Value of b is:"<<b<<endl;

}
