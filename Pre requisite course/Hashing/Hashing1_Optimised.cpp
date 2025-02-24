#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<int>
#define pb push_back
#define endl '\n'

void solve() {
    int n, q;
    cin >> n >> q;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    while (q--) {
        int x, count = 0;
        cin >> x;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) count++;
        }
        cout << count << endl;
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
