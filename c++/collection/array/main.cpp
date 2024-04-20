#include "array.h"

int main()
{
    system("cls");
    int *a=new int[3];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    int k =sequentialSearch(a,3,2);
    cout<<k;
    return 0;
}