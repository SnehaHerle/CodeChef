/*
https://www.codechef.com/problems/FLOW008

Servant

Ternary Operator usage.
*/

#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n; 
	    string s;
	    cin>>n;
	    s =  (n<10) ? "What an obedient servant you are!" : "-1";
	    cout<<s<<endl;
	}
	return 0;
}
