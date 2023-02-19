#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> &v){
    vector<int> result;
    for (int i = 0; i < v.size(); i++){
        bool checkDuplicates = false;
        for (int j = i + 1; j < v.size(); j++){
            if(v[i] == v[j]){
                checkDuplicates = true;
                break;
            }
        }
        if(!checkDuplicates){
            result.push_back(v[i]);
        }
    }
    return result;
}

/* Cach 2
    vector<int> removeDuplicates(vector<int>& v) {
        sort(v.begin(), v.end());
        vector<int> result;
        for (int i = 0; i < v.size(); i++) {
            if (i == 0 || v[i] != v[i-1]) { // chỉ lưu trữ ptử hiện tại nếu nó khác với ptử trc đó
                result.push_back(v[i]);
            }
        }
        return result;
    }
*/

int main(){
    int n;
    cout << "\nEnter number: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    v = removeDuplicates(v);
    cout << "\nMang vector sau khi loai bo cac gia tri trung lap: ";
    for(int x : v){
        cout << x << " ";
    }
}