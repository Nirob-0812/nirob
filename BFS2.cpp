/*
Mehedi Hasan Nirob
Roll: 04
Batch: Day-59
Department of CSE
Dhaka charernational University
*/
#include<bits/stdc++.h>
using namespace std;
typedef vector<char> vi;
#define nl endl
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(int i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());
#define index 100

char node,edge;
char u,v,source;
vi graph[index];
bool visited[index];
char distan[index];
char previous[index];
void bfs(char sourceNode)
{
    visited[sourceNode]=1;
    distan[sourceNode]=0;
    previous[sourceNode]=0;
    queue<char > Q;
    Q.push(sourceNode);
    while (!Q.empty())
    {
        char vertex=Q.front();
        Q.pop();
        for(char i=0;i<graph[vertex].size();i++)
        {
            char adjacent=graph[vertex][i];
            if(visited[adjacent]==0)
            {
                visited[adjacent]=1;
                previous[adjacent]=distan[vertex];
                distan[adjacent]=distan[vertex]+1;
                Q.push(adjacent);
            }
        }
    }
    
}
Nirob
{
    cout<<"Enter number of Node & Edge: ";
    cin>>node>>edge; 
    getfor(i,edge)
    {
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    cout<<"Enter Source Node: ";
    cin>>source;
    bfs(source);
    cout<<"Distance of All Node: "<<nl;
    for(int i=1; i<=node; i++)
    {
        cout<<i<<")Distance: "<<distan[i]<<"\tPrevious: "<<previous[i]<<nl;
    }
  return 0;
}