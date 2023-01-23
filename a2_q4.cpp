#include<iostream>
//Pattern 4
int main()
{
    int row , col , spac, n=5;
    //ROWS
    for(row = 1 ; row<=n ; row++){
        //SPACES
        for(spac=1 ; spac<=row ; spac++){
            std::cout<<"   ";

        }
        //COLUMNS
        for(col=n ; col>=row ; col--){
            std::cout<<"*  ";

        } 
        std::cout<<std::endl;
           }
           
}
       
        
