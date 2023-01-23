#include <iostream>
//Pattern 5

int main()
{
    int n;
    std::cout<<"Enter number of rows: ";
    std::cin >> n;

    int spaces = n / 2;
    int stars = 1;

    //rows
    for (int row = 1; row <= n; row++){

        //spaces
        for (int col = 1; col <= spaces; col++){
           std:: cout << ("\t");
        }

        //columns 
        for (int col = 1; col <= stars; col++){
            std::cout << ("*\t");
        }

        //condition for diamond pattern  

        if (row <= n / 2){ //when spaces are decreasing and stars are increasing
            spaces--;
            stars += 2;
        }else{  //spaces are increasing and stars are decreasing 
            spaces++;
            stars -= 2;
        }

        std::cout << std::endl;
    }
}
