#include<iostream.h>
#include<iomanip.h>
#include<string.h>
using namespace std;
void swap(int &xp, int &yp)
{
	int temp= xp;
		xp= yp;
		yp= temp;
}
struct NS
{
	int ngay,thang,nam;
};
class KH
{
	private: 
		char hoten[30], socmt[10], hokhau[20];
		NS ns;
		int tuoi;
	public:

	friend istream& operator>>(istream &is, KH &a)
	{
		cout<<"Nhap ho ten cua khach hang la: ";
		cin.getline(a.hoten,30);
		cout<<"Nhap ngay sinh cua khach hang: ";
		cin>>a.ns.ngay;
		cout<<"Nhap thang sinh cua khach hang: ";
		cin>>a.ns.thang;
		cout<<"Nhap nam sinh cua khach hang: ";
		cin>>a.ns.nam;
		cout<<"Nhap so chung minh thu cua khach hang: ";
		cin.ignore();
		cin.getline(a.socmt,10);
		cout<<"Nhap ho khau khach hang: ";
		cin.getline(a.hokhau,20);
		cout<<"Nhap tuoi cua khach hang: ";
		cin>>a.tuoi;
		cin.ignore();
		return is;
	}
	friend ostream& operator<<(ostream &os , KH a)
	{
		cout<<setw(20)<<left<<a.hoten<<" | ";
		if(a.ns.ngay<10)
		{
			cout<<left<<"0"<<a.ns.ngay<<"/";
		}	
		else 
		{
			cout<<setw(2)<<left<<a.ns.ngay<<"/";
		}
		if(a.ns.thang<10)
		{
			cout<<left<<"0"<<a.ns.thang<<"/";
		}
		else
		{
			cout<<setw(2)<<left<<a.ns.thang<<"/";
		}
		cout<<setw(10)<<left<<a.ns.nam<<"|";
		cout<<setw(15)<<left<<a.socmt<<"|";
		cout<<setw(10)<<left<<a.hokhau<<"|";
		cout<<setw(10)<<left<<a.tuoi<<"|";
		return os;
	}

	char *gethokhau()
	{
		return hokhau;
	}
	friend bool operator < (KH &a, KH &b)
	{
		return a.tuoi<b.tuoi;
	}
};
int main()
{
	int n;
	cout<<"Nhap vao so luong khach hang: ";
	cin>>n;
	cin.ignore();
	KH x[n];
	for(int i=0; i<n;i++)
	{
		cout<<"--------Nhap vao khach hang thu "<<i+1<<":---------"<<endl;
		cin>>x[i];
	}
	cout<<"\n--------Danh Sach Thong Tin Khach Hang------"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
	cout<<"\n-------Danh Sach Khach Hang Co Ho Khau Ha Noi--------"<<endl;
	for( int i = 0; i < n; i++ )
	{
		if( strcmpi(x[i].gethokhau(),"Ha Noi") == 0 )
	
		cout<<x[i]<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(x[i]<x[j])
				swap(x[i],x[j]);
		}
	}
	cout<<"\n------Danh Sach Khac Hang Xep Theo Do Tuoi-------"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
	return 0;
}