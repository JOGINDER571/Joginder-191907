//Problem Statement
Write a program to read a matrix of size m*n from the keyboard 
and display the same using Function


Code

#include<iostream>
using namespace std;

//function-declaration
void read_matrix(int r,int c,int matrix[50][50]);
void display_matrix(int r,int c,int matrix[50][50]);
//Take input from the user
void read_matrix(int r,int c,int matrix[50][50])
{
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>matrix[i][j];
		}
	}
	
}
 
// Print the Matrix 
void display_matrix(int r,int c,int matrix[50][50])
{
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int main()
{
	int matrix[50][50];
	int rows,col;
	cout<<"Enter the number of rows:-"<<endl;
	cin>>rows;
	cout<<"Enter the number of column:-"<<endl;
	cin>>col;
	cout<<"Enter the number"<<endl;
	read_matrix(rows,col,matrix);
	cout<<endl<<"Matrix:-"<<endl;
	display_matrix(rows,col,matrix);
}
