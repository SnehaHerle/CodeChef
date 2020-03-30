//https://www.codechef.com/problems/HS08TEST

/*
Input:
30 120.00
*/

/*
Setprecision when used along with ‘fixed’ provides precision to floating point numbers correct to decimal numbers mentioned in the brackets of the setprecison.
*/

#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    float y = 0.00;
    int x = 0;
    cin>>x>>y;
    if (x%5 != 0)
    {
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
    else if (x%5 == 0 && ((y-0.50)-x) >= 0)
    {
        cout<<fixed<<setprecision(2)<<((y-0.50)-x)<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
    return 0;
}
