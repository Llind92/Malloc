/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** realloc
*/

#include "../include/my.h"

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
    return (realloc(ptr, nmemb * size));
}

void *realloc(void *ptr, size_t size)
{
    t_memo *alo;
    alo = malloc(size + sizeof(ptr));

    if (ptr == NULL)
        alo = malloc(size);
    if (ptr && size == 0)
        free(ptr);
    memcpy(alo, ptr, strlen(ptr));
    return (alo);
}