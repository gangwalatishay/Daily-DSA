#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<int>
#define pb push_back
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxElement = arr[0], minElement = arr[0];
    int maxCount = 0, minCount = n;
    
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                cnt++;
            }
        }
        if (cnt > maxCount) {
            maxCount = cnt;
            maxElement = arr[i];
        }
        if (cnt < minCount) {
            minCount = cnt;
            minElement = arr[i];
        }
    }
    
    cout << "Max Element: " << maxElement << " Frequency: " << maxCount << endl;
    cout << "Min Element: " << minElement << " Frequency: " << minCount << endl;
}

int main() {
    fastio;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
