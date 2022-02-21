#include <stdio.h>
#include <stdlib.h>
#define max_size 5
#include <string.h>


int STACK[max_size];
int top=-1;

void push(){
    int item;
    if(top==max_size-1){
        printf("Stack is full\n");
    }
    else{
        printf("Enter the element to be pushed\n");
        scanf("%d",&item);
        top+=1;
        STACK[top]=item;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("Stack is empty\n");
        
    }
    else{
        item=STACK[top];
        top-=1;
       
    }
    printf("The popped element is %d\n",item);
}

void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The stack is\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",STACK[i]);
        }
    }
}

void plaindrome(){
    int item,flag=0,i=0,j,k,len=top+1,length=0;
    int normal_array[len];
    int reverse_array[len];
    int index = 0;

    // pop out all stack elements into normal_array
    while(top!=-1){
        item = STACK[top];
        normal_array[i]=item;
        top-=1;
        i++;
    }

    // print the normal_array
    for(int i=0;i<len;i++){
        printf("%d\n",normal_array[i]);
    }

    //reverse the normal array and push all elements of normal_array back into reverse array

    for(j=len-1;j>=0;j--){
        reverse_array[j]=normal_array[index];
        index++;
    }

    for(j=0;j<len;j++){
        printf("%d\n",reverse_array[j]);
    }

    for(i=0;i<len;i++){
        if(normal_array[i]==reverse_array[i]){
            length+=1;
        }
    }

    if(length==len){
        flag = 1;
    }
    else{
       flag = 0;
    }

    if(flag){
        printf("The stack is a palindrome\n");
    }
    else{
        printf("The stack is not a palindrome\n");
    }
}





int main(){
    int choice;
    printf("Are you want to start or not\n");
    scanf("%d",&choice);
    while(choice !=4){
    printf("Enter the choice\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.Display\n");
    printf("4.Check Palindrome\n");
    printf("5.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            plaindrome();
            break;
        case 5:
            exit(0);
            break;
         
        default:
            printf("Invalid choice\n");
    }
    }

    return 0;
}