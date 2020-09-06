#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node{
    int data;
    struct node *next;
}*top=NULL,*temp=NULL,*new=NULL;
int main(){
    push();
    pop();
    display();
}
void push(){
    int t;
    printf("enter total elements");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        if(top==NULL){
            
            new->next=NULL;
            top=new;
        }
        else{
            new->next=top;
            top=new;
        }
}
}
void pop(){
    int t=0;
    printf("enter total elements to pop");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
            if(top==NULL){
                printf("UNDERFLOW");
    }
            else{
                temp=top;
                top=top->next;
                temp->next=NULL;
                free(temp);
    }
}}
void display(){
        if(top==NULL){
            printf("EMPTY STACK");
        }
        else{
            temp=top;
            while(temp!=NULL){

                printf("%d\n",temp->data);
                temp=temp->next;
            }
        }
}