// sắp xếp ma trận 1
// nhập ma trận các số nguyên A có m dòng và n cột. Sx hàng thứ i của ma trận tăng dần và in ra sau khi sắp xếp.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, x;
    cin >> m >> n >> x;

    int a[m][n], b[n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            if((x - 1) == i)
                b[j] = a[i][j];
        }
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(b[i] > b[j]){
                swap(b[i], b[j]);

    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if((x - 1) == i){
                cout << b[j] << " ";
            }else{
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}