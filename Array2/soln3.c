#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j]=key;
    }
}

int main(){
    int n=1000;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    insertionSort(arr,n);
    //Best Case
    clock_t start=clock();
    insertionSort(arr,n);
    // clock_t end=clock();
    double ans=(clock()-start)/(double)CLOCKS_PER_SEC;
    printf("%f",ans);
}