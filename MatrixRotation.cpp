#include <iostream>
using namespace std;
#define N 4
void rotate(int a[][N]){

for(int i=0;i<N;i++){
    for(int j=i;j<N;j++){
    swap(a[i][j],a[j][i]);}
}
for(int i=0;i<N;i++)
{
    for(int j=0;j<N/2;j++)
    {
        int temp=a[i][j];
        a[i][j]=a[i][N-1-j];
        a[i][N-1-j]=temp;
    }
}
}
int main()
{
}
