//https://www.codechef.com/submit/FLOW007
//Reverse the Number

#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
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
        long long int n = 0, quotient = 0, rem = 0, sum = 0, rev = 0, i = 0, temp = 0, count = 0;
        cin>>n;
        temp = n;
        while(temp)
        {
            count++;
            temp = temp / 10;
        }
        i = count-1;
        while(n)
        {
            rem = n%10;
            rev = rev + rem*pow(10,i);
            i--;
            n = n / 10;
        }
        cout<<rev<<endl;
    }
    return 0;
}
