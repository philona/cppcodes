#include <iostream>
#include<cmath>
#include <algorithm>
using  namespace std;
int  main()
{
    int N=2;
    int sum=0;
    int fx,fy;
    int lx,ly;
    int size=1;
    cin>>N;
    for(size=1;size<=N;size++)
    {
         fx=0,fy=0,lx=fy+size-1,ly=fy+size-1;

    for(int i = 0;i<N-(size-1);i++)
    {   
       
        for(int j = 0;j<N-(size-1);j++)
        {
            sum+=1;
            fx++,lx++;
        }
        fy++,ly++;
    }
    fx=0,fy=0;
    }
   cout<<sum;
}
