#include <bits/stdc++.h>
using namespace std;

int main(){
   long long t; cin >> t;
   while(t--){
       long long D, d, p, q; cin >> D >> d >> p >> q;
       long long sum = 0;
       int lim = D/d;
       int temp = 0;
       for(int i = 0; i <= lim; i++){
           if(D-d >= d){
                sum += (p+(d*temp))*d;
                temp++;
           } else {
                sum += (p+(d*temp))*(D-d);
                temp++;
           }
           D = D-d;
           cout << sum ;
       }
       cout << sum << endl;
   }
    return 0;
}