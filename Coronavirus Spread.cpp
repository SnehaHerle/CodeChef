//https://www.codechef.com/MAY20B/problems/COVID19

#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int n = 0;
int count_victims_forward(int a[], int index)
{
    int count = 0;
    if (index != n-1)
    {
    for(int i=index ; i<n-1 ; i++)
    {
        if(a[i+1]-a[i] <=2)
        {
            count++;
        }
        else
            break;
    }
    }
    return count;
}

int count_victims_backward(int a[], int index)
{
    int count = 0;
    if(index != 0)
    {
    for(int i=index ; i>0 ; i--)
    {
        if(a[i]-a[i-1] <=2)
        {
            count++;
        }
        else
            break;
    }
    }
    return count;
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
        int f = 0, b = 0, i = 0;
        cin>>n;
        int *a = new int[n];
        int *victim = new int[n];

        for (i = 0; i < n; i++)
        {
             cin>>a[i];
        }
        
        for (i = 0; i < n; i++)
        {
            victim[i] = 1 + count_victims_backward(a,i) + count_victims_forward(a,i);
            //cout<<i<<" "<<victim[i]<<endl;
        }
        
        
        cout<<*min_element(victim,victim+n)<<" "<<*max_element(victim,victim+n)<<endl;

    }

    return 0;
}
