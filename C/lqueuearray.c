#include<stdio.h>
#include<stdlib.h>



struct queue{
    int size;
    int f;
    int r;
    int *arr;
};


void createqueue(struct queue *q){

    q->size=10;
    q->f=-1;
    q->r=-1;
    q->arr=(int *)malloc(q->size * sizeof(int));
}


void enqueue(struct queue *q){
   
   int x;
   printf("enter element to insert\n");
   scanf("%d",&x);



  if(q->r==q->size-1){
      printf("queue is full\n");

  }else{

      q->r=q->r+1;
      q->arr[q->r]=x;

  }

}


void dequeue(struct queue *q){


   if(q->f==q->r){
       printf("there is no element in queue");

   }else{
       q->f=q->f+1;
       printf("deleted element is %d",q->arr[q->f]);
   }

}



void display(struct queue *q){
  
      int i;
  if(q->r== q->f){
    printf("queue is empty");

}else{
 

    for(i=q->f+1;i<=q->r;i++){
        printf(" %d ",q->arr[i]);
    }
  }

}


void peek(struct queue *q){

if(q->f==q->r){
    printf("no element in queue");
}else{
    printf("last element in queue is %d",q->arr[q->r]);
}

}

void isempty(struct queue *q){

    if(q->f==q->r){
        printf("queue is empty");
    }else{
        printf("queue is not empty");
    }


}

void isfull(struct queue *q){

    if(q->r==q->size-1){
        printf("queue is full");
    }else {
        printf("queue is not full");
    }

}


int queuesize(struct queue *q){

   return q->size;

}

  
int menu()
{
	int choice;
	
	printf("\n1.enqueue in queue\n");
	printf("2. dequeue in queue\n");
	printf("3.display queue\n");
	printf("4.queue is empty or not\n");
	printf("5.queue is full or not\n");
    printf("6.size of queue\n");
    printf("7.top element in queue\n");
    printf("8.exit\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	return(choice);
}

int main()
{
	struct queue q;

    createqueue(&q);
 
	while(1)
	{
		switch(menu())
		{
			case 1:
				  enqueue(&q);
				break;
			case 2:
				 dequeue(&q);
				 
				break;
			case 3:display(&q);
			break;
			
			case 4:
				isempty(&q);
				break;
				case 5:
					isfull(&q);
					break;
		 
				case 6:
					printf("size of queue is %d,f is %d,r is %d",queuesize(&q),q.f,q.r);
					break;
				case 7:
					peek(&q);
					break;
				case 8:
				exit(0);
				default:
					printf("enter wrong choice\n");
					
				
		}
	}
 
	return 0;
}
