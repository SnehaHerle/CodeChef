//https://www.codechef.com/problems/MUFFINS3
//Packaging Cupcakes

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
        long long int n = 0;
        cin>>n;
        cout<<(n/2)+1;
        cout<<endl;
    }
    return 0;
}
