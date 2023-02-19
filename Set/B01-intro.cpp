#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    for(int i = 0; i< 10; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    // s.erase(5);

    for(int x : s){
        cout << x << " ";
    }
    cout << *s.begin() << endl;
    cout << *s.end() - 1 << endl;
    cout << *s.rbegin() << endl;
}