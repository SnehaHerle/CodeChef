//https://www.codechef.com/problems/SIGNWAVE

#include<bits/stdc++.h>
using namespace std;

#define Int long long

// Recursive function to calculate exponent.

Int exp(int a,int b)
{
    if(b==0)
        return 1;
        
    Int d=exp(a,b/2);
    
    if(b%2)
        return (a*d*d);
        
    else return d*d;
}
int main()
{
    int t,s,c,k;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d %d %d",&s,&c,&k);
        
        Int ans=0;
        
        if(k==1)
        {
            if(s==c && s==0)
                    ans=0;  //s==0 c==0
            else if(s>c)
            {
                ans=exp(2,s)+1;
            }
            else if(s==c && s)   // both equal but not 0
            {
                ans=exp(2,s)+1+exp(2,c);
            }
            else if(s==0 && c) //only c   
            {
                ans=2*(exp(2,c)-1);
            }
            else if(s<c)//both non null
            {
                ans=exp(2,s)+1+exp(2,s)*(exp(2,c-s+1)-1);
            }
        }
        //else if(s<k)ans=0;
        else
        {
            if(s<k)
                ans=0;
            else
            {
                ans=exp(2,s-k+1);
                if(s-k+1<=c)
                    ans=ans*2;
                ans+=1;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
