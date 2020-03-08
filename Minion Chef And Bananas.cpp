// https://www.codechef.com/WICP2002/problems/WICP008#

// Written by an introvert with a penchant for coding.

/* 
Logic : Binary Search after sorting the array. Take low as 1 and high as the maximum
element in the array. This is so because you can eat at least 1 and at most max element 
number of bananas in an hour.
*/

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
    long long int t=0;
    cin>>t;
    while(t--)
    {
        long long int n = 0 , h = 0, low = 1, high = -1 , sum_hrs = 0 , mid = 0 , k = 0;
        cin>>n>>h;
        long long int *a = new long long int[n]; 
        
        for(long long int i = 0 ; i < n ; ++i)
        {
            cin>>a[i];
            if (high < a[i])
            {
                high = a[i];
            }
        }
        //cout<<"max = "<<high<<endl;
        long long int size_arr = sizeof(a)/sizeof(a[0]);
        sort(a, a + size_arr);
        
        // Binary Search
        
        
        
        while( low <= high )
        {
            mid = (low + high) / 2;
            
            sum_hrs = 0;
            
            // cout<<"low = "<<low<<endl;
            // cout<<"high = "<<high<<endl;
            // cout<<"mid = "<<mid<<endl;
            
            for( long long int i = 0 ; i < n ; i++ )
            {
                sum_hrs = sum_hrs + ((a[i] % mid) ? ((a[i] / mid) + 1) : (a[i] / mid));
            }
            //cout<<"sum = "<<sum_hrs<<endl;
            if (sum_hrs > h)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
                k = mid;
            }
            // cout<<"low = "<<low<<endl;
            // cout<<"high = "<<high<<endl;
            // cout<<"mid = "<<mid<<endl;
        }
        
        cout<<k<<endl;
    }
    return 0;
}
  
