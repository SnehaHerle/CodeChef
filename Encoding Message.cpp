//https://www.codechef.com/WICP2002/problems/ENCOMS

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
       string str = {}; 
       char temp;
       int len = 0;
       cin>>len;
       cin>>str;
       
       
       if (len % 2 == 0)
       {
           for( int i = 0 ; i<len ; i=i+2)
           {
               temp = str[i];
               str[i] = str[i+1];
               str[i+1] = temp;
            }
       }
       else
       {
           for( int i = 0 ; i<len-1 ; i=i+2)
           {
               temp = str[i];
               str[i] = str[i+1];
               str[i+1] = temp;
           }
       }
       //cout<<str<<endl;
       for( int i = 0 ; i<len ; i++)
           {
               temp = str[i];
               switch(temp)
               {
                   case 'a' : temp = 'z';
                                break;
                   case 'b' : temp = 'y';
                                break;
                    case 'c' : temp = 'x';
                                break;
                    case 'd' : temp = 'w';
                                break;
                    case 'e' : temp = 'v';
                                break;
                    case 'f' : temp = 'u';
                                break;
                    case 'g' : temp = 't';
                                break;
                    case 'h' : temp = 's';
                                break;
                    case 'i' : temp = 'r';
                                break;
                    case 'j' : temp = 'q';
                                break;
                    case 'k' : temp = 'p';
                                break;
                    case 'l' : temp = 'o';
                                break;
                                
                    case 'm' : temp = 'n';
                                break;
                    case 'n' : temp = 'm';
                                break;
                                
                    case 'o' : temp = 'l';
                                break;
                    case 'p' : temp = 'k';
                                break;
                                
                    case 'q' : temp = 'j';
                                break;
                                
                    case 'r' : temp = 'i';
                                break;
                    case 's' : temp = 'h';
                                break;
                    case 't' : temp = 'g';
                                break;
                    case 'u' : temp = 'f';
                                break;
                    case 'v' : temp = 'e';
                                break;
                    case 'w' : temp = 'd';
                                break;
                    case 'x' : temp = 'c';
                                break;
                    case 'y' : temp = 'b';
                                break;
                    case 'z' : temp = 'a';
                                break;
               }
               str[i] = temp;
            
            }
            cout<<str<<endl;
       
    }
    return 0;
}
