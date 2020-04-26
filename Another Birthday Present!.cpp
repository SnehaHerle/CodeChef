// https://www.codechef.com/LTIME83B/problems/SHUFFLE
// Another Birthday Present! 


#include <iostream>
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
        int n = 0, k = 0, i = 0, flag = 0 ,j = 0;
        string ans= "yes";
        cin>>n>>k;
        int *a = new int[n];
        int *b = new int[n];
        
        for (i = 0; i < n; i++)
        {
             cin>>a[i];
             b[i] = a[i];
        }
        
        sort(b,b+n);
        
        //Temporary array b to check if the group is sorted on not.
        //To do that we divide the list into groups and sorted them.
        //Then we compare them to the already sorted one.
        //That is how you check 2 arrays are sorted or not. By converting them into vectors and sorting them
        //And then checking for equality.
        
        for(i = 0; i < k; i++)
        {
            vector<int> p, q;
            for(j = i ; j<n ; j=j+k)
            {
                p.push_back(a[j]);
                q.push_back(b[j]);
            }
            
            sort(p.begin(),p.end());
            
            if(p!=q)
            {
                ans = "no";
            }
        }
        
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
