#ifndef SORT_LIST
#define SORT_LIST
typedef struct    s_list
{
    struct s_list *next;
    int     data;
}                 t_list;
#endif