#include<iostream>
using namespace std;
class node
{
	private:
	    int data;
	    node *link;
	    friend class linklist;
};
class linklist{
	private:
	    node *head;
	    node *tail;
	public:
	linklist();
	void addx();
	void delx();
	void show();
	void search();
};

linklist::linklist()
{
	head=NULL;
}
void linklist::addx()
{
	int data1;
	node temp;
	cout<<"enter x:\n";
	cin>>data1;
	if(head==NULL)
	{
		node *temp = new node;
		temp->link = NULL;
		head=temp;
		head->data=data1;
		tail=head;
	}
	else
	{
		node *temp = new node;
		temp->link = NULL;
		tail->link = temp;
		tail = temp;
		tail->data = data1;
	}
}

void linklist::delx()
{
	node* temp;
	node* temp1;
	temp1=temp=head;
	int fail=1,x;
	cout<<"adad morede nazar ra vared konid:\n";
	cin>>x;
	if(head->data==x)
	{
		temp=head;
		head=head->link;
		delete temp;
	}
	else
	{
		while(temp!=tail)
		{
			temp=temp1->link;
			if(temp->data==x)
			{
				if(temp==tail)
				{
				    temp1->link=NULL;
				    delete temp;
				    tail=temp1;
				    fail=0;
				    break;
			    }
			    else
			    {
				    temp1->link=temp->link;
				    delete temp;
				    fail=0;
				    break;
			    }
			}
			temp1=temp1->link;
		}
		if(fail==1)
		{
			cout<<"vorodi shoma dar link list mojod nist\n";
		}
	}
}

void linklist::show()
{
	if(head==NULL)
	cout<<"list khali ast\n";
	else
	{
		node *temp;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->link;
		}
	}
}

void bnrysearch(linklist l,int high,int x)
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
	int x;
	linklist a;
	cout<<"tedad khane haye khod ra vared konid:\n";
	cin>>x;
	for(int i=0;i<=x;x++)
	{
		a.addx();
	}
	cout<<"addad morede jost o jo\n";
	cin>>y;
	
}
