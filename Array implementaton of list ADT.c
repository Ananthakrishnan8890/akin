#include<stdio.h>
#include<conio.h>
#define MAX10
void create();
void insert();
void deletion();
void search();
void display();
void exit();
int a,b[20],n,p,e,f,i,pos;
void main()
{
	//clrscr();
	int ch;
	char g='y';
	do
	{
	printf("\n main menu");
	printf("\n 1. main menu \n2. delete \n3. search \n4. Insert \n5. display \n6. exit \n ");
	printf("\n Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{

	case1:
create();
break;

case2:
deletion();
break;

case3:
search();
break;

case4:
insert();
break;

case5:
display();
break;

case6:
exit();
break;

default:
printf("\n Enter your  correct choice: ");

	}
printf("\n do you want to continue :::");
	scanf("\n%c",&g);
}
while(g=="y"||g=='y')
getch();

}
void create()
{
printf("\n Enter the number of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n Enter the number of element: ",i+1);
	scanf("%d",&b[i]);

	}
}
void deletion()
{
	printf("\n Enter the position you want to do delete:: ");
	scanf("%d",&pos);
	if(pos>=n)
	{
	printf("\n Invalid location:: ");
    }
else 
{
	for (i=pos+1;i<n;i++)
	{
	b[i-1]=b[i];
	}
	n--;
}
printf("\n The element after deletion");
for(i=0;i<n;i++)
{
	printf("\f1%d",b[i]);

}

}

void search()
{
	printf("\n Enter the Element to be searched:: ");
	scanf("%d",&e);
	for(i=0;i<n;i++);
	{
	if(b[i]==e)
	{
	printf("\n value is in the %d position ",i);
	}
	else
	{
	printf("\n value is in the %d position::",e);
	continue;

	}
	}
}
void insert()
{
	printf("\n Enter the position you need to insert:: ");
	scanf("%d",&pos);
	if(pos>=n)
	{
	printf("\n Invalid location ::");
	}
	else
	{
	for(i=MAX-1;i>=pos-1;i--)
	{
	b[i+1]=b[i];
	}
	printf("\n Enter the element to insert::\n ");
	scanf("%d",&p);
	b[pos]=p;
	n++;
	}
	print("\n the list after insertion::\n");
	display();
	}

	void display()
	{
	printf("\n The element of the list ADT are: ");
	{
	for(i=0;i<n;i++)
	printf("\n \n %d",b[i]);
}
	}

	void Exit()
	{
	printf("The program is executed ");
	}