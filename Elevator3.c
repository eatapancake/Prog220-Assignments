#include <stdio.h>
#include <stdlib.h>

//Credit to Karl Statz for Linked Lists
//Credit to https://www.geeksforgeeks.org/doubly-linked-list/ for Doubly Linked Lists

int Elevator[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
int CurrentFloor =  1;
int Again = 1;
int Input = 1;
int Check = 0;

int ChangeFloor (int x) 
{
 
    if (x > 0 && x < 16 )
    {
        if (CurrentFloor == x) 
        {
            printf("DING!! You are already on Floor %d\n", x );
        }

        if (x  > CurrentFloor ) //Elevator going up
        {
            for(int i = CurrentFloor - 1; i < x; i++)
            {
                printf("%d ", Elevator[i] );
            }
            CurrentFloor = x;
            printf("DING!\n");
        }
        
        if (CurrentFloor > x ) //Elavator going down
        {
            CurrentFloor = CurrentFloor -1; 

            for(int i =  CurrentFloor; i >= x - 1; i--)
            {
                printf("%d ", Elevator[i]);
            }
            CurrentFloor = x;
            printf("DING!!\n");
        }
    }
    else
    {
        printf("Error! That is Not A Valid Floor");
    }
    return CurrentFloor;
}

struct Node{
	int data;
	struct Node *next;
    struct Node *prev;
};

void append(struct Node **head, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *last = *head;
	new_node->data = new_data;
	new_node->next = NULL;
    
	if(*head == NULL){
        new_node->prev = NULL;
		*head = new_node;
		return;
	}
	while(last->next != NULL){
		last = last->next;
	}
	last->next = new_node;
    new_node-> prev = last;
    return;

}

void print_list(struct Node *n)
{
	while(n != NULL){
		printf("%d\n", n->data);
		n = n->next;
	}
}

void print_floor (struct Node *n)
{
    while(n != NULL) {
        printf("%d\n", n->data);
      //  ChangeFloor(n->data);
        printf ("The Floor is Now: %d\n\n", CurrentFloor);
        n = n->next;
    }
}

void clear_list(struct Node** n)
{
	struct Node* current = *n;
	struct Node* next;
	while(current != NULL){
		next = current->next;
		free(current);
		current = next;
	}
	//Dangling Pointer cleanup
	*n = NULL;
}



int main()
{
    struct Node* MyButtons = NULL;
    MyButtons = (struct Node*)malloc(sizeof(struct Node));

    while (Again == 1)
    {
        CurrentFloor = 1;
        printf("\n---------------------------------------------------------------\n");
        printf("Which Floors would you like to go to? (Please separate each floor with a space) \nThe Top Floor is 15.\nThe Current Floor is %d.\n", CurrentFloor );
        printf("Please enter '30' when you are finished pressing the buttons\n");

        while(Check != 30)
        {
           scanf("%d", &Check);
           append(&MyButtons, Check);
        }      
        print_floor(MyButtons);
        //clear_list(&MyButtons);
                  
        printf ("\n---------------------------------------------------------------");
        printf("\nWould you like to go on the elevator again? (Yes = 1, No = 0) \n");
        scanf("%d", &Again );

    }

}