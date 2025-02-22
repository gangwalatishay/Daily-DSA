#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
	ll n;
	cin>>n;
	ll k;
	cin>>k;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll count = 0;
	
	for(ll i=0;i<n;i++){
		ll sum = 0;
		for(ll j=i;j<n;j++){
			sum = sum+arr[j];
			if(sum<=k){
				count++;
			}
		
	}
}
	cout<< count;
}
signed main(){
	cin.tie(0);
	cout.tie(0);
	
	int t = 1;
	cin>>t;
	while(t--)	
		solve();
	return 0;
}



