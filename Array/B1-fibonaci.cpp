#include<iostream>
using namespace std;

void solve(int n){
    cout << "0 1 ";
    long long fn2 = 0, fn1 = 1;
    for (int i = 3; i <= n; i++){
        long long fn = fn1 + fn2;
        cout << fn << " ";
        fn2 = fn1;
        fn1 = fn;
    }
}

int main(){
    int n;
    cout << "\nEnter n: ";
    cin >> n;
    cout << "\nThe fibonacci sequence of the first n numbers is: ";
    solve(n);
}