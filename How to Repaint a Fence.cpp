//https://www.codechef.com/problems/STRBIT

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    int t, n, k, i, flip, count;
    int flip_end_pos[100001];
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        
        for(i=0 ; i<n ; i++)    //An array to keep a track of the position till where the colors are flipped. 
        {
            flip_end_pos[i]=0;
        }
        
        flip = count = 0;
        
        //Assuming that if flip is divisible by 2 and red, then it is currently red, and
        //if flip is not divisible by 2 and green, then also it is currently red
        
        
        for(i=0 ; i<n ; i++)
        {
            if((flip % 2 == 0 && s[i] == 'R') || (flip % 2 != 0) && s[i] == 'G')
            {
                count++;
                flip++;
                if(i+k<n)
                    flip_end_pos[i+k-1]+=1;
                else
                    flip_end_pos[n-1]+=1;
            }
            if(flip_end_pos[i]>0)    //If the flipping ends here based on min(n,x+k-1), we do flip-- to revert to one flip state before.
                flip--;
        }
        cout<<count<<endl;
    }
}





//------------------------------------------------------------------------------------------------------------------------------------

/*  This was what I initially thought of. Time Limit Exceeded for this code. Nevermind. It deserved it. 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
       string str = {}; 
       int n = 0 , k = 0, count = 0, min = 0;
       cin>>n>>k>>str;
       for(int i = 0 ; i < n; i++)
       {
           if(str[i] == 'R')
           {
               count++;
               if ( n > i+k-1 )
               {
                   min = i+k-1;
               }
               else
               {
                   min = n;
               }
               for(int j = i ; j <= min ; j++)
               {
                   if (str[j] == 'R')
                   {
                       str[j] = 'G';
                   }
                   else
                   {
                       str[j] = 'R';
                   }
               }
           }
       }
       cout<<count<<endl;
       
       
    }
    return 0;
}
*/
