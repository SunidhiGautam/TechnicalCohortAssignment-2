#include<iostream>
//Pattern 3
int main()
{
    
    int row , col ,spac , n=5;
    //Rows
    for(row=1; row<=n ; row++){
        //Spaces
        for(spac=1 ; spac<=n-row ; spac++)
        {
            std::cout<<" ";

        }
        //Columns
        for( col=1 ; col<=row ; col++){
            std::cout<<"*";

        }
        std::cout<<std::endl;
    }
}
