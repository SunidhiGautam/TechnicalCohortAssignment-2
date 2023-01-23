#include<iostream>
//Pattern 2
int main()
{
    int row , col , n=5 ;
  //for rows
    for(row=1; row<=n ; row++){
      //for columns
        for(col=n ; col>=row ; col--)
        {
            std::cout<<"* ";

        }
        std::cout<<std::endl;
    }
}
