// so amstrong la so A co n chu so va thoa man tong cua luy thua bac n cua tung chu so trong A bang chinh no

#include<iostream>
#include<cmath>
using namespace std;

// int amstrong(int n){
//     int sum = 0, cnt = 0, i = 0, temp = n;
//     int a[100];
//     while(n != 0){
//         a[i] = n % 10;
//         n /= 10;
//         i++;
//         cnt++;
//     }
//     for (int i = 0; i < cnt; i++)
//         sum += pow(a[i], cnt);
//     return sum == temp;
// }

int count(int n){
    int cnt = 0;
    while(n){
        ++cnt;
        n /= 10;
    }
    return cnt;
}

int amstrong(int n){
    int sum = 0, tmp = n, d = count(n);
    while(n){
        sum += pow((n % 10), d);
        n /= 10;
    }
    return sum == tmp;
}

int main(){
    int n;
    cin >> n;
    if(amstrong(n))
        cout << "YES\n";
    else
        cout << "NO\n";
}