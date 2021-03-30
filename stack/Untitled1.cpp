#include <iostream>
#include<string>
using namespace std;

string reverse(string e)
{
	string re="";
	for(int i=e.size()-1;i>=0;i--)
	{
		if(e[i]==')')
	    re+="(";
	    else if(e[i]=='(')
	    re+=")";
	    else
	    re+=e[i];
	}
	return re;
}

template <class T>
class stack
{
    private:
        T stck[100];
        int tos;
        public:
            stack();
            T pop();
            void push(T i);
            void in_to_post();
            void in_to_pre();
            void post_to_in();
            void pre_to_in();
            void pre_to_post();
};
template <class T>
stack <T> :: stack()
{
    tos = 0;
}
template <class T>
void stack <T> :: push(T i)
{
    if(tos==100)
    cout<<"stack is full";
    else
    stck[tos] = i;
    tos++;
}
template <class T>
T stack<T> :: pop()
{
    if(tos==0)
    {
        cout<<"stack is empty";
        return 0;
    }
    else
    {
        tos--;
        return stck[tos];
    }
}
template <class T>
void stack <T> ::in_to_post()
{
    stack<char>a;
    string in,out="";
    T p;
    cout<<"ebarat infix khod ra vared konid:\n";
    cin>>in;
    cout<<"ebarat shoma be soorat postfix:\n";
    for(int i=0;i<in.size();i++)
    {
    p = in[i];
    if(p=='(')
    {
    a.push(p);
    }
    else if((p=='*')||(p=='/'))
    {
        if((a.stck[a.tos-1]=='*')||(a.stck[a.tos-1]=='/'))
        {
        
        out+=a.pop();
        a.push(p);
    }
        else
        a.push(p);
    }
    else if((p=='+')||(p=='-'))
    {
        if((a.stck[a.tos-1]=='+')||(a.stck[a.tos-1]=='-')||(a.stck[a.tos-1]=='*')||(a.stck[a.tos-1]=='/'))
        {
        
        out+=a.pop();
        a.push(p);
    }
        else
        a.push(p);
    }
    else if(p==')')
    {
        
    while(a.tos!=0)
	{
    	 if(a.stck[a.tos-1]=='(')
    	 {
         a.pop();
         }
         else    
         out+=a.pop();
       
}
}
    else
    {
        out+=p;
    }
}
cout<<out<<endl;
}

template <class T>
void stack <T> ::in_to_pre()
{
	 stack<char>a;
    string in,out="";
    T p;
    cout<<"ebarat infix khod ra vared konid:\n";
    cin>>in;
    in = reverse(in);
    cout<<"ebarat shoma be soorat prefix:\n";
    for(int i=0;i<in.size();i++)
    {
    p = in[i];
    if(p=='(')
    {
    a.push(p);
    }
    else if((p=='*')||(p=='/'))
    {
        if((a.stck[a.tos-1]=='*')||(a.stck[a.tos-1]=='/'))
        {
        
        out+=a.pop();
        a.push(p);
    }
        else
        a.push(p);
    }
    else if((p=='+')||(p=='-'))
    {
        if((a.stck[a.tos-1]=='+')||(a.stck[a.tos-1]=='-')||(a.stck[a.tos-1]=='*')||(a.stck[a.tos-1]=='/'))
        {
        
        out+=a.pop();
        a.push(p);
    }
        else
        a.push(p);
    }
    else if(p==')')
    {
        
    while(a.tos!=0)
	{
    	 if(a.stck[a.tos-1]=='(')
    	 {
         a.pop();
         }
         else    
         out+=a.pop();
       
}
}
    else
    {
        out+=p;
    }
}
cout<<reverse(out)<<endl;
}


template <class T>
void stack <T> ::post_to_in()
{
	stack<string>a;
    string in;
    string p;
    cout<<"ebarat post khod ra vared konid:\n";
    cin>>in;
    cout<<"ebarat shoma be soorat infix:\n";
    for(int i=0;i<in.size();i++)
	{
	    string c1,c2,c3;
		p = in[i];
		if(p=="+"||p=="-"||p=="*"||p=="/")
		{
			c1=a.pop();
		    c2=a.pop();
			c3='('+c2+p+c1+')';
			a.push(c3);
		}
		else
		a.push(p);
		
		
		
	}
	cout<<a.pop()<<endl;
}

template <class T>
void stack <T> ::pre_to_in()
{
	stack<string>a;
    string in;
    string p;
    cout<<"ebarat pre khod ra vared konid:\n";
    cin>>in;
    cout<<"ebarat shoma be soorat infix:\n";
    for(int i=in.size()-1;i>=0;i--)
	{
	    string c1,c2,c3;
		p = in[i];
		if(p=="+"||p=="-"||p=="*"||p=="/")
		{
			c1=a.pop();
		    c2=a.pop();
			c3='('+c1+p+c2+')';
			a.push(c3);
		}
		else
		a.push(p);
		
		
		
	}
	cout<<a.pop()<<endl;
}

int main()
{
stack<char>stk ;
char s1,s2;
while(0==0)
{
		cout<<"\t\t\t\tTABDIL SOORAT EBARAT HAI MOKHTALEF BE HAM DIGAR \n\n";
		cout<<"\t\t\t\t\t\tm:menu"<<"\te:exit\n";
	cout<<"==>";
cin>>s1;
if(s1=='m')
do
{
	system("CLS");
	cout<<"0.exit\n";
	cout<<"1.infix to postfix\n";
	cout<<"2.infix to prefix\n";
	cout<<"3.postfix to infix\n";
	cout<<"4.prefix to infix\n";
	cout<<"lotfan addad dastor morede nazar ra vared konid:\n";
//	char s2;
	cin>>s2;
	system("CLS");
	if(s2=='0')
	break;
	if(s2=='1')
	stk.in_to_post();
	else if(s2=='2')
	stk.in_to_pre();
	else if(s2=='3')
	stk.post_to_in();
	else if(s2=='4')
	stk.pre_to_in();
	else
	cout<<"voroodi na motabar\n";
}while(s2!=0);
else if(s1=='e')
break;
else
cout<<"voroodi na motabar\n";
}
return 0;
}
