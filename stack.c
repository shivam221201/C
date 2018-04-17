#include <stdio.h>

int MAXSIZE = 7;
int stack[8];
int top = -1;
int isempty()
{
//saurabh added here
if (top==-1)
return 1;
else
return 0;
}
int isfull()
{
if(top == MAXSIZE)
return 1;
else
return 0;
}
int peek()
{
return stack[top];
}
int pop() //pop function
{
int data;
if(!isempty())
{
data = stack[top];
top =top-1;
return data;}
}
	else
{
printf("could not retrieve data,stack is empty");
}
}
<<<<<<< HEAD
int push(int data)
=======

int push(int data)//push function
>>>>>>> origin/Pratyush
{
	if(isfull())
	{
		printf("The Stack is full and data cannot be added any further\n Please delete before further insertion\n");
	}
	else if(isempty())
	{
		printf("Entering first element");
		stack[++top]=data;
	}
	else
	{
		stack[++top]=data;
	}

}

int main() {
   // push items on to the stack shivam pandey 
   

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}


