#include<iostream>
using namespace std;




int main(){
    int a,k=0;
    cin>>a;
    long long A[a] ;
    long long B[a] ;
    for (int i = 0; i < a; i++)
    {
        cin>>A[i];
    }
   for (int i = a-1; i >= 0; i--)
    {
        B[k++] = A[i];
        
    }

    // //output the reverse array
    // for(int i=0; i<a; i++){
    //     cout << B[i] <<", ";
    // }


    
    for (int i = 0; i < a; i++)
    {
        if (A[i]!=B[i])
        {
            cout<<"NO";
            return 0;
        }
        
    }
    cout<<"YES";

    
           
    

    return 0;
}
