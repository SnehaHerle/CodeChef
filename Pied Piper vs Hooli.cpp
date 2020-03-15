//https://www.codechef.com/WICP2002/problems/WICP015

// C++ Priority Queue used because we need the maximum element DYNAMICALLY each time to get the minimum number of supporter contribution count.

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		priority_queue<ll> pq;
		ll N,A,B,X,Y,Z,sum = 0;
		cin>>N>>A>>B>>X>>Y>>Z;
		for(int i = 0;i < N;i++)
		{
			ll temp;
			cin>>temp;
			pq.push(temp);
			sum+= temp;
		}
		
		ll days;
		
		if((Z-B)%Y == 0)         
			days = ((Z-B)/Y)- 1;   //If the days needed to make Z from B based on Y is divisible by Y, then take one day less, otherwise Hooli will win.
		else
			days = (Z-B)/Y;
			
		ll users_pp = A + X*days;   //Find Pied Pipers users after days are calculated.
		
		if(users_pp >= Z)
			cout<<"0"<<endl;
		else
		{
			if(2*sum <= Z-users_pp)    //If the contribution needed to make users_pp as Z is more than twice the sum of C[i] then it is not possible.
				cout<<"RIP\n";
			else
			{
				ll count = 0;
				while(users_pp < Z)    //Priority queue will fetch the max always.
				{
					ll contri = pq.top();
					users_pp+=contri;
					pq.pop();
					pq.push(contri/2);
					count++;
				}
				cout<<count<<endl;
			}
		}
	}
	return 0;
}


/*

https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/

Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the queue and elements are in non increasing order(hence we can see that each element of the queue has a priority{fixed order}).

*/
