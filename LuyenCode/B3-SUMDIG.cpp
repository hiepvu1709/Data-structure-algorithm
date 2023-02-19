/* Tổng các chữ số của một số nguyên dương*/

#include<iostream>
using namespace std;

int sumDig(int n){
    long long int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    long long int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << sumDig(n) << endl;
    }   
}