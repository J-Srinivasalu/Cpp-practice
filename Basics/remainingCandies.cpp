#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n = t;
    while(t--){
        int b, c;
        cin >> b >> c;
        int sum = 0;
        while(b--){
            int i;
            cin >> i;
            sum += i;
        }
        cout << "Case #"<<n-t<<": "<<sum%c<<endl;
    }
    return 0;
}