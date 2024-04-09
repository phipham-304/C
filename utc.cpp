#include <bits/stdc++.h>
using namespace std;
int a[1000][1000];
int b[1000][1000] ;
int c[1000][1000] ;
int main() {
//    freopen("Input.txt", "r", stdin);
//    freopen("Output.txt", "w", stdout);
//    freopen("Error.txt", "w", stderr);

    int m, n, p;
    cin>>m>>n>>p;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=p;j++){
            cin>>b[i][j];
        }
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=p; j++){
            for(int k=1; k<=n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=p; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
