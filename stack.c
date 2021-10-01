
#include<stdlib.h>
#include<stdio.h>

struct stack{

    int data;
	struct stack *next;
};

struct stack *top=NULL,*down=NULL;


 void push(){
	 struct stack *ptr;
	 ptr=(struct stack *)malloc(sizeof(struct stack));

	 int num;
	 printf("enter number to insert");
	 scanf("%d",&num);

	 ptr->data=num;
	 ptr->next=NULL;

	 if(top==NULL && down==NULL){
		 top=down=ptr;

	 }else{
             ptr->next=top;
			 top=ptr;
	 }


 }

 void pop(){

	 if(top==NULL){
		 printf("NO element in stack\n");
	 }else{
		 struct stack *temp;
		 temp=top;
		 top=top->next;
		 printf("deleted element is %d",temp->data);
		 free(temp);
	 }

 }

 void peek(){

	 if(top==NULL){
		 
		 printf("no element in stack\n");
	 }else{
		 printf("top element in stack is %d",top->data);
	 }

 }

 

 


 void display(){

	 if(top==NULL){
		 printf("there is no element in stack\n");
	 }else{
		  struct stack *temp;
		  temp=top;
		   while(temp){
			 printf("element of stack is:");
			 printf("%d\n",temp->data);
			 temp=temp->next;
		 }
	 }
     
 }

  int menu(){
 	int choice;
 	 
 	printf("\n1.push into stack\n");
 	printf("2.pop into a stack\n");
 	printf("3.top most element in stack\n");
 	printf("4.display element in stack\n");
 	printf("5.exit\n");
 	
 	printf("enter your choice");
 	scanf("%d",&choice);
 	return choice;
 }

 int main(){

 

    while(1)
	{
	
	switch(menu())
	{
		 
		case 1:
		    	push();
		    	break;
		    	
		case 2:
	          	pop();
	          	break;
		case 3:
		         peek();
		         break;
		 
		case 4:
		           display();
		           break;
		case 5:
		       exit(0);
		       
		default:
			    printf("enter wrong choice\n");
     	}
    }

     return 0;
 }
