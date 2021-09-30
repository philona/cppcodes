#include
    using namespace std;
    int main()
    {
        int num,sum=0;
        cout<<“Enter any num : “;
        //user input
        cin>>num;
        //loop to find sum of digits
        do
        {
            sum+=num%10;
                num=num/10;
        }while(num!=0);
        //output
        cout<<“\nSum of digits in given integer is: “<<sum;
        return 0;
    }
