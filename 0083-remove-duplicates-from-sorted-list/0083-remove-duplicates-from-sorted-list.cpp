class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *currPtr = head;
        ListNode *oldPtr = NULL;

        if (currPtr)
        {
            while (currPtr)
            {

                if (oldPtr && oldPtr->val == currPtr->val)
                {
                    ListNode *deletePtr = currPtr;
                    oldPtr->next = currPtr->next;
                    currPtr = currPtr->next;
                    delete deletePtr;
                }
                else
                {
                    oldPtr = currPtr;
                    currPtr = currPtr->next;
                }
            }
        }
        else
        {
            delete currPtr;
            delete oldPtr;
        }
        
        return head;
    }
};