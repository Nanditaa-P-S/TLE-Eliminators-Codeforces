#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int r=0,b=0,flag=1;
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == 'W') {
                if (r == 0 && b > 0 || b == 0 && r > 0) {
                    flag = 0;
                    break;
                }
                r = b = 0;
            }
            else if (s[i] == 'R')
                r++;
            else
                b++;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}