#include<iostream>
using namespace std;
struct{
  int data;
  struct Node *next;
}
int main(){
  struct Node* head=null;
  struct Node* first=null;
  struct Node* second=null;
  head= (struct Node*)malloc(sizeof(struct Node));
  second= (struct Node*)malloc(sizeof(struct Node));
  third= (struct Node*)malloc(sizeof(struct Node));
  head->data=1;
  head->next=second;
  second->data=2;
  second->next=third;
  third->data=3;
  third->next=null;
  return 0;

}
