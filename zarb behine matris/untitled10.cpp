#include <iostream>
#include <stdlib.h>

using namespace std;

void matrix_chain(int a[],int n) {
	
	int **b = (int **)malloc(n * sizeof(int *));
	for (int i = 0;i < n;i++) {
		b[i] = (int *)malloc(n * sizeof(int));
	}

	int **s = (int **)malloc(n * sizeof(int *));
	for (int i = 0;i < n;i++) {
		s[i] = (int *)malloc(n * sizeof(int));
	}

	int k, l, q,j;

	for (int i = 1;i < n;i++) {
		b[i][i] = 0;
	}
	for (l = 2;l < n;l++) {
		for (int i = 1;i < n - l + 1;i++) {
			j = i + l - 1;
			b[i][j] = INT_MAX;
			for (k = i;k <= j - 1;k++) {
				q = b[i][k] + b[k + 1][j] + a[i - 1] * a[k] * a[j];
				if (q < b[i][j]) {
					b[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}
	
	cout << "adad behine zarb ha :\n" << b[1][n - 1];
}
/*void print(int arr[],int i,int j)
{
	if(i==j)
	cout<<"A"<<i;
	else
	cout<<"(";
	print(arr,i,sizeof(arr[j]));
	print(arr,sizeof(arr[j]+1),j);
	cout<<")";
}*/

int main() {
	int arr[] = { 4,2,6,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	matrix_chain(arr, n);
//	int i=1,j=4;
//	print(arr,i,j);
	return 0;
}


