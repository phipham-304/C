/*
	N P N G
	pap from ht 
*/
using namespace std;

//#define yes cout<<"yes"
//#define YES cout<<"YES"
//#define no cout<<"no"
//#define NO cout<<"NO"
//#define pb push_back
//#define ins insert
//#define inf 1000000007
//#define esp 1e-15
#define f0(i,n) for(int i=0; i<n;i++)
#define f1(i,n) for(int i=1; i<=n;i++)
#define ei else if
#define el cout<<"\n"
typedef long long ll;
#include <bits/stdc++.h>

int max_n = INT_MIN;
int min_n = INT_MAX;
//map<int, int> mp;
//set<int> s;
//vector<int> a;

int a[100] = {1,2,3,4,5,6,7,8} , n=8, t[100];
void build(int id, int l, int r){
	if(l==r){
		t[id]=a[i];
	}
	int mid = (l+r)/2;
	build(id*2, l, mid);
	build(id*2+1, mid+1, r);
	t[id]=t[id*2] + t[id*2+1];
}
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
}
