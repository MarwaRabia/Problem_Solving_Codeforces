#include<iostream>
using namespace std;




int main(){
    int a,b;
    cin>>a;
    long long A[a] ;
    for (int i = 0; i < a; i++)
    {
        cin>>A[i];
        if (A[i]<0)
          A[i]=2;
        else if (A[i]>0)
           A[i]=1;
    }

   for (int i = 0; i < a; i++)
    {
        cout<<A[i]<<" ";
    }
    

    return 0;
}
