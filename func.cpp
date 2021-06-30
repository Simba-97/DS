#include <bits/stdc++.h>
using namespace std;	
#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n; cin >> n;
	ll func = 0;
	if(n == 1 or n % 2 != 0){
		func = -(n+1)/2;
	} else {
		func = n/2;
	}
	cout << func << endl;
	return 0;
}