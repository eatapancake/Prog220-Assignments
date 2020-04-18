#include <iostream>
#include <string>

int main()

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
    for (size_t i = 0; i < GridSize; i++)
    {
        for(size_t j = 0; j < GridSize; j++)
        {
            std::cout << MyGrid[i][j] << " ";
        }
        std::cout << "\n";
    }

    void 
    std::cout << "\n\nDONE!!";
    return 0;
}