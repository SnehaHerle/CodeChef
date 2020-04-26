// https://www.codechef.com/LTIME83B/problems/FFL
// Chef in Fantasy League


#include<iostream>
#include <vector>
#include <bits/stdc++.h>
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
        int n = 0, s = 0, i =0, sum = 0 ,type = 0, flag = 1;
        cin>>n>>s;
        int *p = new int[n];
        int *r = new int[n];
        vector< pair <int,int> > vec;  
        
        for (i = 0; i < n; i++)
        {
             cin>>p[i];
        }
        
        for (i = 0; i < n; i++)
        {
             cin>>r[i];
        }
        
        for (i = 0 ; i<n ; i++ )
       {
           vec.push_back( make_pair(r[i],p[i]));   //(coins, plate)
       }
        
        
        sort(vec.begin(), vec.end());
        
        // for (i=0; i<n; i++) 
        // { 
        //     cout << vec[i].first << " "<< vec[i].second << endl; 
        // }
        
        sum = sum + vec[0].second;
        type = vec[0].first;
        
        for ( i=1; i<n; i++)
        {
            if(vec[i].first != type)
            {
                flag = 0;
                //cout<<i;
                break;
            }
        }
        if(flag == 0)
        {
            sum = sum + vec[i].second;
            //cout<<" "<<sum;
            if(sum <= (100-s))
            {
                cout<<"yes";
            }
            else
            {
                cout<<"no";
            }
        }
        else
        {
            cout<<"no";
        }
        
        cout<<endl;
    }
    
    return 0;
}
