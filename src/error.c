/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** error
*/

#include "../include/my.h"

void *error_sbrk(size_t size)
{
    if (sbrk(PAGESIZE * (PAGESIZE + 1)) == (void *)-1)
            return (NULL);
}

void *error_handling(t_memo *memo_list, size_t size)
{
    t_memo *block;

    if (sbrk(0) < block + sizeof(t_memo) + size)
        error_sbrk(size);
}