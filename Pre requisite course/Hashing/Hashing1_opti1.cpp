#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define umap unordered_map

void solve() {
    int n, q;
    cin >> n >> q;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
   
    umap<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    
    while (q--) {
        int x;
        cin >> x;
        cout << freq[x] << endl; 
}

int main() {
    fastio;
    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}

