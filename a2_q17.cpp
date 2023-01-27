#include<iostream>
//Pattern 17
int main()
{
    int row , col ,  n ;
    int space=n/2 ;
    int stars=1;
    std::cout<<"Enter rows: ";
    std::cin>>n;
    
    for (row=1 ; row<= n ; row++){
        for(col=1 ; col<=n/2 ; col++){
            if(row==n/2+1){
                std::cout<<"*\t"; //no spaces 

            }
            else {
                std::cout<<"\t";
            }
        }
    

    for (col=1 ; col<=stars ; col++){
        std::cout<<"*\t";

    } std::cout<<std::endl;

    if (row<=n/2){
        stars++;

    }
    else{
        stars--;
    } 
    std::cout<<std::endl;
    }


   return 0;

}
