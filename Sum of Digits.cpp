//https://www.codechef.com/submit/FLOW006
//Sum of Digits

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int n = 0, sum = 0, rem = 0;
        cin>>n;
        while(n)
        {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        cout<<sum;
        
        cout<<endl;
        
        
        
    }
    return 0;
}
