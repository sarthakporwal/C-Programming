#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows of 1st matrix: ";
    cin>>m;
    cout<<"Enter no. of columns of 1st matrix: ";
    cin>>n;
    int p,q;
    cout<<"Enter no. of rows of 2nd matrix: ";
    cin>>p;
    cout<<"Enter no. of columns of 2nd matrix: ";
    cin>>q;
    if(n==p){
        int a[m][n], b[p][q], res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The given 2 matrices cannot be multiplied";
    }
    return 0;
}