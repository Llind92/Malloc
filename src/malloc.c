/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** malloc
*/

#include "../include/my.h"

t_memo *setup_malloc(size_t size)
{
    t_memo *memo_list;
    memo_list = setup_list(memo_list, size);

    if (memo_list == NULL)
        return (NULL);
    return (memo_list->currentBlock);
}

void *malloc(size_t size)
{
    static t_memo *memo_list = NULL;

    if (memo_list == NULL)
        setup_malloc(size);
    else
        return (final_allocation(memo_list, size));
}

void free (void *ptr)
{
    t_memo *block;
    block = (void *)ptr - sizeof(t_memo);

    if (ptr)
        block->disponibility = true;
}