#include <iostream>
using namespace std;
void insert(float list[],int n)
{
	int key=0 ,i=0;
	for(int k=1;k<=n;k++){
	key=list[k];
	i=k;
	while(i>0 && list[i-1]>key)
	{
	list[i]=list[i-1];
	i=i-1;
}
list[i]=key;
}
for(int j=1;j<=n;j++)
cout<<list[j]<<endl;
}
int main()
{
int n;
float x,y;
float * list;
cout<<"meghdar araye ra moshakhas konid\n";
cin>>n;
list =new float[n];
cout<<"adad araye ra vared konid\n";
for(int j=0;j<n;j++){
	cin>>x;
	list[j]=x;
}
/*	cout<<"adad mored jostojo ra vared konid\n";
	cin>>y;*/
insert(list,n);
return 0;
}
