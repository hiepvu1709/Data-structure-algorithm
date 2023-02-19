#include<iostream>
using namespace std;

/**
 * It counts the number of words in a string by counting the number of spaces in the string and adding
 * one
 * 
 * @param text The text to count the words in.
 * 
 * @return The number of words in the string.
 */
int countWords(string text){
    int count = 0;
    bool found = false;
    for (int i = 0; i < text.length(); i++){
        char c = text[i];
        if(c != ' '){
            if(!found){
                count++;
                found = true;
            }
        }else{
            if(found)
                found = false;
            while(i < text.length() && text[i] == ' ')
                i++;
            i--;
        }
    }
    return count;
}

int main(){
    string text;
    getline(cin, text);
    cout << countWords(text) << endl;
}