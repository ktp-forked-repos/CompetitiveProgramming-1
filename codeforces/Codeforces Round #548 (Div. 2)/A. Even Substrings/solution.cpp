#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    string s;
    cin >> n;
    cin >> s;
    long long ans = 0;
    for(int i=0; i<n; i++) {
        if((s[i] - '0')%2 == 0) {
            ans += i+1;
        }
    }
    cout << ans << '\n';
    return 0;
}