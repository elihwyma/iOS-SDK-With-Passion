/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

typedef void (^CDUnknownBlockType)(void);

struct NSHashTable {
    Class _field1;
};

struct NSMapTable {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSObject {
    Class _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};
