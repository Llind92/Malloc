/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** fct
*/

#include "../include/my.h"

void *final_allocation(t_memo *memo_list, size_t size)
{
    t_memo *nd = memo_list;

    if (size == 0)
        return (NULL);
    while (nd->next)
        nd = nd->next;
    nd->previous = nd->currentBlock + nd->memoSize;
    error_handling(memo_list, size);
    nd->previous->memoSize = size;
    nd->previous->disponibility = false;
    nd->next = nd->previous;
    nd->previous->currentBlock = nd->previous + sizeof(t_memo);
    return (nd->previous->currentBlock);
}

t_memo *setup_list(t_memo *memo_list, size_t size)
{
    int nbHeap = 0;
    memo_list = sbrk(0);

    while (((PAGESIZE) * ((size / (PAGESIZE) + 1))) >= nbHeap) {
        sbrk(PAGESIZE);
        nbHeap++;
    }
    memo_list->memoSize = size;
    memo_list->currentBlock = memo_list + sizeof(t_memo);
    memo_list->disponibility = false;
    memo_list->next = NULL;
    return (memo_list);
}