#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        int minIndex = i;
        for (int j = i + 1; j < v.size(); j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        iter_swap(v.begin() + minIndex, v.begin() + i);
    }
}

int Sum(vector<int> &v){
    int sum = 0;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        if(*it % 2 == 0)
            sum += *it;
    }
    return sum;
}

int Max(vector<int> &v){
    int maxIndex = v[0];
    for (int i = 0; i < v.size(); i++){
        if(v[i] > maxIndex)
            maxIndex = v[i];
    }
    return maxIndex;
}

bool check(vector<int> &v, int x){
    bool ok = false;
    for (int i = 0; i < v.size(); i++){
        if(v[i] == x)
            ok = true;
    }
    return ok;
}

vector<int> removeElements(vector<int> &v, int l, int r){
    v.erase(v.begin() + l, v.begin() + r + 1);
    return v;
}

int main(){
    int n;
    cout << "\nEnter number: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    selectionSort(v);

    cout << "\nMang vector sau khi sap xep: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nTong cac phan tu chan cua vector bang: " << Sum(v)
         << "\nPhan tu lon nhat trong vector la: " << Max(v);

    int x;
    cout << "\nNhap phan tu ban muon tim trong vector: ";
    cin >> x;

    cout << check(v, x) ? "\nTim thay!" : "\nKhong tim thay!";

    int l,r;
    cout << "\nNhap vi tri muon xoa phan tu trong vector: ";
    cin >> l >> r;

    v = removeElements(v, l, r);
    cout << "\nMang vector sau khi xoa cac phan tu: ";
    for(int x : v)
        cout << x << " ";
}