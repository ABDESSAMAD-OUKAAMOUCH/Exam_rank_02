#include "ft_list_size.h"
#include <stdlib.h>
#include <string.h>

int	ft_list_size(t_list *begin_list)
{
    int size = 0;
    t_list *tmp = begin_list;
    while (tmp)
    {
        tmp = tmp->next;
        size++;
    }
    return (size);
}

#include<stdio.h>
int main(void)
{
    t_list *node1 = malloc(sizeof(t_list));
    node1->data = strdup("abcd");
    t_list *node2 = malloc(sizeof(t_list));
    node2->data = strdup("efgh");
    node1->next = node2;
    t_list *node3 = malloc(sizeof(t_list));
    node3->data = strdup("aaaa");
    node2->next = node3;
    node3->next = NULL;
    printf("%d",ft_list_size(node1));
    free(node1->data);
    free(node2->data);
    free(node3->data);
    free(node1);
    free(node2);
    free(node3);
    return 0;
}
