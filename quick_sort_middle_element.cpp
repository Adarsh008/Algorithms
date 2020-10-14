#include<iostream>
using namespace std;

void quicksort(int a[],int i , int j){
    if (i>=j)
    {
        return;
    }
    int left = i, right=j , pivot = a[(i+j)/2];
    while (i<=j)
    {
        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qsort(a, b, left, j);
    qsort(a, b, i, right);
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