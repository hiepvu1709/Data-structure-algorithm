/*
    Bạn Nam mất trật tự trong giờ học thể dục nên bị thầy giáo phạt.
    Hình phạt như sau: Nam đứng nghiêm, thầy hô "trái" thì bước sang trái 1m, hô "phải" thì bước sang phải 1m. Hỏi sau n lần hô thì Nam cách xa vị trí ban đầu bao nhiêu mét?

    Input:
        Dòng thứ nhất là số n (1 ≤ n ≤ 100).
        Dòng tiếp theo gồm n số 1 hoặc 2, mỗi số cách nhau một khoảng trắng. Nếu là số 1 thì thầy giáo hô "trái", nếu là số 2 thì thầy giáo hô "phải".
    Output:
        Là khoảng cách của Nam sau n lần hô so với vị trí ban đầu.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0;
    cout << "\nNhap so lan thay ho: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++){
        if(a[i] == 1)
            d--;
        if(a[i] == 2)
            d++;
    }
    cout << "\nVi tri cua Nam cach vi tri ban dau la: " << abs(d);
}