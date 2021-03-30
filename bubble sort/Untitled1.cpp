#include <iostream>
using namespace std;
void bubblesort(float list[],int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
		
		if(list[j]<list[j-1])
		{
		t=list[j];
		list[j]=list[j-1];
		list[j-1]=t;
}
	}
}
	for(int j=0;j<n;j++)
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
bubblesort(list,n);
return 0;
}
