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
 LRUCache* obj = lRUCacheCreate(1);
 int value;
 value = lRUCacheGet(obj, 6);
 printf("what we get from the cache is %d\n", value);
 value = lRUCacheGet(obj, 8);
 printf("what we get from the cache is %d\n", value);
 lRUCachePut(obj, 12, 1);
 value = lRUCacheGet(obj, 2);
 printf("what we get from the cache is %d\n", value);
 lRUCachePut(obj, 15, 11);
 lRUCachePut(obj, 5, 2);
 lRUCachePut(obj, 1, 15);
 lRUCachePut(obj, 4, 2);
 value = lRUCacheGet(obj, 5);
 printf("what we get from the cache is %d\n", value);
 lRUCachePut(obj, 15, 15);


 lRUCacheFree(obj);
}

/* vim: set ts=4: */
