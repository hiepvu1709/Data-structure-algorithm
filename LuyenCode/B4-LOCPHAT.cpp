//  Kiem tra xem mot so co phai la so loc phat hat khong

// So loc phat la so gom co cac chu so 0, 6, 8

#include<iostream>
using namespace std;

int lp(int n){
    while(n != 0){
        int r = n % 10;
        if(r != 0 && r != 6 && r != 8)
            return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s = lp(n) ? "YES\n" : "NO\n";
        cout << s;
    }
}