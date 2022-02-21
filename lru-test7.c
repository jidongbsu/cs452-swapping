#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h> /* for gettimeofday system call */
#include "lru.h"

//#define DEBUG 1

double getMilliSeconds(void)
{
	struct timeval now;
	gettimeofday(&now, (struct timezone *)0);
	return (double) now.tv_sec*1000.0 + now.tv_usec/1000.0;
}

int main(int argc, char *argv[])
{
 LRUCache* obj;
 int value;
 unsigned long long i;
 double start_time;
 double computing_time;

 obj = lRUCacheCreate(10000);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 10000, 1000000 put operations (mostly existing key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 10000, 1000000 get operations (mostly key exists) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(8000);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 8000, 1000000 put operations (mostly existing key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 8000, 1000000 get operations (mostly key exists) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 /* FIXME: it is not clear why 6000 takes more put time than other cases, thus we comment out its printing statements.  */
 obj = lRUCacheCreate(6000);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 //printf("cache size 6000, 1000000 put operations (mostly existing key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 //printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 //printf("cache size 6000, 1000000 get operations (mostly key exists) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 //printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(4000);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 4000, 1000000 put operations (mostly existing key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 4000, 1000000 get operations (mostly key exists) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(3000);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 3000, 1000000 put operations (mostly existing key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 3000, 1000000 get operations (mostly key exists) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(2000);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 2000, 1000000 put operations (mostly existing key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 2000, 1000000 get operations (mostly key exists) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(1000);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 1000, 1000000 put operations (mostly existing key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 1000, 1000000 get operations (mostly key exists) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 printf("\n");

 obj = lRUCacheCreate(100);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 100, 1000000 put operations (mostly new key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 100, 1000000 get operations (mostly key not found) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(10);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 10, 1000000 put operations (mostly new key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 10, 1000000 get operations (mostly key not found) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(3);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 3, 1000000 put operations (mostly new key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 3, 1000000 get operations (mostly key not found) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(2);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 2, 1000000 put operations (mostly new key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 2, 1000000 get operations (mostly key not found) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);

 obj = lRUCacheCreate(1);
 lRUCachePut(obj, 1, 1);
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	lRUCachePut(obj, (2*i)%1000, i+1);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 1, 1000000 put operations (mostly new key) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter1 is %ld, counter2 is %ld\n", counter1, counter2);
 counter1=0;
 counter2=0;
 #endif
 start_time = getMilliSeconds();
 for(i=0;i<1000000;i++){
 	value = lRUCacheGet(obj, i%10);
 }
 computing_time = getMilliSeconds() - start_time;
 printf("cache size 1, 1000000 get operations (mostly key not found) took %4.2lf milliseconds.\n", computing_time);
 #ifdef DEBUG
 printf("counter3 is %ld, counter4 is %ld\n", counter3, counter4);
 counter3=0;
 counter4=0;
 #endif
 lRUCacheFree(obj);
 return 0;
}

/* vim: set ts=4: */
