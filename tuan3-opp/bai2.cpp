#include<iostream.h>
#include<iomanip.h>
#include<string.h>
using namespace std;
class GV
{
	private:
		char hoten[30],bc[15],cn[20];
		int t;
		float bl;
	public:

	friend istream& operator>>(istream &is, GV &a)
	{
		cout<<"Nhap vao ho ten giao vien :";
		cin.getline(a.hoten,30);
		cout<<"Nhap vao bang cap giao vien :";
		cin.getline(a.bc,15);
		cout<<"Nhap vao chuyen nganh giao vien :";
		cin.getline(a.cn,20);
		cout<<"Nhap vao tuoi giao vien :";
		cin>>a.t;
		cin.ignore();
		cout<<"Nhap vao bac luong giao vien :";
		cin>>a.bl;
		cin.ignore();
		return is;
	}
	friend ostream& operator<<(ostream &os, GV a)
	{
		cout<<setw(10)<<left<<a.hoten<<"|";
		cout<<setw(10)<<left<<a.bc<<"|";
		cout<<setw(10)<<left<<a.cn<<"|";
		cout<<setw(15)<<left<<a.t<<"|";
		cout<<setw(15)<<left<<a.bl<<"|";
		cout<<setw(15)<<left<<a.lcb()<<"|";
		return os;
	}
	friend bool operator == (GV &a, GV &b)
	{
		return a.bc>b.bc;
	}
	float lcb()
	{
		return bl*610;
	}
};
int main()
{
	int n;
	cout<<"Nhap vao so luong giao vien: ";
	cin>>n;
	cin.ignore();
	GV x[n];
	for(int i=0; i<n;i++)
	{
		cout<<"--------Nhap vao giao vien thu "<<i+1<<":---------"<<endl;
		cin>>x[i];
	}
	cout<<"\n--------Danh Sach Thong Tin giao vien------"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
	cout<<"\n------Danh Sach Giao Vien Xep Theo Bang Cap-------"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
	return 0;
}