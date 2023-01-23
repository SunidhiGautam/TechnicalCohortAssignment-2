#include<iostream>
//Pattern 12
//Fibonacci series 
int main()
{
    int row , col , n;
    int a=0;   // first number
    int b=1;   // second number
    std::cout<<"Enter number of rows: ";
    std::cin>>n;

    //For rows
    for(row=1 ; row<=n ; row++){
         //Columns
        for (col=1 ; col<=row ; col++){
        
        std::cout<< a <<" ";
        int c=a+b;  //third number
        a=b;
        b=c;
        }

        std::cout<<std::endl;
    
    
    }
       
    
    
}
