#include<stdio.h>
#include<conio.h>
#define stack_size 3
void push(int[],int*);
void pop(int[],int*);
void main()
{
int stack[stack_size],top=-1,choice,i;
do
{
printf("Enter the choice you want to perform:\n 1 to push\n 2 to pop\n 3 to display\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
      push(stack,&top);
      break;
case 2:
      pop(stack,&top);
      break;
 case 3:
 if(top==-1)
 printf("stack is empty");
 else{
 printf ("displaying the stack");
 for(i=0;i<=top;i++)
 {printf("%d",stack[top]);}
 }
 break;
}

}while(choice==1||choice==2||choice==3);

}
void push(int stack[stack_size],int*top)
{
int element;
if(*top==stack_size)
printf("stack overflow");
else
{
printf("enter the element to push:");
scanf("%d",&element);
stack[++(*top)]=element;
printf("The element pushed to the stack is %d",element);
}
}
void pop(int stack[stack_size],int *top)
{
int element;
if (*top==-1)
printf("stack_underflow");
else
{
(*top)--;
printf("The element popped is %d",stack[*top]);
}
}

