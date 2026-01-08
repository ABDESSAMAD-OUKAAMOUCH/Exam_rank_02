#ifndef FT_LIST_SIZE
#define FT_LIST_SIZE

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif