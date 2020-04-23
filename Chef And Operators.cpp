/*
https://www.codechef.com/problems/CHOPRT

Chef And Operators

Taking large inputs.
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
	    if(a>b)
	        cout<<">";
	    else if (a<b)
	        cout<<"<";
	    else
	        cout<<"=";
	    cout<<endl;
	}
	
	return 0;
}
