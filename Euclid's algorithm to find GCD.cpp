//https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0
//Euclid's algorithm to find GCD.
//O(logN)

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (a==0)
        return b;
    else if (b==0)
        return a;
    else if(a==b)
        return a;
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(b%a,a);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
       long long int a=0, b=0, lcm=0, hcf = 0;
       cin>>a>>b;
       hcf = gcd(a,b);
       lcm = (a*b)/hcf;
       cout<<lcm<<" "<<hcf<<endl;
    }
    return 0;
}
