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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         if(list1 == NULL && list2==NULL)
            return list1;
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
            return list1;
    
    
    ListNode* curr1 = list1;
    ListNode* curr2 = list2;
    
    
    ListNode* head;
    if(curr1->val <= curr2->val)
    {
        ListNode* newNode = new ListNode(curr1->val);
        head = newNode;
        curr1 = curr1->next;
        
    }
    else
    {
        ListNode* newNode = new ListNode(curr2->val);
        head = newNode;
        curr2 = curr2->next;
    }
    
    ListNode* temp = head;
    
    while(curr1!=NULL && curr2!=NULL)
    {
        
        if(curr1->val <= curr2->val)
        {
            ListNode* newNode = new ListNode(curr1->val);
            temp -> next = newNode;
            temp = newNode;
            curr1 = curr1->next;
        }
        else
        {
            ListNode* newNode = new ListNode(curr2->val);
            temp -> next = newNode;
            temp = newNode;
            curr2 = curr2->next;
        }
    }
    
    while(curr1!=NULL)
    {
            ListNode* newNode = new ListNode(curr1->val);
            temp -> next = newNode;
            temp = newNode;
            curr1 = curr1->next;
    }
    
    while(curr2!=NULL)
    {
            ListNode* newNode = new ListNode(curr2->val);
            temp -> next = newNode;
            temp = newNode;
            curr2 = curr2->next;
    }
    return head;
    }
};