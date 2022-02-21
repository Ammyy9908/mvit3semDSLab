#include <stdio.h>
#include <stdlib.h>
int arr[10];
int n;
int val;
int pos;
int i;

void create(){
    
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the value of array\n");
    for(int i=0; i<n; i++){
        
        scanf("%d",&arr[i]);
    }
    
}

void display(){
        
        printf("The array is\n");
        for(int i=0; i<n; i++){
            
            printf("%d\n",arr[i]);
        }
}

void insert(){
        
        printf("Give me the position at which you wish to insert\n");
        scanf("%d",&pos);
        printf("Give me the  value at which you wish to insert\n");
        scanf("%d",&val);

        for(i=n-1;i>=pos;i--){
                
                arr[i+1]=arr[i];
        }
        arr[pos] = val;
        n+=1;
}

void delete(){
    printf("Give me the position at which you wish to delete\n");
    scanf("%d",&pos);
    val = arr[pos];
    for(i=pos;i<n-1;i++){
            
            arr[i]=arr[i+1];
    }
    n-=1;
}




int main(){
    int choice;
    printf("Are you want to start or not\n");
    scanf("%d",&choice);
    while(choice !=5){
    printf("Enter the choice\n");
    printf("1.Create\n");
    printf("2.Display\n");
    printf("3.Insert\n");
    printf("4.Delete\n");
    printf("5.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete();
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