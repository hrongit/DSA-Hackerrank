// https://www.hackerrank.com/contests/cse205-day37-24906/challenges/detect-whether-a-linked-list-contains-a-cycle

bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode* cur1 = head;
    SinglyLinkedListNode* cur2 = head;
    int result = 0;
    while (cur1 && cur2)
    {
        cur1 = cur1->next;
        cur2 = cur2->next;
        if (cur2)
        {
            cur2 = cur2->next;
        }
        
        if (cur1 == cur2)
        {
            result = 1;
            break;
        }
    }
    return result;

}