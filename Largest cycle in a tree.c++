1.	#include<bits/stdc++.h>
2.	#define mod 1000000007
3.	#define pb push_back
4.	#define mp make_pair
5.	#define pf push_front
6.	#define lli long long int 
7.	#define ll long long 
8.	#define inf 1000000000000000000
9.	#define mp make_pair
10.	#define vc vector
11.	#define pq priority_queue
12.	#define pll pair<ll,ll> 
13.	#define pls pair<ll,string>
14.	#define psl pair<string,ll>
15.	#define plc pair<ll,char>
16.	#define pcl pair<char,ll>
17.	#define pss pair<string,string>
18.	#define FOR(i,n)    for(int i=0;i<n;i++)
19.	#define FOR1(i,a,b) for(int i = a; i<=b; i++)
20.	using namespace std;
21.	vector <int> v[100001];
22.	int vis[100001]={0};
23.	int ma=0,ge;
24.	 
25.	void dfs(int start, int x)
26.	{   
27.	 //   cout<<start<<" "<<x<<"    ";
28.	    if(ma < x)
29.	    {    ma=x; ge=start;  } 
30.	    vis[start]=1;
31.	    for(int i=0;i<v[start].size();i++)
32.	        if(vis[v[start][i]]==0)
33.	            dfs(v[start][i],x+1);   
34.	}
35.	 
36.	int main()
37.	{
38.	    int n;
39.	    cin>>n;
40.	    for(int i=0;i<n-1;i++)
41.	    {
42.	        int x,y;
43.	        cin>>x>>y;
44.	        v[x].push_back(y);
45.	        v[y].push_back(x);
46.	    }
47.	    dfs(1,1);
48.	    cout<<ge<<" ";
49.	    ma=0;
50.	    memset(vis,0,sizeof(vis));
51.	    dfs(ge,1);
52.	    cout<<ge<<" ";
53.	    return 0;
54.	}
