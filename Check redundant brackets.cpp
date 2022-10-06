#include<stack>
bool checkRedundantBrackets(string a) {
   stack<char> s;
	for(int i=0; i<a.length(); i++)
    {
        if(a[i]!= ')' )
        {
            s.push(a[i]);
            
        }
        else if(a[i]==')' )
        {
            int count = 0;
            while(s.top()!= '(' )
            {
                count++;
                s.pop();
            }
            if(count <=1)
            {
                return true;
            }
            s.pop();
        }
    }
    return false;
}
