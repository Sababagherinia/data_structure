#include<iostream>
using namespace std;
int main(){
	//get information of array
	int satr , soton , number_of_array , not_zero=0 ;
	cout<<"tedad satr ha ra vared konid :\n";
	cin>> satr;
	cout<<"tedad soton ha ra vared konid :\n";
	cin>> soton;
	int main_array[satr][soton];
	cout<<"please enter numbers :\n";
	for (int i = 0; i < satr; i++) {
		for (int j = 0; j < soton; j++) {
			cin >> number_of_array;
			main_array[i][j] = number_of_array;
				if(main_array[i][j]!=0)
			         not_zero=not_zero+1;
		}
	}
	
	int sparse_array[not_zero+1][3];
	sparse_array[0][0]=satr;
	sparse_array[0][1]=soton;
	sparse_array[0][2]=not_zero;
	int k=1;
	for(int i=0;i<satr;i++){
		for(int j=0;j<soton;j++){
			if(main_array[i][j]!=0){
				sparse_array[k][0]=i;
				sparse_array[k][1]=j;
			    sparse_array[k][2]=main_array[i][j];
			    k=k+1;
			}
		}
	}

	for(int i=0;i<not_zero+1;i++){
		for(int j=0;j<3;j++){
			cout<<sparse_array[i][j]<<"\t";	
		}
		cout<<"\n";
	}
	
	int ta_sparse_array[not_zero+1][3];
	ta_sparse_array[0][0]=satr;
	ta_sparse_array[0][1]=soton;
	ta_sparse_array[0][2]=not_zero;
	for(int i=1;i<not_zero+1;i++){
		for(int j=0;j<3;j++){
			if(j==0)
			ta_sparse_array[i][j]=sparse_array[i][j+1];
			if(j==1)
			ta_sparse_array[i][j]=sparse_array[i][j-1];
			if(j==2)
			ta_sparse_array[i][j]=sparse_array[i][j];
		}
	}
	int w=0;
	while(w<not_zero){
	int a=0,b=0,c=0;
	for(int i=1;i<not_zero;i++){
		for(int j=0;j<3;j++){
	if(j==0){
		if(ta_sparse_array[i][j]>ta_sparse_array[i+1][j]){
			a=ta_sparse_array[i][j];
			b=ta_sparse_array[i][j+1];
			c=ta_sparse_array[i][j+2];
			ta_sparse_array[i][j]=ta_sparse_array[i+1][j];
			ta_sparse_array[i][j+1]=ta_sparse_array[i+1][j+1];
			ta_sparse_array[i][j+2]=ta_sparse_array[i+1][j+2];
			ta_sparse_array[i+1][j]=a; 
			ta_sparse_array[i+1][j+1]=b;
			ta_sparse_array[i+1][j+2]=c;
		}
	} 
		}
	}
	w=w+1;
}
cout<<"sparse tara nahade :\n";
	for(int i=0;i<not_zero+1;i++){
		for(int j=0;j<3;j++){
			cout<<ta_sparse_array[i][j]<<"\t";	
		}
		cout<<"\n";
	}
}

