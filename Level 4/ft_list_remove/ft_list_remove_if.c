#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current = *begin_list;
    t_list *prev = NULL;
    t_list *node_free;
    if(begin_list && *begin_list){
        while (current)
        {
            if(cmp(current->data, data_ref) == 0)
            {
                node_free = current;
                if(prev){
                    prev->next = current->next;
                }else{
                    *begin_list = current->next;
                }
                current = current->next;
                free(node_free);
            }else{
                prev = current;
                current = current->next;
            }
        }
    }
}

int cmp(void *n1, void *n2)
{
    return ((*(int *)n1) - (*(int *)n2));
}

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
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
    ft_list_remove_if(&head,node2->data,cmp);
    t_list *tmp = head;
    while (tmp)
    {
        printf("%d",*((int *)tmp->data));
        tmp = tmp->next;
    }
    return 0;
}
