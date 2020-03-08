#include <bits/stdc++.h> 
using namespace std; 

int binSearch(long long int adj[], long long int target, long long int length) 
{ 
	int low = 0; 
	int high = adj[length - 1]; 
	while (low < high) 
  {  
		int f = 0, sum = 0; 
		int mid = low + (high - low) / 2; 
		for (int i = length - 1; i >= 0; i--) 
    { 
			if (adj[i] > mid) 
       { 
			  	sum = sum + adj[i] - mid; 
		   } 
			if (sum >= target) 
      { 
				f = 1; 
				low = mid + 1; 
				break; 
			} 
		} 
		if (f == 0) 
			high = mid; 
	} 

	return low - 1; 
} 

int main() 
{ 
  int T;
  cin>>T;
  while(T--)
  {
    long long int N,Th,sum=0,M;
    cin>>N>>Th;
    long long int A[N];
    for(int i=0; i<N;i++)
       cin>>A[i];
    sort(A,A+N);
    M=binSearch(A,Th,N);
    //cout<<binSearch(A,Th,N)<<"\n";
    for(int i=0;i<N;i++)
    {
      if(A[i]>M)
         sum+=A[i]-M;
    }
    cout<<M<<" "<<sum<<"\n";
  }

  return 0;
} 
