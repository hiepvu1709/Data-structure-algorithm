#include<iostream>
using namespace std;

#define MAX 100
int a[MAX], b[MAX];

bool check(int n){
    int i = 0;
    for (; n!= 0; ){
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    int h = 0, count = 0;
    for (int k = i - 1; k >= 0; k--){
        b[h] = a[k];
        h++;
    }
    for (int k = 0; k < i; k++)
        if(a[k] == b[k])
            count++;
    if(count == i)
        return true;
    else
        return false;
}

int main(){
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if(check(a[i]) == true)
            cout << a[i] << " ";
}