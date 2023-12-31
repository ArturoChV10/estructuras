#ifndef _LISTAGENERICA_
#define _LISTAGENERICA_ 1

#include "nodo.h"
// #include "colchon.h"
#include <stdlib.h>

using namespace std;

// usar a lista generica
struct metodos
{
    struct nodo *start = nullptr;
    struct nodo *end = nullptr;
    int size = 0;

    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        return size;
    }

    void addToEnd(void *pData)
    {

        struct nodo *newNode = (struct nodo *)malloc(sizeof(struct nodo));
        newNode->data = pData;

        if (size == 0)
        {
            start = newNode;
            end = newNode;
        }
        else
        {
            newNode->previous = end;
            end->next = newNode;
            end = newNode;
        }

        size++;
    }

    void addToBegining(void *pData)
    {

        struct nodo *newNode = (struct nodo *)malloc(sizeof(struct nodo));
        newNode->data = pData;

        if (size == 0)
        {
            start = newNode;
            end = newNode;
        }
        else
        {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    void *removeFirst()
    {

        colchon *result = nullptr;
        struct nodo *cursor = start;

        if (size > 1)
        {
            start->next->previous = nullptr;
            start = start->next;
            cursor->next = nullptr;
            result = cursor->data;
            size--;
        }
        else if (size == 1)
        {
            start = nullptr;
            end = nullptr;
            result = cursor->data;
            size--;
        }

        return result;
    }
};

#endif