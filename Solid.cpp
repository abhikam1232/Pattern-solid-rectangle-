#include <iostream>
using namespace std;
    int main(){
        // This is a program to print solid rectangle using rows and columns.
         int n;
         cout<<" Enter the number of rows:- ";
         cin>>n;

         int m;
         cout<<" Enter the columns:- ";
         cin>>m;

         for (int i=1; i<=n; i++){
            for(int i=1; i<=m; i++){
                cout<<"*";
            }
            cout<<endl;
         }
         return 0;

    }