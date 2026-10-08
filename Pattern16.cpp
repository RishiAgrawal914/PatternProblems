#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        /* code */for (int k = n-i; k >= 1; k--)
        {
            /* code */cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            /* code */cout<<j;
            
            
        }

        if (i>=2)
            {
                /* code */for (int x = i-1; x >= 1; x--)
                {
                    /* code */cout<<x;
                }
                
            }

        cout<<endl;
        
    }
     return 0;
}