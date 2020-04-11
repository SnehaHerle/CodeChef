//https://www.codechef.com/submit/FLOW017
//Second Largest

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
        long long int a[3];
        for(int i = 0 ; i<3; i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<a[1]<<endl;
    }
    return 0;
}
