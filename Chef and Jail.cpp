//https://www.codechef.com/WICP2002/problems/CHJAIL

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include<map>
using namespace std;

bool isSafe(int **maze, int x, int y,int m,int n) 
{ 
    if (x >= 0 && x < m && y >= 0 && y < n && maze[0][0] >= maze[x][y]) 
        return true; 
  
    return false; 
} 

bool solveMazeUtil(int **maze, int x, int y,int p, int q,int m,int n) 
{ 
    // if (x, y is goal) return true 
    if (x == p-1 && y == q-1 && (maze[0][0] - maze[x][y] >= 0)) {
        //cout<< maze[0][0] - maze[x][y] <<" x = "<<x<<" y = "<<y<<endl;
        return true; 
    } 
    if (isSafe(maze, x, y,m,n) == true) { 
        maze[0][0] -= maze[x][y];
        //cout<< maze[0][0]<<" x = "<<x<<" y = "<<y<<endl;
  
        if (solveMazeUtil(maze, x + 1, y,p,q,m,n) == true) 
            return true; 
  
        if (solveMazeUtil(maze, x, y + 1,p,q,m,n) == true) 
            return true; 
        
        if (solveMazeUtil(maze, x + 1, y + 1,p,q,m,n) == true) 
            return true;
        
        maze[0][0] += maze[x][y];
        return false; 
    } 
  
    return false; 
} 

bool solveMaze(int **maze,int x,int y,int m,int n) 
{ 
  
    if (solveMazeUtil(maze, 0, 1,x,y,m,n) == false) { 
        cout<<"Died"<<endl; 
        return false; 
    } 
    cout<<"Escape"<<endl;
    return true; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
        int x = 0, y = 0, m=0,n=0;
        cin>>m>>n>>x>>y;
        int **maze = new int*[m]; // Rows

       for (int i = 0; i < m; i++)
        {
             maze[i] = new int[n]; // Columns
         }
        for (int i = 0; i < m; i++) {
         for (int j = 0; j < n; j++) {
        cin >> maze[i][j];
         }
        }
        //int maze[4][4] = { 3 , 1, 3, 10,5, 16, 1, 7 , 2, 4, 2, 6 , 9, 8, 6, 7}; 
  
    solveMaze(maze,x,y,m,n); 
        
    }
    return 0;
}
