#include "iostream"

using namespace std;


float add_matrix(int mat1[3][3], int mat2[3][3], int operation)
{
	float output_matrix[3][3] = {};	
	float current_result = 0;
	
	
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
			if(operation == 1)
			{
				current_result = mat1[i][j] + mat2[i][j];
			}
			
			else if(operation == 2)
			{
				current_result = mat1[i][j] - mat2[i][j];
			}
			
			else if(operation == 3)
			{
				current_result = mat1[i][j] * mat2[i][j];
			}
			
			else if(operation == 4)
			{
				current_result = mat1[i][j] / float(mat2[i][j]);
			}
			output_matrix[i][j] = float(current_result);
		}
	}
	
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
			printf("| %.1f |", output_matrix[i][j]);
		}
		cout << "\n";
	}
	
	cout << "\n";
}

int main()
{
	int matrix1[3][3] = {0, 1, 2, 3, 4, 5, 6, 7, 100};
	
	int matrix2[3][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8};


	add_matrix(matrix1, matrix2, 1); // Operation = 1(Addition)
	add_matrix(matrix1, matrix2, 2); // Operation = 2(Subtraction)
	add_matrix(matrix1, matrix2, 3); // Operation = 3(Multiplication)
	add_matrix(matrix1, matrix2, 4); // Operation = 4(Division)
}