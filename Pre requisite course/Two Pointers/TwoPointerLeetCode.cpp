#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   
ll longestSubarray(vll nums, ll limit) {
    ll n = nums.size();
    ll max_len = 0; 

    for (ll i = 0; i < n; i++) {
        ll min_val = nums[i], max_val = nums[i]; 
        
        for (ll j = i; j < n; j++) { 
            min_val = min(min_val, nums[j]);
            max_val = max(max_val, nums[j]);

            if (max_val - min_val <= limit)
                max_len = max(max_len, j - i + 1); 
                
            else break;
        }
    }
    
    return max_len; 
}

void solve() {
    ll n, limit;
    cin >> n >> limit;
    vll nums(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> nums[i]; 
    }
    
    cout << longestSubarray(nums, limit) << "\n";
}

signed main() {
    FAST_IO;
    ll t;
    cin >> t;
    
    while (t--) 
        solve();
    
    return 0;
}

