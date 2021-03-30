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
	void linearsearch();
	void binarysearch();
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

void linklist::linearsearch()
{
	int x,k=1;
	cout<<"adad morede nazar ra vared konid:\n";
	cin>>x;
	if(head==NULL)
	cout<<"list khali ast\n";
	else
	{
		node *temp;
		temp=head;
		while(temp->data!=x)
		{
			temp=temp->link;
			k++;
		}
		if(temp->data==x)
		cout<<"adad shoma yaft shod["<<x<<"]dar khane ye["<<k<<"] gharar darad\n";
		else
		cout<<"adad["<<x<<"] dar list mojod nist";
	}
}

void linklist::binarysearch()
{
	node *temp;
	int x,k=1;
	cout<<"adad morede nazar ra vared konid:\n";
	cin>>x;
	if(head==NULL)
	cout<<"list khali ast\n";
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			temp=temp->link;
			k++;
		}
		int location=0,mid=k/2;
		node *y;
		temp=head=y;
		while(mid>=1 && location==0)
		{
		for(int i=1;i<mid;i++)
		{
		   temp=temp->link;
	    }
	    if(temp->data==x)
	    {
	    	location=1;
	    }
	    else if(temp->data<x)
	    {
	    	mid=mid/2;
	    	y=temp;
	    }
	    else if(temp->data>x)
	    {
	    	temp=y;
	    }
	}
	}
	if(temp->data==x)
	cout<<"jost o jo ba movafaghiat payan yaft\n";
	else
	cout<<"adad dar list mojod nabod\n";
}
int main()
{
	char b;
linklist a;
cout<<"\t\t\t\t\texit=e\n\n";
while(1==1)
{
    cout<<"1.ezafe kardan yek addad\n2.hazf kardan yek adad\n3.namayesh linklist\n4.linear_search\n5.binary_search\n";
    char t;
    cin>>t;
    if(t=='1')
    {
     a.addx();
    }
    if(t=='2')
    {
     a.delx();
    }
    if(t=='3')
    {
     a.show();
    }
    if(t=='4')
    {
    	a.linearsearch();
    }
    if(t=='5')
    {
    	a.binarysearch();
    }
    if(t=='e')
    break;
}
	return 0;
}
