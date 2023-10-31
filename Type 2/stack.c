#include <stdio.h>
int stack[80];
int top = -1,dig;
void push(int x)
{
if(top == dig)
{
printf("Overflow\n");
}
else
{
top++;
stack[top] = x;
printf("%d Pushed To The Stack\n", x);
}
}
void pop(){
if(top == -1)
{
printf("Underflow\n");
}
else
{
printf("%d Popped From The Stack\n", stack[top]);
top--;
}
}
int topElement()
{
if(top == -1)
{
printf("Stack Is Empty\n");
return -1;
}
else
{
return stack[top];
}
}
void displayStack()
{
if(top == -1)
{
printf("Stack Is Empty\n");
}
else
{
printf("Stack Elements:\n");
for(int i = top; i >= 0; i--)
{
printf("%d\n", stack[i]);
}
}
}
int main()
{
int choice, item;
printf("Enter The Number Of Element Of The Stack: ");
scanf("%d",&dig);
do
{
printf("Enter The Operation To Perform:\n");
printf("1. Push\n2. Pop\n3. Top element\n4. Display The Stack\n5.
Exit\n");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Enter The Element To Push: ");
scanf("%d", &item);
push(item);
break;
case 2:
pop();
break;
case 3:
item = topElement();
if(item != -1)
{
printf("Top Element: %d\n", item);
}
break;
case 4:
displayStack();
break;
case 5:
printf("Exiting\n");
break;
default:
printf("Invalid Choice\n");
}
} while(choice != 5);
return 0;
}
