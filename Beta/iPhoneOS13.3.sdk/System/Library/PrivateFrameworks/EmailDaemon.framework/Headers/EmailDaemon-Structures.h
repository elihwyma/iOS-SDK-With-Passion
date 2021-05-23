/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

typedef void (^CDUnknownBlockType)(void);

struct EFAtomicObject {
    _Atomic long long cfObject;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    _Bool *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_20585598;

typedef struct {
    long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_5df41632;

typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int mailboxId:1;
    unsigned int messageId:1;
    unsigned int mailboxType:1;
    unsigned int value:1;
} CDStruct_1b0f2210;

// Ambiguous groups
typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int fromMailboxId:1;
    unsigned int messageId:1;
    unsigned int toMailboxId:1;
    unsigned int fromMailboxType:1;
    unsigned int toMailboxType:1;
} CDStruct_b83e950b;

typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int mailboxId:1;
    unsigned int messageId:1;
    unsigned int mailboxType:1;
} CDStruct_11e5c17e;
