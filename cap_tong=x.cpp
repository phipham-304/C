/*
	N P N G
	pap from ht 
*/
using namespace std;
#define el cout<<"\n"
#define yes cout<<"yes"
#define YES cout<<"YES"
#define no cout<<"no"
#define NO cout<<"NO"
#define pb push_back
#define ins insert
#define inf 1000000007
#define f0(i,n) for(int i=0; i<n;i++)
#define f1(i,n) for(int i=1; i<=n;i++)
#define ei else if
//#define esp 1e-15 

typedef long long ll;
#include <bits/stdc++.h>


map<int, int> mp;

int n;

unordered_map<long long, int> freq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	ll x; cin>>x;
	ll a[n];
	f0(i,n){
		cin>>a[i];
		freq[a[i]]++;
		mp[a[i]]++;
	}
	f0(i,n){
		ll tmp = x-a[i];
		if(freq.find(tmp) != freq.end() && mp[a[i]]>0 && mp[tmp]>0 && tmp!=a[i]){
			if(tmp<a[i]){
				cout<<tmp<<" "<<a[i],el;
			}
			else{
				cout<<a[i]<<" "<<tmp,el;
			}
			mp[a[i]]--;
			mp[tmp]--;
		}
	}
	
	return 0;
}
