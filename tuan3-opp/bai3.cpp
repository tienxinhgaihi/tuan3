#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class DT
{   private:
	  int a,b,c,d;
	public:
	  DT(int a=0, int b=0, int c=0, int d=0)
	  { this->a=a;
	    this->b=b;
	    this->c=c;
	    this->d=d;
	  }
	  ~DT()
	  {}
	  void nhap()
	  {  cout<<"Nhap a: "; cin>>a;
	     cout<<"Nhap b: "; cin>>b;
	     cout<<"Nhap c: "; cin>>c;
	     cout<<"nhap d: "; cin>>d;
	     cout<<endl;
	  }
	  void in()
	  {  cout<<a<<"x3 + "<<b<<"x2 + "<<c<<"x + "<<d<<endl;
	  }
	  DT operator+(DT &dt)
	  {  DT kq;
	     kq.a=this->a+dt.a;
	     kq.b=this->b+dt.b;
	     kq.c=this->c+dt.c;
	     kq.d=this->d+dt.d;
	     return kq;
	  }
	   DT operator-(DT &dt)
	  {  DT kq;
	     kq.a=this->a-dt.a;
	     kq.b=this->b-dt.b;
	     kq.c=this->c-dt.c;
	     kq.d=this->d-dt.d;
	     return kq;
	  }
};
int main()
{  DT dt,dt1(2,3,2,2), dt2(1,2,1,1);
   dt=dt1+dt2;
   cout<<"Tong 2 da thuc: ";
   dt.in();
    dt=dt1-dt2;
   cout<<"Hieu 2 da thuc: ";
   dt.in();
return 0;
}
