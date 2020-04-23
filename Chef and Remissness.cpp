/*
https://www.codechef.com/problems/REMISS

Chef and Remissness

max(a,b) can be used directly without any extra header files.
 
*/

#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a = 0, b = 0;
	    cin>>a>>b;
	    cout<<max(a,b)<<" "<<a+b<<endl;
	}
	return 0;
}
