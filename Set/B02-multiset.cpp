#include<bits/stdc++.h>
using namespace std;

// Cho mang co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu dai k
// In ra duoc phan tu lon nhat trong day con do

// 10 3
// 1 2 3 1 4 5 1 8 9 10
// output
// 3 3 4 5 8 9 10

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a)
        cin >> x;
    multiset<int> ms;

    // truyen day con co chieu dai k vao trong ms
    for (int i = 0; i < k; i++){
        ms.insert(a[i]);
    }

    // boi vi trong set co thu tu nen mac dinh phan tu lon nhat se nam o cuoi cung
    for (int i = k; i < n; i++){
        cout << *ms.rbegin() << " ";

        // sau khi tim duoc ptu lon nhat ta se xoa di phan tu dau tien de chuyen sang day con tiep theo
        ms.erase(ms.find(a[i - k]));

        *ms.insert(a[i]);
    }

    cout << *ms.rbegin() << " ";
}