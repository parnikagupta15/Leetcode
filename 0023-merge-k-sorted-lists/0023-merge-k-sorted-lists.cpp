/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     struct compare{
        bool operator()(ListNode* a, List Node*b){
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue < ListNode* vector<ListNode*>,compare > minheap;
        for(ListNode* i: lists){
            if(lists){
                minheap.push(lists);
            }
        }
        ListNode* dummy = new ListNode(-1);
        ListNodde*temp= dummy;
        while(!minheap.empty()){
            ListNode *smallest= minheap.top();
            minheap.pop();
            temp->next = smallest;
            temp= temp->next;
            i(smallest->next){
                minheap.push
                temp=temp->next;
            }