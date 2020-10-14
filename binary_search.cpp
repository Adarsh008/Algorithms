#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int bs(int arr[],int n,int tar){
    int left= 0,right = n-1;
    while (left<=right)
    {
        int mid = left+(right - left)/2;
        if(arr[mid]== tar){
            return mid;
        }
        else if(arr[mid]>tar){
            right = mid -1;
        }
        else
        {
            left = mid+1;
        }
        
    }
    
return -1;
}

int main(void){
int arr[]={78,79,80};
cout<<bs(arr,3,80);
}
