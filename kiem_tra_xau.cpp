// ki?m tra c� bao nhi�u ch? c�i kh�c nhau trong x�u ko t�nh kho?ng c�ch
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    cin.ignore(); 
    
    while (t--) {
        string st;
        getline(cin, st);
        
        string tmp = "";
        set<string> s;

        for (int i = 0; i < st.size(); i++) {
            if (st[i] != ' ') {
                tmp += st[i];
            } else {
                if (!tmp.empty()) {
                    s.insert(tmp);
                    tmp = ""; 
                }
            }
        }
        
        if (!tmp.empty()) { 
            s.insert(tmp);
        }

        cout << s.size() << endl;
    }

    return 0;
}

