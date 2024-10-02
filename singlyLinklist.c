#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
} ;

struct node *list=NULL /*head*/,*np/*new node*/,*pp/*previous node/always last node*/; //all are node type POINTER
void newnode() {
	//step 1: make space in heap for new node
	np=(struct node*)malloc(sizeof(struct node));
	//step 2.1: set data of new node
	printf("Enter the number you want to add: ");
	scanf("%d",&np->data);
	//step 2.2: set new node's  next pointer to NULL
	np->next=NULL;
}
void Append() {
	newnode();
	//step 2.3: when 1st node is created np will link with list
	if(list==NULL) {
		pp=list;
		list=np;//when 1st node is created np will link with list
	} else {
		//step 2.4: when np is not 1st node then link previous node with new node
		pp->next=np;
	}
	//step 3: make new node as previous node
	pp=np;
}
void Display() {
	printf("\nList: [ ");
	for(struct node* i=list; i!=NULL; i=i->next) {
		printf("%d ",i->data);
	}
	printf("]\n\n");
}
void Insert() {
	/*
	3 case's:
	    1.list=NULL:    list=np pp=list
	    2.old in linklist :     old's previous node.next=np     np's next will be old node
	    3.old not in linklist:  Append
	*/
	if(list==NULL) {//case 1
		newnode();
		pp=list;
		list=np;
		np=pp;
		return;
	}
	printf("Enter the Number you want to shift : ");
	int old;
	scanf("%d",&old);
	newnode();
	for(struct node *i=list,*pi=NULL; i!=NULL; i=i->next) {//case 2
		if(i->data==old) {
			if(i==list) {
				np->next=i;
				list=np;
				return;
			}
			pi->next=np;
			np->next=i;
			return;
		}
		pi=i;
	}
	printf("%d not found.\n",old);
	pp->next=np;
	pp=np;
}
void Delete(int t) {

	for(struct node *i=list,*pi=NULL; i!=NULL; i=i->next) {
		if(i->data==t) {
			if(i==list) { //1
				list=i->next;
				return;
			}
			pi->next=i->next;
			return;
		}
		pi=i;
	}
	printf("%d not found\n",t);
}

int main()
{
	while(1) {
		int op;
		Display();
		printf("1. Append \n");
		printf("2. Insert \n");//n->n+1 value at n
		printf("3. Delete \n");
		printf("4. Exit \nEnter your choice: ");
		scanf("%d",&op);
		switch(op) {
		case 1:
			Append();
			break;
		case 2:
			Insert();
			break;
		case 3:
			if(list!=NULL) {
				printf("Enter the number you want to remove : ");
				int t;
				scanf("%d",&t);
				Delete(t);
			} else printf("List is empty!!!!");
			break;
		case 4:
			return 0;
		}


	}
	return 0;
}
