#include<stdio.h>
 void simplemerge(int a[1000],int low,int mid,int high){
    int i=low;
    int k=low;
    int j=mid+1;
    int temp[1000];
    while(i<=mid&&j<=high){
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }else{
    temp[k++]=a[j++];

        }
    }
    while(j<=high){
        temp[k++]=a[j++];

    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    for(i=low;i<=high;i++){
        a[i]=temp[i];
    }

 }
 void mergesort(int a[1000],int low,int high){
    int mid;
    if(low<high){
    mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    simplemerge(a,low,mid,high);
    }
 }

void main(){
    int n,a[1000];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
    
}