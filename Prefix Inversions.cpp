//https://www.codechef.com/WICP2002/problems/WICP012

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include <string>
#include<map>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[1000001] = {};
    cin>>s;
    //cout<<strlen(s);
    long long int n = strlen(s), count = 0 ;
    for(int i = n-1 ; i >= 0 ; i-- )
    {
        if(s[i] == '1')
        {
            for(int j = 0 ; j <= i ; j++)
            {
                if(s[j] == '1')
                {
                    s[j] = '0';
                }
                else
                {
                    s[j] = '1';
                }
            }
            count++;
            //cout<<count<<" : "<<s<<endl;
        }
    }
    cout<<count<<endl;
    return 0;
}
