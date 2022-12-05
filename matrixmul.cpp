#include<iostream>
using namespace std;

int main(){
    int r1, r2, c1, c2, a[100][100], b[100][100], mul[100][100], i, j,k;
    cout<<"Enter no of rows and column for a: ";
    cin>>r1>>c1;

    cout<<"Enter no of rows and column for b: ";
    cin>>r2>>c2;

    try{
        if(c1 != r2) throw r2;
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
        for (j = 0; j < c2; j++) {
            mul[i][j] = 0;
        }

    
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }

    cout<<"mul of two matrices."<<endl;

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++) {
            cout<<mul[i][j]<<"\t";
            if (j == c2 - 1) {
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