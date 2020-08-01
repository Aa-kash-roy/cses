#include<bits/stdc++.h>
using namespace std;
#define pb          push_back
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define endl        "\n"
#define fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define int         long long int
#define mod         1000000007
#define test        int t;cin>>t;while(t--)
#define REP(i,a,b)  for(int i=a,i<=b;i++)
 
void solve(int arr[],int n){
	stack<pair<int,int>>st;
	st.push({arr[0],1});
	vi ans;
	ans.pb(0);
	for(int i=1;i<n;i++){
		while(!st.empty() && st.top().F >= arr[i])
			st.pop();
		if(st.empty())
			ans.pb(0);
		else
			ans.pb(st.top().S);
		st.push({arr[i],i+1});
	}
 
	for(auto x:ans)
		cout<<x<<" ";
	cout<<endl;
}
 
int32_t main()
{
	fast;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	solve(arr,n);
}