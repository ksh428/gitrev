
#include<bits/stdc++.h>
#define ll long long
#define int long long
#define mod 1000000007
#define endl "\n"
using namespace std;

void initcode() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
//new fact

int f(int n){
    int f[n+1];
    f[0]=1;
    for(int i=1;i<=n;i++){
        f[i]=i*f[i-1];
    }
    return f[n];
}


void solve() {
  cout<<f(23)<<endl;


}


int32_t main() {
	initcode();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
