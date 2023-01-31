#include <iostream>
#include <vector>
using namespace std;
int trapping(vector<int> &arr)
{   int ans=0;
    int n=arr.size();
    vector<int> lmax(n),rmax(n);
    lmax[0]=arr[0];
    rmax[n]=arr[n-1];
    for(int i=1;i<n;i++)
        lmax[i]=max(arr[i],lmax[i-1]);
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(arr[i],rmax[i+1]);
    for(int i=1;i<n-1;i++){
        ans+=min(lmax[i],rmax[i])-arr[i];
    }
}
int main()
{

}
