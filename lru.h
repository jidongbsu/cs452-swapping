
struct myListNode {
    int key;
    int value;
    struct myListNode *next;
    struct myListNode *prev;
};

typedef struct {
    int capacity;
    int size;
    struct myListNode *head;
    struct myListNode *tail;
    struct myListNode *hash[10000];
} LRUCache;

LRUCache* lRUCacheCreate(int capacity);

int lRUCacheGet(LRUCache* obj, int key);

void lRUCachePut(LRUCache* obj, int key, int value);

void lRUCacheFree(LRUCache* obj);
