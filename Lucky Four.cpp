//https://www.codechef.com/submit/LUCKFOUR

#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int t; 
    cin>>t;
    string i;
    while(t--) 
    {
        cin>>i;
        long long count = 0;
        for(long long l = 0; l < i.length() ; l++)
        {
            if( i[l] == '4')
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}
