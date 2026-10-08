#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        /* code */for (int j = 1; j <= n; j++)
        {
            /* code */cout<<ch<<" ";
            ch = ch + 1;// implicit type conversion hoga idhar 
        }

        cout<<endl;
    }
    
    
    
    return 0;
}


