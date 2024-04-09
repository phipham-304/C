/*
	N P N G						
								( •_•)
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
#define sai cout<<"Sai"
#define dung cout<<"Dung"
typedef long long ll;
#include <bits/stdc++.h>
int t;
string str;
stack<char> st;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>t;
	cin.ignore();
	bool test;
	while(t--){
		test = false;
		cin>>str;
		if(str.size()%2!=0){
			sai,el;
			continue;
		}
		f0(i, str.size()){
			if(str[i]!=')' && str[i]!='}' && str[i]!=']'){
				st.push(str[i]);
			}
			if(str[i]==')'){
				if(!st.empty()){
					if(st.top() != '('){
						p:sai,el;
						h:test=true;
						break;
					}
					else{
						st.pop();
					}
				}
			}
			if(str[i]=='}'){
				if(!st.empty()){
					if(st.top() != '{' ){
						goto p;
						goto h;
						break;
					}
					else{
						st.pop();
						if(!st.empty()){
							if(st.top() == '(' || st.top()=='['){
								goto p;
								goto h;
								break;
							}
						}
					}
				}
			}
			if(str[i]==']'){
				if(!st.empty()){
					if(st.top() != '[' ){
							goto p;
							goto h;
						
						break;
					}
					else{
						st.pop();
						if(!st.empty()){
							if(st.top() == '('){
								goto p;
								goto h;
								break;
							}
						}
					}
				}
			}
			
		}
		if(!st.size() && !test){
			dung,el;
		}
		ei(st.size() && !test){
			sai, el;
		}
		while(!st.empty()){
			st.pop();
		} 
	}
	return 0;
}
