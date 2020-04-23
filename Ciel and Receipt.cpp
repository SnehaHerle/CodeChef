/* 
https://www.codechef.com/problems/CIELRCPT

Ciel and Receipt

Greedy Technique - Find the largest possible answer at a given point. ((Locally optimal)
res = 0
for i = 11 to 0
  res = res + N div 2i
  N = N mod 2i
*/


#include <math.h>
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
	    int p, result = 0, i = 0;
	    cin>>p;
	    for(i = 11 ; i >= 0 ; i--)
	    {
	        result = result + (p / pow(2,i));
	        p = p % int((pow(2,i)));
	    }
	    cout<<result<<endl;
	    
	}
	return 0;
}
