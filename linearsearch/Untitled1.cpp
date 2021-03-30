#include <iostream>
using namespace std;
//tarif yek tabe baray jostojoy khati
void lsearch(float list[],int n,float x){
	//in loop tak tak khane hay araye ra chek mikonad
	for(int i=0;i<n;i++){
		if(list[i]==x){
		cout<<"addad morede nazar yaft shod"<<endl;
		cout<<"shomare khane adad yaft shode:"<<i<<endl;
		break;
	}
		else if(n==i+1)
		cout<<"adad morede nazar dar araye yaft nashd\n";
	}
	cout<<"search ba movafaghiat payan yaft\n";
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
lsearch(list,n,y);
return 0;
}
