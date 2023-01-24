#include<iostream>
//Pattern 9
int main()
{
    int row, col , col1 , row1, n;
    std::cout<<"Enter number of Rows: ";
    std::cin>>n;

    //for rows
    for (row=1 ; row<=n ; row++){
        //for columns
        for(col=1 ; col<=n ; col++){

            if (col==row || col+row==n+1 ){   //|| using OR operator 
                std::cout<<"*   ";}

                
                else{
                    std::cout<<"    ";
                }
                
                } std::cout<<std::endl;
            } 
        } 
    

  
