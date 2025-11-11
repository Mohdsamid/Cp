#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *first,*temp,*ttemp,*p;
void init(){
    p=first=temp=ttemp = nullptr;
}
void create_First(){
    first = new node;
    first->next=NULL;
    cout<<"Enter new data :"<<endl;
    cin>>first->data;
}
void create_New(){
    temp = first;
    while(temp->next!=NULL)
        temp=temp->next;
    ttemp=new node;
    ttemp->next=NULL;
    cout<<"Enter new data:";
    cin>>ttemp->data;
    temp->next=ttemp;
}
void display(){
    temp = first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void swap12(){
    temp = first;
    ttemp = temp ->next;
    p = ttemp ->next;
    ttemp->next=temp;
    temp->next=p;
    first = ttemp;
}
int main(){
    init();
    int n;
    cout<<"how many node you want to create:"<<endl;
    cin>>n;
    create_First();
    for(int i=1;i<n;i++){
        create_New();
    }
    display();
    swap12();
    cout<<"After Swap";
    display();
    return 0;
}