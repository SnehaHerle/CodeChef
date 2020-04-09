//https://www.codechef.com/submit/TSORT
// Turbo sort

#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    long long int t; 
    cin>>t;
    int a[1000001]={0}; 
    long long int num = 0;
    while(t--) 
    {
        
        scanf("%d", &num);
        a[num]++;    //count the number of times an element has appeared in the input.
    }
    for(int i=0; i<1000001; i++)    //count sort, turbo sort
    {
        while(a[i]>0)   //print each element the numer of times it occured in the input.
        {
            printf("%d\n", i);
            a[i]--;
        }
    }
    
    return 0;
}
