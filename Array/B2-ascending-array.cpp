#include<iostream>
using namespace std;

int check(int a[],int n){
    for (int i = 0; i < n; i++)
        if(a[i] >= a[i + 1])
            return 0;
    return 1;
}

int main(){
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if(check(a, n))
        cout << "\nYes";
    else
        cout << "\nNo";
}