/*  Đoạn con có tổng không âm
    Cho số nguyên dương N và dãy N số nguyên ai .Một đoạn con của dãy là dãy các phần tử liên tiếp nhau. Hãy xđ độ dài đoạn con dài nhất của A có tổng không âm.

    Dữ liệu vào
        -Dòng 1: Chứa số nguyên dương N(1≤N≤10^5)
        -Dòng 2: Chứa N số nguyên ai (ai ≤10^4 )
    Dữ liệu ra
        Kết quả tìm được. Nếu không có ghi -1

    6
    -7 0 -2 6 -6 -4  => 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxLength = -1;
    int currentLength = 0;
    int currentSum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        currentSum += a[i];
        if(currentSum >= 0){
            currentLength++;
            maxLength = max(maxLength, currentLength);
        }else{
            currentLength = 0;
        }
    }
    cout << maxLength << endl;
}