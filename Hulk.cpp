#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n; cin >> n;
	string ans = "";
	for(int i = 1; i <= n; i++){
		if(i == 1){
			ans = "I hate";
		} else if(i == 2){
			ans = "I hate that I love";
		} else if(i%2 == 0){
			ans += " that I love";
		} else {
			ans += " that I hate";
		}
	}
	cout << ans << " it"<< endl;
	return 0;
}