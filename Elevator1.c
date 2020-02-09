#include<stdio.h> 

// clrscr() - Clears the screen

int Elevator[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
int CurrentFloor =  0;
//int NextFloor = 0;
int Input = 100;

int ChangeFloor (int x)
{

    if (x > 0 && x < 16 )
    {
        if (x  > CurrentFloor ) //Elevator going up
        {
            for(int i = CurrentFloor; i <= x; i++) {
            printf("%d ", Elevator[i] );
        }
        CurrentFloor = x;
        printf("DING!");
    }

    if (CurrentFloor > x ) //Elavator going down
    {
        for(int i =  CurrentFloor; i >= x; i--)
        {
            printf("%d ", Elevator[i]);
        }
        CurrentFloor = x;
        printf("DING!!");
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

    while (1)
    {
        printf("\n---------------------------------------------------------------");
        printf("\nWhat Floor Would you Like to go to?\nThe Current Floor is %d,\nThe Top Floor is 15\n", CurrentFloor );
        scanf("%d", &Input);
        ChangeFloor(Input);
        printf ("\nThe Floor is Now: %d", CurrentFloor);
        printf ("\n---------------------------------------------------------------");
       
        
       
    }

    
   // printf("%d", Input);

    
   //return 0;

}