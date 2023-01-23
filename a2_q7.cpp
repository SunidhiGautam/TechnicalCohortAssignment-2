#include<iostream>
//Pattern 7

int main()
{
    int row , coln , n, star , spaces ;
    std::cout<<"Enter number of rows: ";
    std::cin>>n;
    
    //row
    for (row=1 ; row<=n ; row++){

    //column
    for (coln=1 ; coln<=row ; coln++){
      
        //condition to print star in diagonal pattern
        if(coln==row){
            std::cout<<"*   ";
        }
        else{
            std::cout<<"   ";
        }
    }
        std::cout<<std::endl;
    
    
    
    }
    
    
}
