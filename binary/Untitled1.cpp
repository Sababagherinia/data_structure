#include <iostream>
using namespace std;
void bnrysearch(float list[],int high,int x)
{
int low = 0,mid;
int location = 0;
while(low<=high && location == 0)
{
	mid = (low+high)/2;
	if(x==list[mid])
	location=mid;
	else if(x<list[mid])
	high=mid-1;
	else
	low=mid+1;
}
cout<<"jost o jo ba movafaghiat payan yaft"<<endl;
if (x==list[mid])
cout<<"addad morede nazar yaft shod\n"<<"shomare khane morede nazar"<<"["<<mid+1<<']'<<endl;
else
cout<<"adad shoma mojod nabood"<<endl;
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
	cout<<"adad mored jostojo ra vared konid\n";
	cin>>y;
bnrysearch(list,n,y);
return 0;
}

