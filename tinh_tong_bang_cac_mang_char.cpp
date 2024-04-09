
// tính t?ng b?ng char
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<char> v;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        int carry =0;
        int i = s1.size()-1;
        int j = s2.size()-1;
        
        while(i>=0 || j>=0 || carry){
            int sum = (i >= 0 ? s1[i] - '0' : 0) + (j >= 0 ? s2[j] - '0' : 0) + carry;
            v.push_back(sum%10 + '0');
            carry=sum/10;
            i--;
            j--;
        }
        if(i!=j){
        	reverse(v.begin(), v.end());
		}
        for(auto x : v){
            cout<<x;
        }
        v.clear();
        cout<<endl;
        
    }
    return 0;
}
