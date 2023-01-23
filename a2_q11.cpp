#include<iostream>
//Pattern 11
int main()
{
    int row , col , k=1 , n;
    std::cout<<"Enter number of Rows : ";
    std::cin>>n;
    //For rows
    for(row=1; row<=n ; row++){
        //For columns
        for(col=1 ; col<=row ;col++)
        {
            //k is number starting from 1 
            std::cout<< k << " " ;
            k++;
          
        }
        std::cout<<std::endl;
    }

}
