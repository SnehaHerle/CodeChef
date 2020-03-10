//https://www.codechef.com/LTIME66A/problems/BPS



#include <bits/stdc++.h>
using namespace std;

int t, m, n, p[15];
int l[15], r[15];
vector <int> a, b;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) 
    {
        cin >> n >> m;
        
        a.resize(n + 1);
        
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
        }
        for (int i = 1; i <= m; i++) 
        {
            cin >> l[i] >> r[i];
            p[i] = i;
        }
        
        bool flag = 0;
        int count = 0, result = 0;
        vector <int> c = a;
        
        do 
        {
            a = c;
            
            for (int i = 1; i <= m; i++) 
            {
                reverse(a.begin() + l[p[i]], a.begin() + 1 + r[p[i]]);
            }
            if (flag == 0)  //To handle initial case
            {
                b = a;      //b is the array after performing the operations in the given order without permutation.
            }
            flag = 1;
            if (a == b) 
            {
                result++;
            }
            count++;
        } while (next_permutation(p + 1, p + m + 1));    //Calculates the next permutation of the order of operations and reorders the P vector.
        //cout<<p+1<<"   "<<p+m+1<<endl;
        int gc = __gcd(result, count);
        cout << result / gc << "/" << count / gc << "\n";
    }
}

/*
C++ Algorithm next_permutation() function is used to reorder the elements in the range [first, last) into the next lexicographically greater permutation.

Parameter
first: A bidirectional iterator pointing to the first element in the range to be permuted.

last: An input iterator pointing the position one past the last in the range to be permuted.

comp: A user-defined binary predicate function that accepts two arguments and returns true if the two arguments are in order, otherwise returns false. It follows the strict weak ordering to order the elements.

Return value
It returns true if the function could reorder the object as a lexicographically greater permutations.

Else, the function returns false to indicate that the arrangement is not greater than the previous, but the lowest possible (sorted in ascending order).

Complexity
Complexity is up to linear in half the distance between first and last.

Data Races
The objects in the range [first, last) are modified.

#include <algorithm>  
#include <string>  
#include <iostream>  
  
using namespace std;  
   
int main()  
{  
    string s = "aba";  
    sort(s.begin(), s.end());  
    do {  
        cout << s << '\n';  
    } while(next_permutation(s.begin(), s.end()));  
      
    return 0;  
}  
Output:

aab
aba 
baa

*/
