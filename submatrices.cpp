#include<iostream>
using namespace std;

int main()
{
   int r, c, m1[10][10], m2[10][10], sub[10][10];

   cout<<"Enter the number of rows: ";
   cin>>r;
   cout<<"Enter the number of column : ";
   cin>>c;
   cout << "Enter the elements of first matrix: ";
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j < c;j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "Enter the elements of second matrix: ";
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j<c;j++ ) {
       cin>>m2[i][j];
     }
   }

   cout<<"Output: \n";
   for (int i = 0;i<r;i++ ) {
      for (int j = 0;j<c;j++ ) {
        sub[i][j]=m1[i][j]-m2[i][j];
        cout<<sub[i][j]<<" ";
      } cout<<endl;
   }

}
