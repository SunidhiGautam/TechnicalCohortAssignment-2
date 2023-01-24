#include<iostream>
//Pattern 8
int main()
{
    int row , col , n ;
    std::cout<<"Enter number of rows: ";
    std::cin>>n;
    //for rows 
    for(row=1 ; row<=n ; row++){
        //for columns
        for(col=1 ; col<=n ; col++)
        {
            if(col+row == n+1){
                std::cout<<"*   ";
            }
            else{
                std::cout<<"    ";
            }

        } 
        std::cout<<std::endl;
    } 
}
