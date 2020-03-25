//https://www.codechef.com/GHC32020/problems/MOON
#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        long int s;
        s=n*x+m*y;
        if(s%2==0)
        {
            s=s/2;
            int i=0;
            int j=0;
            int flag=1;
            for(i=0;i<=n;i++)
            {
                flag=1;
                for(j=0;j<=m;j++)
                {
                   
                    if(i*x+j*y==s && (n-i)*x+(m-j)*y==s)
                    {
                       flag=0;
                       cout<<"YES"<<endl;
                       break;
                       
                    }
                }
                if(flag==0)
                {
                break;
                }
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
   
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
