//LeetCode 206 – Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev= NULL;
        ListNode* current= head;
        ListNode* next= NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
        
    }
};



/// LeetCode 876 – Middle of Linked List


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
         
         while(fast!= NULL && fast->next!= NULL){
            slow = slow -> next;
            fast = fast -> next -> next;

         }

         return slow;
        
    }
};

//LeetCode 234 – Palindrome Linked List


#include<vector>
class Solution {
    private:
    bool checkpalindrome(vector<int> arr){
        int n= arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }

public:
    bool isPalindrome(ListNode* head) {

        vector<int> arr;
        ListNode* temp = head;
        while(temp!=NULL){
            arr.push_back(temp-> val);
            temp=temp->next;


        }

        return checkpalindrome(arr);
        
    }
};



////.  LeetCode 141 – Linked List Cycle

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL  && fast->next!=NULL){

            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                return true;
            }


        }

        return false;

        
    }
};