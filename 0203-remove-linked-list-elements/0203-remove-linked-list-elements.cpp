class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
        {
            return head;
        }

        ListNode *curr = head;
        ListNode *prev;

        while (curr != NULL)
        {
            if (head->val == val)
            {
                head = head->next;
                curr = curr->next;
            }
            else if (curr->val != val)
            {
                prev = curr;
                curr = curr->next;
            }
            else
            {
                prev->next = curr->next;
                curr = curr->next;
            }
        }

        return head;
    }
};