#include <iostream.h>
#include <iomanip.h>
#include <string.h>
using namespace std;
struct NS
{
	int ngay,thang,nam;
	
};

class KhachHang
{
	protected:
	char hoten[30], cmt[10], hk[50];
	NS ns;
	public:
	void nhap();
	void xuat();
	friend void sapxep(KhachHang a[],int n);
	bool sn()
	{
		if(ns.thang ==12) return true;
		return false;
	}
};
void KhachHang :: nhap()
{
		cin.ignore();
		cout<<"\nNhap ten khach hang: ";
		cin.getline(hoten,30);
		cout<<"\nNhap chung minh thu khach hang: ";
		cin.getline(cmt,10);
		cout<<"\nNhap ho khau khach hang: ";
		cin.getline(hk,50);	
		cout<<"\nNhap ngay";
		cin>>ns.ngay;
		cout<<"\nNhap thang";
		cin>>ns.thang;
		cout<<"\nNhap nam";
		cin>>ns.nam;
}
void KhachHang:: xuat()
{
		cout<<"\nHo ten khach hang la: "<<hoten;
		cout<<"\nChung minh thu khach hang la: "<<cmt;
		cout<<"\nHo khau khach hang la: "<<hk;
		cout<<"\nNgay sinh khach hang la: "<<ns.ngay;
		cout<<"\nThang sinh khach hang la: "<<ns.thang;
		cout<<"\nNam sinh khach hang la: "<<ns.nam;
		cout<<endl;
}
void sapxep(KhachHang a[],int n)
{
	for (int i=0; i<n; i++)
	{
		
		for (int j=i+1; j<n; j++)
		{
			if (a[i].hoten>a[j].hoten)
			{
				 KhachHang tg = a[i];
				a[i]=a[j];
				a[j]=tg;
					
			}
			
		}
	}
}

int main()
{
	int n;
	cout<<"Nhap vao so khach hang: ";
	cin>>n;
	KhachHang a[n];
	
	for (int i=0; i<n; i++)	
	{
		cout<<"\nNhap thong tin khach hang thu "<< i+1 <<" la: "<<endl;
		a[i].nhap();
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<"\nXuat thong tin khach hang thu "<<i+1<<"la: "<<endl;
		a[i].xuat();
	}
	

	cout<<"\nSap xep ho ten theo thu tu tang dan la: ";
	for (int i=0; i<n; i++)
	{
		a[i].xuat();
	}
	
	
	int k=0;
	for (int i=0; i<n; i++)
	{
		if(a[i].sn() == false)k=0;
		else k=1;
		if (k==1)
		break;
	}
	if (k==0)
	{
		cout<<"\nKhong co khach hang nao sinh thang 12: ";
	}
	else
	{
		cout<<"\nThong tin khach hang sinh thang 12 la: ";
		for (int i=0; i<n; i++)
		{
				if(a[i].sn())
				a[i].xuat();
		}
	
		
	}
		
	return 0;
	
}