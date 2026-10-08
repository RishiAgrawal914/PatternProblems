#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch = 'A';

   
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i-1 ; k++)
        {
            /* code */cout<<" ";
            
        }
        
        /* code */for (int j = n-(i-1); j >= 1; j--)
        {
            /* code */cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}