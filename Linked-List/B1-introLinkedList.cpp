#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

typedef struct Node node;

node* makeNode(int x){
    node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void duyet(node *head){
    while(head != NULL){
        
    }
}

int main(){

}