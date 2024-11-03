#include <iostream>
#include <vector>
#include "helperFunctions.h"

// this codes is meant for trying and understanding only not included in the main project;

int main(void){

    std::vector<std::vector<double>> matrix = {{1,1,-1,-2},{2,-1,1,5},{-1,2,2,1}};
    std::cout<<"this is the original matrix"<<std::endl;
    print_Matrix(matrix);
    gaussianElimination(matrix);
    std::cout<<"this is the Upper matrix"<<std::endl;
    print_Matrix(matrix);
    
    

}