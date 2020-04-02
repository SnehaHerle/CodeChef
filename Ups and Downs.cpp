//Ups and Downs 
//https://www.codechef.com/problems/ANUUND

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long t;
	cin >> t;
	while(t--)
	{
	    long long n;
	    cin >> n;
	    long long arr[n];
	    for(long long i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	   sort(arr, arr+n);
	   
	   for(long long i = 0; i < n/2; i++)
	   {
	       cout << arr[i] <<" "<< arr[n-i-1]<<" ";
	   }
	   
	   if(n%2 != 0)
	   {
	       cout << arr[n/2];
	   }
	   
	   cout << endl;
	}
	return 0;
}
