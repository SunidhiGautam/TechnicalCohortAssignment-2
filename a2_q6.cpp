#include<iostream>
//Pattern 6


int main(){
    int n;
    std::cout<<"Enter number of rows : ";

    std::cin >> n;

    int stars = n / 2 + 1;
    int spaces = 1;
    //rows
    for (int rows = 1; rows <= n; rows++){
      
        //columns
        for (int col = 1; col <= stars; col++){   //left half
            std::cout << ("*	");
        }
      
        //spaces
        for (int col = 1; col <= spaces; col++){
            std::cout << ("	");
        }
        for (int col = 1; col <= stars; col++){  //right half
            std::cout << ("*	");
        }

        std::cout << std::endl;
      
        //condition for hollow pattern
      
        if (rows <n / 2 + 1){
            stars--;
            spaces += 2;
        }else{
            stars++;
            spaces -= 2;
        }
    }
}
