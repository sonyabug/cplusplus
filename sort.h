#ifndef MY_SORT
#define MY_SORT

void swap(int* array, int i, int j);
void swap(double* array, int i, int j);
void swap(char* array, int i, int j);
void swap(point_2d* array, int i, int j);
void sort(int* array, int length, int (*predicate) (int, int));
void sort(double* array, int length, double (*predicate) (double, double));
void sort(char* array, int length, char (*predicate) (char, char));
void sort(point_2d* array, int length, int (*predicate) (point_2d, point_2d));

int gt(int a, int b);
int lt(int a, int b);
double gt(double a, double b);
double lt(double a, double b);
char gt(char a, char b);
char lt(char a, char b);

#include "sort.cpp"
#endif
