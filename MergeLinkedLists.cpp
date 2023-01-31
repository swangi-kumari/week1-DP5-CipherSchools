#include <iostream>
#include <vector>
using namespace std;
class ListNode{
public:
    int val;
    ListNode *next;
    ListNode() : val(0),next(nullptr){}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};
ListNode *merge(ListNode *a,ListNode* b){
if(a==NULL) return b;
else if(b==NULL) return a;
else{
    ListNode *result =NULL;
    if(a->val <= b->val)
    {
        result =a;
        result->next=merge(a->next,b);
    }
    else{
        result=b;
        result->next =merge(a,b->next);
    }
    return result;
}
}
ListNode *mergeK(vector<ListNode*> lists){
if(lists.size()==0) return NULL;
else if(lists.size()==1) return lists[0];
else{
    int last =lists.size()-1;
    while(last>0){
        int i=0,j=lists.size()-1;
        while(i<j){
            lists[i]=merge(lists[i],lists[j]);
            i++;
            j--;
            if(i>=j)
                last=j;
        }
    }
}
}
int main()
{

}
