/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** calloc
*/

#include "../include/my.h"

void *calloc (size_t nmemb, size_t size)
{
    t_memo *mal = malloc(nmemb * size);

    if (!mal || size == 0 || nmemb == 0)
        return NULL;
    else
        return (memset(mal, 0, (size * nmemb)));
}