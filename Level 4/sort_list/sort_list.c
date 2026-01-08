#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int)){
    t_list *i = lst;
    t_list *j;
    int tmp;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (!cmp(i->data,j->data)){
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
            j = j->next;
        }
        i = i->next;
    }
    return lst;
}


int ascending(int a, int b)
{
	return (a <= b);
}

#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = -2;
    int c = 1;
    t_list *node1 = malloc(sizeof(t_list));
    node1->data = &a;
    t_list *node2 = malloc(sizeof(t_list));
    node2->data = &b;
    node1->next = node2;
    t_list *node3 = malloc(sizeof(t_list));
    node3->data = &c;
    node2->next = node3;
    node3->next = NULL;
    t_list *head = node1;
    sort_list(head,ascending);
    t_list *tmp = head;
    while (tmp)
    {
        printf("%d",*(int *)(tmp->data));
        tmp = tmp->next;
    }
    return 0;
}