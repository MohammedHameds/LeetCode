class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *currPtr = head;

        if (currPtr)
        {
            while (currPtr->next)
            {

                if (currPtr->val == currPtr->next->val)
                {
                    ListNode *deletePtr = currPtr->next;
                    currPtr->next = currPtr->next->next;
                    delete deletePtr;
                }
                else
                {
                    currPtr = currPtr->next;
                }
            }
        }
        else
        {
            delete currPtr;
        }
        return head;
    }
};