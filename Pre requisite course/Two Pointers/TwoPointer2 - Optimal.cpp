#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef unordered_map<ll, ll> umll;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    ll n, k;
    cin >> n >> k;
    
    vll b(n);
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    ll count = 0, i = 0;
    umll g; // Frequency map

    for (ll j = 0; j < n; j++) {
        g[b[j]]++;

        while (g.size() > k) { 
            g[b[i]]--;
            if (g[b[i]] == 0) g.erase(b[i]);
            i++;
        }

        count += (j - i + 1); 
    }

    cout << count << "\n"; 

    return 0;
}

