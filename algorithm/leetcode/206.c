#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

//1 2 3 4

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *node = head, *next, *prev = NULL, *tmp;
    while (node != NULL )
    {
        next = node->next;
        node->next = prev;
        if (next == NULL)
        {
            head = node;
            break;
        }
        prev = next;
        tmp = node;
        head=next;
        node = next->next;
        next->next = tmp;
    }
    return head;
}
/*
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL)
        return head;
    struct ListNode *p=head,*temp=head->next,*q=temp;
    p->next=NULL;
    while(q)
    {
    	q=q->next;
    	temp->next=p;
    	p=temp;
    	temp=q;
	}
	return p;
}
*/
int main()
{
    return 0;
}