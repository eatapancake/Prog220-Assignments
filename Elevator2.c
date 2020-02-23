#include<stdio.h> 

// clrscr() - Clears the screen

int Elevator[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
int CurrentFloor =  1;
int btns_pressed = 0;
int btns[15];
int Again = 1;
int Input = 1;

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
int main()
{
     
    while (Again == 1)
    {
        CurrentFloor = 1;
        printf("\n---------------------------------------------------------------\n");
        printf("How many buttons will you press on the Elevator?\nThe Top Floor is 15.\nThe Current Floor is %d.\n", CurrentFloor );
        scanf("%d", &btns_pressed);

        printf("Which Floors would you like to go to? (Please separate each floor with a space)\n");
        for(int i=0; i<btns_pressed; i++)  
        {
            scanf("%d", &btns[i]);
        }
        for(int i=0; i <btns_pressed; i++)
        {
            Input = btns[i];
            ChangeFloor(Input);
            printf ("The Floor is Now: %d\n\n", CurrentFloor); 
        }
           
        printf ("\n---------------------------------------------------------------");
        printf("\nWould you like to go on the elevator again? (Yes = 1, No = 0) \n");
        scanf("%d", &Again );

    }

}