#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the order: ";
    cin>>m;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Transpose
    // for(int i=0;i<m;i++){
    //         for(int j=i+1;j<m;j++){
    //             //Swapping 
    //             int temp = a[i][j];
    //             a[i][j] = a[j][i];
    //             a[j][i] = temp;  
    //       }
    //     }
    for(int j=0;j<m;j++){
        for(int i=0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // for(int i=0;i<m;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }    
    return 0;
}