#include<iostream>
//Pattern 14

int main()
{
    int   row , x ;
    std::cout<<"Enter x : ";
    std::cin>>x;

    for (row=1 ; row<=10 ;++row ){
       
        std::cout<< x << "*"<< row <<"="<<x*row<<std::endl;
        }
        std::cout<<std::endl;

        return 0;
    }
