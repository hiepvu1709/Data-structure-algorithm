#include<bits/stdc++.h>
using namespace std;

// Anh Việt đang thông kê số liệu cho công ty, anh muốn giá trị nhỏ thứ hai ở trong một dãy số nguyên. nếu không có kết quả như yêu cầu thì trả về "NO".

/* Ví dụ:
    Với arr = [ 1, 2, 3, 1, 1 ] thì kết quả sẽ là secondOrder(arr) = "2".

    Với arr = [ -4, 1, 2, 2 ] thì kết quả sẽ là secondOrder(arr) = "1". 
*/

string secondOrder(vector<int> &arr){
    set<int> s(arr.begin(), arr.end());
    set<int>::iterator it = s.begin();

    // di chuyen con tro it sang vi tri thu hai
    advance(it, 1);

    if(s.size() > 1)
        return to_string(*it);
    else
        return "NO";
}

int main()
{
    vector<int> arr = {1,2,3,1,1};
    vector<int> arr2 = {-4, 1, 2, 2};
    cout << secondOrder(arr) << endl;
    cout << secondOrder(arr2) << endl;
}