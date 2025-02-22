#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n' 
void solve(){
	ll n;
	cin>>n;
	ll k ;
	cin>>k;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll count = 0;
	for(ll i=0;i<n;i++){
		ll sum = 0;
		for(ll j=0;j<n;j++){
			sum = sum + arr[j];
			if(sum<=k){
				count ++;
			}
		}
	}
	
	cout<<count;
}

signed main(){
	FAST_IO
	int t;
	cin>>t;
	while(t--)
		solve();
return 0;
}



