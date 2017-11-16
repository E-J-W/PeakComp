#include "dynamic_arrays.h"

double*** allocateArrayD3(int dim1, int dim2, int dim3)
{ 
  int i,j;
  double ***array=(double ***)calloc(dim1,sizeof(double**));
  for (i=0;i<dim1;i++)
    {
      array[i] = (double **)calloc(dim2,sizeof(double*));
      for (j=0;j<dim2;j++)
        array[i][j] = (double *)calloc(dim3,sizeof(double));
    }

  return (double***)array;
}

double** allocateArrayD2(int dim1, int dim2)
{ 
  int i;
  double **array=(double **)calloc(dim1,sizeof(double**));
  for (i=0;i<dim1;i++)
      array[i] = (double *)calloc(dim2,sizeof(double*));

  return (double**)array;
}

float*** allocateArrayF3(int dim1, int dim2, int dim3)
{ 
  int i,j;
  float ***array=(float ***)calloc(dim1,sizeof(float**));
  for (i=0;i<dim1;i++)
    {
      array[i] = (float **)calloc(dim2,sizeof(float*));
      for (j=0;j<dim2;j++)
        array[i][j] = (float *)calloc(dim3,sizeof(float));
    }

  return (float***)array;
}

float** allocateArrayF2(int dim1, int dim2)
{ 
  int i;
  float **array=(float **)calloc(dim1,sizeof(float**));
  for (i=0;i<dim1;i++)
      array[i] = (float *)calloc(dim2,sizeof(float*));

  return (float**)array;
}

int*** allocateArrayI3(int dim1, int dim2, int dim3)
{ 
  int i,j;
  int ***array=(int ***)calloc(dim1,sizeof(int**));
  for (i=0;i<dim1;i++)
    {
      array[i] = (int **)calloc(dim2,sizeof(int*));
      for (j=0;j<dim2;j++)
        array[i][j] = (int *)calloc(dim3,sizeof(int));
    }

  return (int***)array;
}

int** allocateArrayI2(int dim1, int dim2)
{ 
  int i;
  int **array=(int **)calloc(dim1,sizeof(int**));
  for (i=0;i<dim1;i++)
      array[i] = (int *)calloc(dim2,sizeof(int*));

  return (int**)array;
}
