#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& a,int m,vector<int>& b,int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            i--;
        }
        else{
            a[k]=b[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }
}

int main(){


}

