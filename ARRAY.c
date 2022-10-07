#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
void create();
void insert();
void deletion();
void search();
void display();

int a,b[20],n,p,e,f,i,pos,r=0;
void main()
{
	
	int ch;
	char g='y';
	clrscr();
	do
	{
		printf("\n-------Main Menu-------");
		printf("\n1.Create\n2.Delete\n3.Search\n4.Insert\n5.Display\n6.Exit\n");
		printf("\nEnter your choice:\t");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			create();
			break;

			case 2:
			deletion();
			break;

			case 3:
			search();
			break;

			case 4:
			insert();
			break;

			case 5:
			display();
			break;

			case 6:
			return 0;
			break;

			default:
			printf("\n Enter the correct choice:");
		}
		printf("\n\nDo You want to continue:\t");
		scanf("\n%c",&g);
	}
	while(g=='y'||g=='Y');
	getch();
}

void create()
{
	printf("\n\nEnter the number of nodes:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n\nEnter The Elements:\t",i+1);
	scanf("%d",&b[i]);
	}
}

void deletion()
{
	printf("\nEnter The Position You Want to Delete:\t");
	scanf("%d",&pos);
	if(pos>=n)
		{
			printf("\n\t::INVALID LOCATION::");
		}
		else
			{
				for(i=pos+1;i<n;i++)
					{
						b[i-1]=b[i];
					}
					n--;
				}
				printf("\nThe Elements After Deletion:\n");
				for(i=0;i<n;i++)
				{
					printf("\t%d",b[i]);
				}
				display();
			}
 
 
 void search()
 {
 	printf("\nEnter the Element to be Searched:\t");
 	scanf("%d",&e);
 	printf("\n");

 	for(i=0;i<n;i++)
 		{
 			if(b[i]!=e)
 				{
 					if(i==n)
 					{
 						printf("Value %d is not in the list:(\n",e);
 				}
 			}
 					
 				else
 					{
 						printf("Value is in the %d Position:)\n",i);
 						continue;
 					}
 				}
 			}

void insert()
{
	printf("\n Enter the position You Need to insert:\t");
	scanf("%d",&pos);
	if(pos>=n)
		{
			printf("\n\t::INVALID LOCATION::\n");
		}
		else
			{
				for(i=MAX-1;i>=pos-1;i--)
					{
						b[i+1]=b[i];
					}
					printf("\n Enter the element to insert:\t\n");
					scanf("%d",&p);
					b[pos]=p;
					n++;
				}

				printf("The list after insertion: \t\n");
				display();
			}


void display()
{	printf("\n");
	printf("\nThe Element of The list ADT are:\t");
	printf("\n");
	printf("\nPositions\tElements");
	for(i=0;i<n;i++)
		{
			printf("\n    %d\t\t    %d",r,b[i]);
			r++;
		}
		r=0;
	}