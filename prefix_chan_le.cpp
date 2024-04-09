
// prefix odd and even
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int count = 0; 
    int evenCount = 0; 
    int oddCount = 0; 
    unordered_map<int, int> prefixDiff; 

    prefixDiff[0] = 1; 

    for (int i = 0; i <n; i++) {
        if (a[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        
        int diff = evenCount - oddCount;

        count += prefixDiff[diff];

        prefixDiff[diff]++;
    }
    cout<<count;
    return 0;
}

