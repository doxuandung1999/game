#include<iostream>
using namespace std;
void nhapA(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}
void nhapB(int b[] , int n)
{
    for(int j=0;j<n+1;j++)
    {
        cin >> b[j];
    }
}
void sx(int b[] , int n)
{
    for(int i=0;i<n+1;i++)
    {
        for(int j=i+1;j<n+1;j++)
        {
            if(b[j]>b[i])
            {
                int temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }

    }
}
void sx2(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }

    }
}
void xuat(int a[] , int b[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==j&&a[i]!=b[j])
            {
                cout << b[j];
            }
        }
    }
}
int main(){
    int a[100] , b[100] , n;
    cin >> n;
    nhapA(a,n);
    nhapB(b,n);
    sx(b,n);
    sx2(a,n);
    xuat(a,b,n);

}
