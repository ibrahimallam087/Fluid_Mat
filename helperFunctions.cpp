#include "helperFunctions.h"
#include <iostream>
#include<vector>
void increment(int& num){
    num+=1;

}
void increment2(int num){
    num+=1;

}
void add10toArray( int arr[], int len){
    for(int i = 0;i<len;++i){
        arr[i]+=10;
    }
}

void printArray(int arr[], int len){
    std::cout<<"{";
    
    for(int i=0;i<len;++i){
        if(i==len-1)
            std::cout<<arr[i]<<"}"<<std::endl;
        else 
            std::cout<<arr[i]<<"-";
    }
    
}


void modifyVactor(std::vector<int>& vec1){
    for(int& element :vec1){
        element+=1;
    }
}

void gaussianElimination(std::vector<std::vector<double>>& matrix){
    int len = matrix.size(); // Number of rows of the augmented matrix

    for(int i=0;i<len;++i){
        for(int j = i+1;j<len;++j){
            double factor = matrix[j][i]/matrix[i][i];
            for(int k = 0;k<=len;k++){
                matrix[j][k]-=factor*matrix[i][k];

            }
        }

    }

}

void print_Matrix(const std::vector<std::vector<double>>& matrix) {
    int rows = matrix.size();        // Number of rows
    int cols = matrix[0].size();     // Number of columns

    std::cout << "[\n";
    for (int i = 0; i < rows; i++) {
        std::cout << "  ";
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "]" << std::endl;
}