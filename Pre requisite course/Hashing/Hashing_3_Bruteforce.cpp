
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define umap unordered_map

void solve() {
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                count++;
            }
        }
    }
    
    cout << "Number of pairs with sum " << k << ": " << count << endl;
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
