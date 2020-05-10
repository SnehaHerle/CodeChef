#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 0, n = 0, k = 0;
	cin>>n;
 
	for(i = n; i >= 1; i--)
	{
        for(k = 1 ; k<=n-i ; k++)
        {
            cout<<"  ";
        }
       
		for(j=1; j<=(2*i)-1; j++)
		{
			if(j<2*i-1)
				cout<<i<<" ";
			else
				cout<<i;
		}
        if(i>1)
        {
		    cout<<endl;
        }
	}
	return 0;
}

/*
5 5 5 5 5 5 5 5 5
  4 4 4 4 4 4 4
    3 3 3 3 3
      2 2 2
        1 

*/
//https://www.techgig.com/practice/question/pattern-problems-48/NEdxWldXVGNJMzZtV3Exdmc0ckl3NDFub0FSVHJYMXBHTFJDV2psOGVDNHNvQTFuVTc3UmxGQndZWHIweDdXZA==/1?utm_source=TG_batch&utm_medium=email&utm_campaign=practice_2020-05-05#domain-comments
