#include<iostream>

using namespace std;



int main()
{
    int a = 10, b = 20;

    cout<<"Before Swapping:"<<endl<<"Value of a is:"<<a<<"\n Value of b is:"<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"\nAfter Swapping:"<<endl<<"Value of a is:"<<a<<"\n Value of b is:"<<b<<endl;



}

#using third variable

#include<iostream>
using namespace sstd;
int maain()
{
    int a = 10, b=20,temp;
cout<<"before swapping: "<<"value of a is: "<<a<<"value of b is: "<<b<<endl;

temp=a;
a=b;
b=temp;

cout<<"after swapping: "<<the value of a is : <<a<<"value of b is : <<endl;
