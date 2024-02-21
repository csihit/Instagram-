#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseKGroup(ListNode* head, int k) {
    if (!head || k == 1)
        return head;

    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *prev = dummy, *curr = dummy, *nex = dummy;
    int count = 0;
   
   
    while (curr->next != nullptr) {
        curr = curr->next;
        count++;
    }

    while (count >= k) {
        curr = prev->next;
        nex = curr->next;

        for (int i = 1; i < k; i++) {
            curr->next = nex->next;
            nex->next = prev->next;
            prev->next = nex;
            nex = curr->next;
        }
        prev = curr;
        count -= k;
    }

    return dummy->next;
}


void printLinkedList(ListNode* node) {
    while (node) {
        std::cout << node->val << " -> ";
        node = node->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
   
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original linked list:" << std::endl;
    printLinkedList(head);

   
    int k = 2;
    ListNode* new_head = reverseKGroup(head, k);

    std::cout << "\nLinked list after reversing every " << k << " nodes:" << std::endl;
    printLinkedList(new_head);
    return 0;
}