/**
 * Your LRUCache struct will be instantiated and called as such:
 * LRUCache* obj = lRUCacheCreate(capacity);
 * int param_1 = lRUCacheGet(obj, key);

 * lRUCachePut(obj, key, value);

 * lRUCacheFree(obj);
*/

#include <stdio.h>
#include <stdlib.h>
#include "lru.h"

int main(int argc, char *argv[])
{
 LRUCache* obj = lRUCacheCreate(2);
 int value;
 lRUCachePut(obj, 2, 1);
 lRUCachePut(obj, 1, 1);
 lRUCachePut(obj, 2, 3);
 lRUCachePut(obj, 4, 1);
 value=lRUCacheGet(obj, 1);
 printf("what we get from the cache is %d\n", value);
 value=lRUCacheGet(obj, 2);
 printf("what we get from the cache is %d\n", value);

 lRUCacheFree(obj);
 return 0;
}

/* vim: set ts=4: */