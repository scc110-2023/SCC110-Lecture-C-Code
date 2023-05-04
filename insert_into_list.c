/* Example of an ordered singly linked list insert
   (demo of structs with pointers) */

#include <stdio.h>
#include <stdlib.h>

/* Declare a structure for each 'node', note we need to
   refer to the type we're declaring (self reference) */

typedef struct tagListItem {
    int value;

    struct tagListItem *next;
} TListItem;

/* Insert in numeric ascending order, i.e.:
   Search until we find an item with greater value then
   insert 'between' the other records
   Takes: pointer to head pointer, new value
   Returns: pointer to new record */

TListItem *insert_into_list(TListItem **head, int newValue)
{
    /* prevItem is previous, thisItem will be the one following */
    
    TListItem *prevItem = NULL,
              *thisItem = *head;

    /* While our new value is greater, walk the list */
    
    for (; thisItem && newValue >= thisItem->value;
         thisItem = thisItem->next)
         prevItem = thisItem;

    /* At the insertion point, or run out of list */

    /* Create the new item */

    TListItem *newItem = (TListItem *) malloc(sizeof(TListItem));

    // Chain up next item in the list (or NULL)

    newItem->value = newValue;
    newItem->next = thisItem;

    // Chain up the previous item (or we're the new head)

    if (prevItem)
        // Not the first, make the previous one point to us
        
        prevItem->next = newItem;
    else
        // We're the new head of the list

        *head = newItem;
    
    return newItem;
}

// Iterate through the list, printing each item
// Note: head will be NULL when it reaches the end of the list,
// NULL is 0 which is also FALSE, so the loop exits.

void print_list(TListItem *head)
{
    while (head) {
        printf("Item %p, value = %d\n", head, head->value);
        head = head->next;
    }
}

int main()
{
    TListItem *head = NULL;

    printf("Inserting 3\n");
    insert_into_list(&head, 3);

    printf("Inserting 2\n");
    insert_into_list(&head, 2);
    
    printf("Inserting 1\n");
    insert_into_list(&head, 1);
    
    print_list(head);

    return 0;
}