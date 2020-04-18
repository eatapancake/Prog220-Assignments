#include <iostream>

double FindSlope(double x, double y, double x_, double y_)
{
    double Slope = 0;

    // The coordinates are (x, y) and (x, y). 
    std::cout << "The coordinates are (" << x << ", " << y << ") and (" << x_ << ", " << y_ << "). ";
    
    if (x == x_ && y == y_) 
    {
        std::cout << "Both points are the same. There is no slope. " << std::endl;
    }
    else if ( x == x_)
    {
        Slope = 0;
        std::cout << "The slope is undefined." << std::endl ;
    }
    else
    {
        Slope = (y_ - y) / (x_ - x);
        //The Slope is x. 
        std::cout << "The slope is " << Slope <<  "." << std::endl ;
    }
    
    
    
    return Slope;


}
int main()
{
    FindSlope(2,4,8,16);
    FindSlope(-3,5,-3,2);
    FindSlope(2,3,4,3);
    FindSlope(1,1,1,1);

}