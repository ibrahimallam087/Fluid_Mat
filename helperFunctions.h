#ifndef HELPER_FUNCTIONS_H 
#define HELPER_FUNCTIONS_H
#include<iostream>
#include<vector>
void increment (int& num);
void increment2 (int num);
void add10toArray (int arr[], int len);
void printArray (int arr[], int len);
void modifyVactor(std::vector<int>& vec1);
void gaussianElimination(std::vector<std::vector<double>>& matrix);
void print_Matrix(const std::vector<std::vector<double>>& matrix);
#endif