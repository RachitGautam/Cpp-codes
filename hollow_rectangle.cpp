#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n; //number of rows
    cin>>m;//number of columns
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || j==1 || i==n || j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl; 
    }
    return 0;
}