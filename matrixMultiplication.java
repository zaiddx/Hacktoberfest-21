import java.util.*;
public class matrixMultiplication {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of rows of matrix1: ");
		int nor1=sc.nextInt();
		System.out.println("Enter no. of rows of matrix2: ");
		int nor2=sc.nextInt();
		System.out.println("Enter no. of cols of matrix1: ");
		int noc1=sc.nextInt();
		System.out.println("Enter no. of cols of matrix2: ");
		int noc2=sc.nextInt();
		if(noc1!=nor2){
			System.out.println("Multiplication is not possible");
		}
		else{
			int mat1[][]=new int[nor1][noc1];
			int mat2[][]=new int[nor2][noc2];
			System.out.println("Enter matrix1 elements: ");
			for(int i=0;i<nor1;i++){
				for(int j=0;j<noc1;j++){
					mat1[i][j]=sc.nextInt();
				}
			}
			System.out.println("Enter matrix2 elements: ");
			for(int i=0;i<nor2;i++){
				for(int j=0;j<noc2;j++){
					mat2[i][j]=sc.nextInt();
				}
			}
			int res[][]=new int[nor1][noc2];
			for(int i=0;i<nor1;i++){
				for(int j=0;j<noc2;j++){
					res[i][j]=0;
					for(int k=0;k<noc1;k++){
						res[i][j]+=mat1[i][k]*mat2[k][j];
					}
				}
			}
			System.out.println("Resultant matrix is: ");
			for(int i=0;i<nor1;i++){
				for(int j=0;j<noc2;j++){
					System.out.print(res[i][j]+" ");
				}
				System.out.println();
			}
		} //else
	} //main

} //end


/*
Sample Output:

Enter no. of rows of matrix1: 
3
Enter no. of rows of matrix2: 
3
Enter no. of cols of matrix1: 
3
Enter no. of cols of matrix2: 
3
Enter matrix1 elements: 
1 1 1
1 1 1
1 1 1
Enter matrix2 elements: 
1 1 1
1 1 1
1 1 1
Resultant matrix is: 
3 3 3 
3 3 3 
3 3 3 

*/