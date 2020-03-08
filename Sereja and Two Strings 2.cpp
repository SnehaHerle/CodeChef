// https://www.codechef.com/MARCH16/problems/SEATSTR2

// Reference : https://discuss.codechef.com/t/seatstr2-editorial/12278

#include <stdio.h>
#include <string.h>
#include <memory.h>

typedef long long ll;
const int MOD = 1e9 + 7;    // 10^9 mod 7
const int MAX = 1e5;        // 10^5 is the maximum value of N possible in the input
int test, n;

ll gt[MAX + 1], cnt[26], sum, hv, res;

char s[MAX + 10];

ll lt(ll a, int b){
	ll res = 1;
	while (b){
		if (b & 1)
			res = (res * a) % MOD;
		b >>= 1;
		a = (a * a) % MOD;
	}
	return res;
}


int main(){
	gt[0] = 1;
	
	for (int i = 1; i <= MAX; ++i)
		gt[i] = (gt[i - 1] * i) % MOD;
		
	scanf("%d", &test);
	
	while (test--){
		scanf("%s", s);
		
		n = strlen(s);
		
		memset(cnt, 0, sizeof(cnt));   //setting the cnt[26] array to 0.
		
		for (int i = 0; i < n; ++i)    //counting the occurence of each alphabet.
			++cnt[s[i] - 'a'];


		sum = 1;            //no swaps -->  abc,abc
		
		for (int i = 0; i < 26; ++i)             //single swaps -->  abc,acb
		for (int j = i + 1; j < 26; ++j){
			sum = (sum + cnt[i] * cnt[j]) % MOD;
 			if (cnt[i] > 1 && cnt[j] > 1)
 				sum = (sum + ((cnt[i] * (cnt[i] - 1) / 2) % MOD) * ((cnt[j] * (cnt[j] - 1) / 2) % MOD)) % MOD;
		}

		for (int i = 0; i < 26; ++i)         //overlapping swaps.    3 cycle formed.
		for (int j = i + 1; j < 26; ++j)
		for (int k = j + 1; k < 26; ++k)
			sum = (sum + ((cnt[i] * cnt[j]) % MOD) * cnt[k] * 2) % MOD;

		for (int i = 0; i < 26; ++i)      //disjoint swaps. All characters distinct.
		for (int j = i + 1; j < 26; ++j)
		for (int k = j + 1; k < 26; ++k)
		for (int t = k + 1; t < 26; ++t)
			sum = (sum + ((cnt[i] * cnt[j]) % MOD) * cnt[k] * cnt[t] * 3) % MOD;

		for (int i = 0; i < 26; ++i)      //disjoint swaps. With common characters.
		if (cnt[i] > 1)
		for (int j = 0; j < 26; ++j)
		if (j != i)
		for (int k = 0; k < 26; ++k)
		if (k != j && k != i)
			sum = (sum + ((cnt[i] * (cnt[i] - 1) / 2) % MOD) * cnt[j] * cnt[k]) % MOD;

		hv = gt[n];
		
		for (int i = 0; i < 26; ++i)
			hv = (hv * lt(gt[cnt[i]], MOD - 2)) % MOD;

		res = (hv * (hv - sum + MOD)) % MOD;
		printf("%lld\n", res);
	}
	return 0;
}
