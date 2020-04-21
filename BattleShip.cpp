#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib> 


void ShipsAppear(int a[][10] )
{
    srand(time(0));
    // srand(time(NULL));
    int x;
    int y;
    //x = 0 + rand() % 9;
    //y = 0 + rand() % 9;

    for (int i = 0; i < 5; i ++)
    {
        x = 0 + rand() % 10;
        y = 0 + rand() % 10;

        a[x][y]= 1; 
        std::cout << x ;
        std::cout << y << std::endl; 

    }
}
void CreateGrid()
{
   //Making the 10 x 10 grid
    const int GridSize = 10;
    int MyGrid [GridSize] [GridSize] ;
    //implement values
    for (size_t i = 0; i < GridSize; i++)
    {
        for (size_t j = 0; j < GridSize; j++ )
        {
            MyGrid[i][j] = 0;         
        }      
    }
   

    
    std::cout << "\n\nDONE!!";

    ShipsAppear(MyGrid);

     for (size_t i = 0; i < GridSize; i++)
    {
        for(size_t j = 0; j < GridSize; j++)
        {
            std::cout << MyGrid[i][j] << " ";
        }
        std::cout << "\n";
    }

}

int main()
{
    CreateGrid();

    
}