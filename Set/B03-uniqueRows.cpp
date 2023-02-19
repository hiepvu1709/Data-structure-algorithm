#include<bits/stdc++.h>
using namespace std;

// Cho 1 ma trận gồm các dãy nhị phân khác nhau. Hãy đưa ra các dãy nhị phân khác nhau trong ma trận đó.

vector<vector<int>> uniqueRow(vector<vector<int>> &matrix){

    // khai bao tap hop luu tru cac hang da xuat hien
    set<vector<int>> rows;

    // khai bao ma tran ket qua
    vector<vector<int>> result;

    // duyet tung hang trong ma tran
    for(vector<int> &row : matrix){

        // kiem tra xem hang da xuat hien trong tap hop chua
        if(rows.find(row) == rows.end()){

            // neu chua xuat hien thi them hang do vao tap hop va ma tran ket qua
            rows.insert(row);
            result.push_back(row);
        }
    }
    return result;
}

int main(){
    vector<vector<int>> matrix = {{1, 1, 0, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}};
    vector<vector<int>> result = uniqueRow(matrix);

    for(vector<int> &row : result){
        for(int elem : row){
            cout << elem << " ";
        }
        cout << endl;
    }
}