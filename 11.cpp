#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    int a[100][100],b[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    b[0][0]=a[n-1][0];
    b[0][1]=a[n-1][1];
    b[0][2]=a[n-1][2];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            b[i][j] = a[k][j];
        }
        cout<<endl;
        k++;
    }
    cout<<"output:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
