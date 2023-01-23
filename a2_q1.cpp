#include<iostream>
//Pattern 1
int main()
{
    int row , col , n=5;
    //for rows
    for(row=1; row<=n ; row++){
        //for columns
        for(col=1 ; col<=row ; col++)
        {
            std::cout<<"* ";

        }
        std::cout<<std::endl;
    }

}
