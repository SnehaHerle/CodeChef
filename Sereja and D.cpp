//Based on this editorial - https://discuss.codechef.com/t/sead-editorial/4626
//https://www.codechef.com/WICP2002/problems/WICP020

#include <bits/stdc++.h>

using namespace std;

const int N = (int) 1e5 + 5;

int a[N], n, q, t[20][N], l[N];

inline void Build () 
{
	for (int i = 2; i <= n; i++) 
	{
		l[i] = l[i >> 1] + 1;      // l[i/2]
	}
	for (int i = 1; i <= l[n - 1]; i++) 
	{
		int cl = 1 << (i - 1);
		for (int j = 1; j <= n - cl; j++) 
		{
			t[i][j] = max (t[i - 1][j], t[i - 1][j + cl]);
		}
	}
}

inline int F (int lf, int ri) 
{
	int lg = l[ri - lf];
	return max (t[lg][lf], t[lg][ri - (1 << lg)]);    // 1 << lg means 2 ^ lg
}

int main() 
{
	scanf ("%d", &n);
	
	for (int i = 1; i <= n; i++) 
	{
		scanf ("%d", &a[i]);
	}
	
	a[n + 1] = a[n];
	
	for (int i = 1; i <= n; i++) 
	{
		t[0][i] = a[i + 1] - a[i];
	}
	
	Build ();
	
	scanf ("%d", &q);
	
	while (q--) {
		int T, D;
		scanf ("%d%d", &T, &D);
		int l = 1;
		int r = upper_bound (a + 1, a + n + 1, T) - a - 1;
		int R = r;
		int ans = r;
		while (l <= r) {
			int m = (l + r) >> 1;
			if (F (m, R) <= D) {
				ans = m;
				r = m - 1;
			} else {
				l = m + 1;
			}
		}
		printf ("%d\n", ans);
	}
	
	return 0;
}
