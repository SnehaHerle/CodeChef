//https://www.codechef.com/WICP2002/problems/WICP005/

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include<map>
using namespace std;

void maxSubArraySum(long long int a[], long long int size) 
{ 
    long long int max_so_far = -999999999, 
    max_ending_here = 0, 
    start =0, 
    end = 0, 
    s=0; 
    
    // IF max_ending_here is negative, we don't consider it. So we initialise s to 0. 
    // Kadane's algorithm
    // Largest Sum Contiguous Subarray
  
    for (long long int i=0; i< size; i++ ) 
    { 
        max_ending_here += a[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    } 
    cout << max_so_far << endl; 
} 

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
        long long int a[n] = {0};
        for(long long int i = 0 ; i < n; i++)
        {
            cin>>a[i];
        }
        maxSubArraySum(a, n);
    }
    return 0;
}
