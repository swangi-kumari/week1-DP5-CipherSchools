#include <iostream>
#include <vector>
using namespace std;
int first(vector<int> &nums,int start,int end,int target){
if(start> end){
    return -1;
}
else if(start == end){
return (nums[start] == target ? start:-1);
}
else{
    int mid=start+(end-start)/2;
    if(nums[mid]<target){
        return first(nums,mid+1,end,target);
    }
    else if(nums[mid]>target){
       return first(nums,start,mid-1,target);
    }
    else{
        if(mid==0 || (mid>=1 && nums[mid-1]<nums[mid])){
          return mid;
        }
        return first(nums,start,mid-1,target);
    }
}
}
int last(vector<int> &nums,int start,int end,int target){
if(start> end)
    return -1;

else if(start == end)
return (nums[start] == target? start:-1);

else{
    int mid=start+(end-start)/2;
    if(nums[mid]<target)
        return last(nums,mid+1,end,target);

    else if(nums[mid]>target)
        return last(nums,start,mid-1,target);

    else{
        if(mid==nums.size()-1 ||(mid+1 <= nums.size()-1 && nums[mid]<nums[mid+1]))
            return mid;

        return last(nums,mid+1,end,target);
    }
}
}
vector<int> firstAndLast(vector<int> &nums,int target)
{
int f=first(nums,0,nums.size()-1,target);
int l=last(nums,0,nums.size()-1,target);
return {f,l};
}
int main(){
}


