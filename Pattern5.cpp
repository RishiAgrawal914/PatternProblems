#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        /* code */for (int j = 1; j <= n; j++)
        {
            /* code */cout<<a<<" ";
            a = a + 1;
        }

        cout<<endl;
    }
    
    
    
    return 0;
}


