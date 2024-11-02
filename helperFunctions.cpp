#include "helperFunctions.h"
#include <iostream>

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
