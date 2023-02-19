/*
    DUYNO - Con số duyên nợ là con số có chữ số đầu và chữ số cuối giống nhau.
    Viết CT kiểm tra xem 1 số nguyên dương n ghi trong hệ thập phân có chữ số đầu và chữ số cuối giống nhau không?

    1 cách ngắn gọn đó là ta nhập vào một chuỗi và kiểm tra ký tự đầu và cuỗi của chuỗi có giống nhau không rồi in ra kết quả
*/

#include<iostream>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        cout << (s[0] == s[s.size() - 1] ? "Yes\n" : "No\n");
    }
}