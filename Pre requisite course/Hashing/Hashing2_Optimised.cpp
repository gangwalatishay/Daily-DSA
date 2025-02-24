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
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    umap<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; 
    }
    
    int maxElement = arr[0], minElement = arr[0];
    int maxCount = 0, minCount = n;
    
    for (auto it : freq) {
        if (it.second > maxCount) {
            maxCount = it.second;
            maxElement = it.first;
        }
        if (it.second < minCount) {
            minCount = it.second;
            minElement = it.first;
        }
    }
    
    cout << "Max Element: " << maxElement << " Frequency: " << maxCount << endl;
    cout << "Min Element: " << minElement << " Frequency: " << minCount << endl;
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
