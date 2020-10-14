#include<iostream>
#include <cassert> 
using namespace std;

int partition(int arr[],int l,int r){
    int pivot = arr[r];
    int i = l-1;
    for (int j = l; j < r; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quicksort(int arr[],int l,int r){
    if (l>=r)
    {
        return;
    }
    int p = partition(arr,l,r);
    quicksort(arr,l,p-1);
    quicksort(arr,p+1,r);
}



int main(void){
int a4[] = {3, 1, -1, 0, 2, 5};
quicksort(a4,0,5);
for (int i = 0; i <6; i++)
{
    cout<<a4[i]<<" ";
}

cout<<"success";
}