#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void    print_data(void *data){
    printf("%d\n",*((int *)data));
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *)){
    while (begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    t_list node1;
    t_list node2;
    t_list node3;
    node1.data = &a;
    node2.data = &b;
    node3.data = &c;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;
    ft_list_foreach(&node1,print_data);
    return 0;
}
