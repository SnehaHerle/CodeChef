//https://www.codechef.com/submit/FSQRT
//Finding Square Root


#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    int n = 0 , i = 0 ;
    cin>>n;
    if ( n == 1 || n == 2 || n == 3 )
    {
        cout<<1;
    }
    else if ( n == 4 || n == 5 )
    {
        cout<<2;
    }
    else
    {
        for( i = 2 ; i <= n/2  ; i++ )
        {
            if ( i*i > n )
            {
                cout<<i-1;
                break;
            }
        }
    }
    cout<<endl;
    }
    return 0;
}
