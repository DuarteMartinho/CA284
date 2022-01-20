// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// void printArray(int r1, int r2, int c1, int c2, int array1[r1][c1], int array2[r1][r2]);

// int main(int argc, char*argv[]) {
    
//     int r1, c1, r2, c2;
//     int posArgv = 3;

//     r1 = atoi(argv[1]);
//     c1 = atoi(argv[2]);
//     // printf("Row %d | Col %d\n", r1, c1);

//     int array1[r1][c1];
//     for (int r = 0; r < r1; r++) {
//         for (int c = 0; c < c1; c++) {
//             array1[r][c] = atoi(argv[posArgv]);
//             posArgv++;
//         }
//     }  

//     r2 = atoi(argv[posArgv++]);
//     c2 = atoi(argv[posArgv++]);
//     // printf("Row %d | Col %d\n", r2, c2);
    
//     int array2Original[c2][r2];
//     for (int r = 0; r < r2; r++) {
//         for (int c = 0; c < c2; c++) {
//             array2Original[r][c] = atoi(argv[posArgv]);
//             posArgv++;
//         }
//     }
    
//     printArray(r1, r2, c1, c2, array1, array2Original);
//     return 0;  
// }

// void printArray(int r1, int r2, int c1, int c2, int array1[r1][c1], int array2[r1][r2]) {
//     int multiply[r1][c2];

//     for(int i = 0; i < r1; i++) {
//         for(int j = 0; j < c2; j++) {
//             multiply[i][j] = 0;
//             for(int k = 0; k < c1; k++) {
//                 multiply[i][j] += array1[i][k] * array2[k][j];
//             }
//         }
//     }
//     for(int i = 0; i < r1; i++) {    
//         for(int j = 0; j < c2; j++) {    
//             printf("%d", multiply[i][j]);
//             if (j + 1 < c2)  {
//                 printf(" ");
//             } 
//         }    
//         printf("\n");    
//     }   

// }

#include<stdio.h>
#include<stdlib.h>

/*void multipleMatrix(int **matrix1, int m1, int n1, int **matrix2, int m2, int n2, int **resultMatrix, int mResult, int nResult);
void readMatrix(int **matrix1, int *m1, int *n1, int **matrix2, int *m2, int *n2, char*argv[]);
void printMatrix(int **matrix, int m, int n);
*/
#define MAXROW 100 //assume maximum row and column is 100
#define MAXCOL 100

void readMatrix(int matrix1[MAXROW][MAXCOL], int m1, int n1, int matrix2[MAXROW][MAXCOL], int m2, int n2, char*argv[]);

void multipleMatrix(int matrix1[MAXROW][MAXCOL], int m1, int matrix2[MAXROW][MAXCOL], int n2, int resultMatrix[MAXROW][MAXCOL]);

void printMatrix(int matrix[MAXROW][MAXCOL], int m, int n);


int main(int argc, char *argv[])
{
	int m1 = atoi(argv[1]); //the number of rows of the left matrix
	int n1 = atoi(argv[2]); //the number of columns of the left matrix
	int matrix1[MAXROW][MAXCOL] = {0}; //initialise all elements to 0

	int m2 = atoi(argv[3 + m1 * n1]);  //the number of rows of the right matrix
	int n2 = atoi(argv[3 + m1 * n1 + 1]); //the number of columns of the right matrix
	int matrix2[MAXROW][MAXCOL] = {0}; //initialise all elements to 0


	int resultMatrix[MAXROW][MAXCOL] = {0};  //the 2D array to store resulting matrix

	/* fill data for the first matrix, m1 and n1 refer to the number of rows and columns of the left matrix, similarly, m2 and n2 refer to the number of rows and columns of the right matrix  */
	readMatrix(matrix1, m1, n1, matrix2, m2, n2, argv);

	/* we notice that the resulting matrix will have the size m1*n2, i.e. the number of rows of the resulting matrix is equal to the number of rows of the left matrix, and the number of columns of the resulting matrix is equal to the number of columns of the right matrix*/
	multipleMatrix(matrix1, m1, matrix2, n2, resultMatrix);

	/*print the result matrix */
	printMatrix(resultMatrix, m1, n2);

	return 0;
}

void readMatrix(int matrix1[MAXROW][MAXCOL], int m1, int n1, int matrix2[MAXROW][MAXCOL], int m2, int n2, char*argv[])
{
	/* read data for matrix 1 with the size m1 x n1 (rows x columns) */
	int k = 0;
	for(int i = 0; i < m1; ++i)
	{
		for(int j = 0; j < n1; ++j)
		{
			*(*(matrix1 + i) + j) = atoi(argv[3 + k++]); //3 refers to the first 3 arguments (function name, rows of matrix1, column of matrix1) which are not included in the list of elements, k++ means that every time the statement is executed, k is increased by 1 to move to the next argument.
		}

	}
	/* read data for matrix 2 with the size m2 x n2 (rows x columns )*/
	k = 0;
	for(int i = 0; i < m2; ++i)
	{
		for(int j = 0; j < n2; ++j)
		{
			*(*(matrix2 + i) + j) = atoi(argv[3 + m1*n1 + 2 + k++]); //3 is like above, m1*n1 refers to all elements of matrix1, 2 refers to the two dimentions of matrix 2
		}

	}
}

void multipleMatrix(int matrix1[MAXROW][MAXCOL], int m1, int matrix2[MAXROW][MAXCOL], int n2, int resultMatrix[MAXROW][MAXCOL])
{
	for(int i = 0; i < m1; ++i)
	{
		for(int j = 0; j < n2; ++j)
		{
			for (int k = 0; k < m1; ++k)
			{
				*(*(resultMatrix + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
			}
		}
	}
}

void printMatrix(int matrix[MAXROW][MAXCOL], int m, int n)
{
	/* m is the number of row of the input matrix,
	   n is the number of columns of the input matrix */
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(j == 0)
			{
				printf("%d", *(*(matrix + i) + j));
			}
			else
			{
				printf(" %d", *(*(matrix + i) + j));
			}
		}
		printf("\n");
	}
}