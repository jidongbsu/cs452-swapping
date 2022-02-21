#include <stdio.h>
#include <stdlib.h>
#include "lru.h"

int main(int argc, char *argv[])
{
 LRUCache* obj = lRUCacheCreate(2);
 lRUCachePut(obj, 1, 1);
 lRUCachePut(obj, 2, 2);
 int value;
 value=lRUCacheGet(obj, 1);
 printf("what we get from the cache are [%d", value);
 lRUCachePut(obj, 3, 3);
 value = lRUCacheGet(obj, 2);
 printf(" %d", value);
 lRUCachePut(obj, 4, 4);
 value=lRUCacheGet(obj, 1);
 printf(" %d", value);
 value=lRUCacheGet(obj, 3);
 printf(" %d", value);
 value=lRUCacheGet(obj, 4);
 printf(" %d]\n", value);

 lRUCacheFree(obj);
 return 0;
}

/* vim: set ts=4: */
