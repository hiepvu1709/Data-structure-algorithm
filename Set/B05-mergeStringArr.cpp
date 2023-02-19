#include<bits/stdc++.h>
using namespace std;

/*
    Cho arr1 và arr2 co kiểu vetor<string>. Hay một dãy từ hai dãy trên theo điều kiện sau:
        - Kết quả chỉ chứa các chuôi riêng biệt (K có hai chuỗi nào giống nhau).
        - Kết quả chứa các ptử trong arr1 mà k xuất hiện trong arr2.
        - Các ptử các dãy kết quả được sắp xếp theo thứ tự từ điểm từ nhỏ đến lớn.
    Ví dụ:
        Với arr1 = ["codelearn", "learncode", "codelearn", "io","fpt"]  

            arr2 = ["learncode", "codelearnio", "fsoft"].
            
        Thì kết quả sẽ là mergeStringArr(arr1, arr2) = ["codelearn", "fpt", "io"]
*/

vector<string> mergeStringArr(vector<string> &arr1, vector<string> &arr2){
    set<string> resSet(arr1.begin(), arr1.end());
    for(auto str : arr2){
        auto search = resSet.find(str);
        if(search != resSet.end()){
            resSet.erase(search);
        }
    }
    vector<string> res(resSet.begin(), resSet.end());
    return res;
}

int main(){
    vector<string> arr1 = {"codelearn","learncode","codelearn","io","fpt"};
    vector<string> arr2 = {"learncode","codelearnio","fsoft"};

    vector<string> result = mergeStringArr(arr1, arr2);
    for(auto str : result){
        cout << str << " ";
    }
    return 0;
}