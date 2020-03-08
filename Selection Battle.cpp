//https://www.codechef.com/WICP2002/problems/WICP004

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t=0, n=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int flag = 0;
        for( long long int i = 2 ; i*i <=n ; ++i)
        { 
            //If n is not prime, then after Tanya, next move will be for Divesh. 
            //So Tanya's will not be the last move, hence Tanya wins.
            
            if (n%i == 0)
            {
                cout<<"Tanya"<<endl;     
                flag = 1;
                break;
            }
        }
        
        //If n is prime, then after Tanya, next move from Divesh is not possible.
        //Hence Tanya's will be the lst move, so she loses.
        
        if(flag == 0)
        {
            cout<<"Divesh"<<endl;
        }
    }
    return 0;
}
