#include<iostream>
using namespace std;



void swap(int&x,int&y){
    int temp=x;
    x=y;
    y=temp;
}

void selection_sort(long long arr[] ,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
              if (arr[j]<arr[min])
              min=j;
        swap(arr[min],arr[i]);
        
        
    }
    
}


int main(){
    int a;
    cin>>a;
    long long A[a] ;
    for (int i = 0; i < a; i++)
    {
        cin>>A[i];
    }
    selection_sort(A,a);
    
    

 for (int i = 0; i < a; i++)
    {
       cout<<A[i] << " ";
    }    

    return 0;
}
