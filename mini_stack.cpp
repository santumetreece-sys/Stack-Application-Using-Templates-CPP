#include<iostream>
using namespace std;
template <class type>
void sub_menu(type &);
#define MAX_SIZE 5
template <class type>
class Stack
{
	type a[MAX_SIZE];
	int index=-1;
	public:
	Stack(){
		//index=-1;
	}
	~Stack(){}
	template <class t1>
		friend void push(t1 &);
	template <class t1>
		friend void pop(t1 &);
	template <class t1>
		friend void display(t1 &);
	friend int main();

};
int main()
{
	int count=0;
	while(1){
		int op;
		cout<<"main menu"<<endl;
		cout<<"1. Integer Stack 2. Character Stack 3. Float Stack 4. Double Stack 5. String Stack 6. Exit \nEnter your choice:  ";
		cin>>op;
		switch(op){
			case 1:{
				       static Stack<int> i;
				       static int f;
				       if(f==1)
				       {
l:
					       cout<<"1. Continue with old stack 2. Create new stack \nEnter your choice:";
					       cin>>op;
					       if(op==2)			
						       i=Stack<int>();			
					       //i.index=-1;
					       else if(op!=1){
						       cout<<"wrong choice"<<endl;
						       goto l;
					       }
				       }
				       sub_menu(i);
				       f=1;
				       break;
			       }

			case 2:{static Stack<char> c;
				       static int f;
				       if(f==1)
				       {
c:
					       cout<<"1. Continue with old stack 2. Create new stack \nEnter your choice:";
					       cin>>op;
					       if(op==2)			
						       c=Stack<char>();			
					       //c.index=-1;
					       else if(op!=1){
						       cout<<"wrong choice"<<endl;
						       goto c;
					       }
				       }
				       f=1;
				       sub_menu(c);break;
			       }

			case 3:{static Stack<float> f;
				       static int flag;
				       if(flag==1)
				       {
f:
					       cout<<"1. Continue with old stack 2. Create new stack \nEnter your choice:";
					       cin>>op;
					       if(op==2)			
						       f=Stack<float>();			
					       //f.index=-1;
					       else if(op!=1){
						       cout<<"wrong choice"<<endl;
						       goto f;
					       }
				       }
				       flag=1;
				       sub_menu(f);break;
			       }
			case 4:{static Stack<double> d;
				       static int flag;
				       if(flag==1)
				       {
d:
					       cout<<"1. Continue with old stack 2. Create new stack \nEnter your choice:";
					       cin>>op;
					       if(op==2)			
						       d=Stack<double>();			
					       //d.index=-1;
					       else if(op!=1){
						       cout<<"wrong choice"<<endl;
						       goto d;
					       }
				       }
				       flag=1;
				       sub_menu(d);break;
			       }
			case 5:{static Stack<char[20]> s;
				       static int flag;
				       if(flag==1)
				       {
s:
					       cout<<"1. Continue with old stack 2. Create new stack \nEnter your choice:";
					       cin>>op;
					       if(op==2)			
						       s=Stack<char[20]>();			
					       //s.index=-1;
					       else if(op!=1){
						       cout<<"wrong choice"<<endl;
						       goto s;
					       }
				       }
				       flag=1;
				       sub_menu(s);break;
			       }		
			case 6:exit(0);
			default:cout<<"!WRONG CHOICE you have "<<2-count<<" attempt"<<endl;
				++count;                       
				if(count==3){
					cout<<"SORRY YOU ARE 3 ATTEMPT IS OVER "<<endl;
					return 0;}

		}
	}
}	
	template <class type>
void sub_menu(type &t)
{
	int op;
	while(1){
		cout<<"sub menu"<<endl;
		cout<<"1. Push 2. Pop 3. Display Stack 4. Main Menu \nEnter your choice: ";
		cin>>op;
		int flag=0;
		switch(op){
			case 1:push(t);break;
			case 2:pop(t);break;
			case 3:display(t);break;
			case 4:return;
			default:cout<<"!WRONG CHOICE"<<endl;
		}
	}
}
	template <class t1>
void pop (t1 &t)
{
	if(t.index<=-1){
		cout<<"stack is underflow"<<endl;
		return;
	}
	t.index--;
}
	template <class t1>
void display(t1 &t)
{
	if(t.index<=-1){
		cout<<"stack is empty"<<endl;
		return;
	}
	for(int i=0;i<=t.index;i++)
		cout<<" "<<t.a[i];
	cout<<endl;
}
	template <class t1>
void push(t1 &t)
{
	if(t.index>=MAX_SIZE-1){
		cout<<"stack is overflow"<<endl;
		return;
	}
	t.index++;
	cout<<"enter the data"<<endl;
	cin>>t.a[t.index];
	cout<<"the stored value"<<t.a[t.index]<<endl;
}
