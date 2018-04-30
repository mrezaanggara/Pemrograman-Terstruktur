#include <iostream>
using namespace std;

struct node{
  int data;
  node *next;
};


//node* tail;
//struct Node(){
 // int databaru;
  //Node *head;
//}
node* head;

void init(){
      head = NULL;
      //tail = NULL;
}

int cek(){
  if(head==NULL) return 1;
  else return 0;
}

void barudepan(int databaru){
  node *baru;
baru = new node;
baru->data = databaru;
baru->next = baru;
  if cek (head==1){
    head=baru;
    head->next=head;}
  else {
    help=head;
    while (bantu->next!=head){
      bantu=bantu->next;}
    baru->next=head;
    head=baru;
    bantu->next=head;
	}
}
void barubelakang(int databaru){
  node *baru *bantu;
baru = new node;
baru->data = databaru;
baru->next = baru;
  if cek (head==1){
    head=baru;
    head->next=head;}
  else {
    help=head;
    while (bantu->next!=head){
      bantu=bantu->next;}
    bantu->next=baru;
    baru->next=head;
	}  
}

int main(){
	init();
}
