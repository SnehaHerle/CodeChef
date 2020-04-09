//https://www.codechef.com/submit/FLOW004
//First and Last Digit

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
        long long int n = 0, quotient = 0, rem = 0, sum = 0;
        cin>>n;
        rem = n % 10;
        sum = sum + rem;
        while(n)
        {
            n = n / 10;
            if ( (n == 1) || (n == 2) || (n == 3) || (n == 4) || (n == 5) ||
            (n == 6) || (n == 7) || (n == 8) || (n == 9))
            {
                break;
            }
        }
        cout<<sum+n<<endl;
    }
    return 0;
}
