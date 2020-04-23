/*
https://www.codechef.com/problems/FLOW013

Valid Triangles

Ternary Operator in a cout statement.
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
	    int a = 0, b = 0, c = 0;
	    cin>>a>>b>>c;
	    cout<<((a+b+c == 180)? "YES" : "NO");
	    cout<<endl;
	}
	
	return 0;
}
