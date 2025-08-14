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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for(auto i: lists){
            while(i){
                values.push_back(i->val);
                i=i->next;
            }
        }
        sort(values.begin(),values.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* temp= dummy;
        for (int j: values){
            temp->next= new ListNode(j);
            temp= temp->next;
        }
        return dummy->next;
}
};