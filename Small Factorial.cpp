/*

https://www.codechef.com/problems/FLOW018

Small Factorial

Recursive method of calculating factorial.

The time complexity for one recursive call would be:

T(n) = T(n-1) + 3   (3 is for As we have to do three constant operations like 
                     multiplication,subtraction and checking the value of n in each recursive 
                     call)

     = T(n-2) + 6   (Second recursive call)
     = T(n-3) + 9   (Third recursive call)
     .
     .
     .
     .
     = T(n-k) + 3k
     till, k = n

     Then,

     = T(n-n) + 3n
     = T(0) + 3n
     = 1 + 3n         (Recurrence Equation)

To represent in Big-Oh notation, T(N) is directly proportional to n,
Therefore, The time complexity of recursive factorial is O(n). As there is no extra space taken during the recursive calls,the space complexity is O(N).

*/

#include <iostream>
using namespace std;

long long int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    return (n * factorial(n-1));
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    cout<<factorial(n);
	    cout<<endl;
	}
	return 0;
}
