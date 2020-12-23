#pragma once
#include "Cell.h"

// Sum defined only for dim = 3 
double* Sum(double* mat, int imageSize, int matDepth, int dim);

double* Eye(int size);

int max(int a, int b);

// mat2 is kernel matrix.
double* Conv2(Cell image, Cell kernel, char* type = "same");
double* Conv2(double* image, int imageRow, int imageCol, double* kernel, int kernelRow, int kernelCol, char* type);