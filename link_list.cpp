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
#define esp 1e-15 
typedef long long ll;
#include <bits/stdc++.h>

struct Node{
	string name;
	int mark;
	Node *next;
};
typedef struct Node node; 

Node* CreateNode( string vname, int vmark){
	Node* node = new Node;
	node->name = vname;
	node->mark = vmark;
	node->next = NULL;
	return node;
}

struct linkedlist{
	Node* head;
	Node *tail;
};
void createlist(linkedlist& l){
	l.head = NULL;
	l.tail = NULL;
} 
void addhead(linkedlist& l, Node* node){
	if(l.head==NULL){
		l.head=node;
		l.tail = node;
	}
	else{
		node->next=l.head;
		l.head=node;
	}
}

void addtail(linkedlist& l, Node* node){
	if(l.head==NULL){
		l.head=node;
		l.tail = node;
	}
	else{
		l.tail->next=node;
		l.tail=node;
	}
}
int count(linkedlist& l, int vmark){
	int cnt=0;
	Node* tmp = l.head;
	if(tmp!=NULL&& tmp->mark >=vmark) cnt++;
	while(tmp->next!=NULL){
		if(tmp->mark>=vmark){
			cnt++;
		}
		tmp=tmp->next;
	}
	
	return cnt;
}
string str;
string name_t;
int t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	linkedlist list;
	createlist(list);
	while(1){
		cin>>str;
		
		if(str=="fin") goto r;
		if(str!="count"){
			cin>>name_t>>t;
		}
		else{
			cin>>t;
		}
		if(str=="insF"){
			Node* new_node = CreateNode(name_t, t);
			addhead(list, new_node);
		}
		ei(str=="insL"){
			Node* new_node = CreateNode(name_t, t);
			addtail(list, new_node);
		}
		ei(str == "count"){
			int test = count(list, t);
			cout<<test,el;
		}
	}
	r:return 0;
}
