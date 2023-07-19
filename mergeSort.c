#include <stdio.h>
#include <stdlib.h>


struct ListNode 
{
    int val;
    struct ListNode *next;
};

void Create(struct ListNode *head, int size)
{
    struct ListNode *temp = head;
    for (int i = 0; i < size; i++)
    {
        struct ListNode *pnode = malloc(sizeof(struct ListNode));
        pnode->val = rand() % 1000 - 500;
        pnode->next = NULL;
        head->next = pnode;
        head = head->next;
    }
     
}


void printLinkedList(struct ListNode * head)
{
    while (head->next != NULL)
    {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("%d", head->val);
}

struct ListNode* getMid(struct ListNode* head) 
{
    struct ListNode* fast = head; 
    struct ListNode* slow = head;
    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    } 
    return slow;
}

struct ListNode* mergeSortList(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode dummy = {0, NULL};
    struct ListNode *curr = &dummy;

    while ((list1 != NULL) && (list2 != NULL))
    {
        if (list1->val < list2->val)
        {
            curr->next = list1;
            list1 = list1->next;
        }
        else
        {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }
    curr->next = list1 != NULL ? list1 : list2;
    return dummy.next;

}

struct ListNode* sortList(struct ListNode* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    //printLinkedList(head);
    struct ListNode* left = head; 
    struct ListNode* mid = getMid(head);
    struct ListNode* right = mid->next;
    mid->next = NULL;

    struct ListNode* left_sorted = sortList(left);
    struct ListNode* right_sorted = sortList(right);

    return mergeSortList(left_sorted, right_sorted);
}

int main()
{
    srand(0);
    struct ListNode head = {0, NULL};
    
    int size;
    printf("Please Type in Array size: ");
    scanf("%d", &size);

    Create(&head, size);
    
    printf("original: ");
    printLinkedList(&head);
    struct ListNode *Sortedhead = sortList(&head);
    
    printf("\n");
    printf("sorted: ");
    printLinkedList(Sortedhead);
    //while (phead != NULL)
    //{
    //    printf("%d ", phead->val);
    //    phead = phead->next;
    //}

    return 0;
}




