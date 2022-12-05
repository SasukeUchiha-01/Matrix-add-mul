#include<iostream>
using namespace std;

int main(){
    int r1, r2, c1, c2, a[100][100], b[100][100], sum[100][100], i, j;
    cout<<"Enter no of rows and column for a: ";
    cin>>r1>>c1;

    cout<<"Enter no of rows and column for b: ";
    cin>>r2>>c2;

    try{
        if(r1 != r2) throw r2;
        else if(c1 != c2) throw c2;
        else{

            cout<<"Enter elements for 1st matrix (a):"<<endl;
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            cout<<"Enter element for a["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
        
    }

    cout<<"Enter elements for 2nd matrix (b):"<<endl;
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            cout<<"Enter element for b["<<i<<"]["<<j<<"]";
            cin>>b[i][j];
        }
        
    }

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    cout<<"Sum of two matrices."<<endl;

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++) {
            cout<<sum[i][j]<<"\t";
            if (j == c1 - 1) {
            cout<<endl;
            }
        }

        }
    }
    catch(int){
        cout<<"Order is invalid";
    }    

    return 0;
    
}