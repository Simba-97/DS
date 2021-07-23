#include <bits/stdc++.h>
using namespace std;

vector<int> deno = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
int n = deno.size();

 
void minNotes(int V){
    sort(deno.begin(), deno.end());
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
        while (V >= deno[i]) {
            V -= deno[i];
            ans.push_back(deno[i]);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
 
int main(){
    int n; cin >> n;
    minNotes(n);
    return 0;
}

//COIN CHANGE PROBLEM
// ASSIGNMENT NO 13