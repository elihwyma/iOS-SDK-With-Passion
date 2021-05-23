/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

typedef void (^CDUnknownBlockType)(void);

struct NSCache {
    Class _field1;
    id _field2;
    void *_field3[5];
    void *_field4;
};

struct NSMutableDictionary {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

typedef struct {
    double width;
    double height;
} CDStruct_8caa76fc;

// Ambiguous groups
typedef struct {
    unsigned int entityType:1;
    unsigned int overwrite:1;
    unsigned int success:1;
} CDStruct_be739ab4;

typedef struct {
    unsigned int billType:1;
    unsigned int status:1;
} CDStruct_c8e9def3;

typedef struct {
    unsigned int entityType:1;
    unsigned int scope:1;
} CDStruct_5a81f70e;

typedef struct {
    unsigned int magnitude:1;
    unsigned int unit:1;
} CDStruct_74078a21;

typedef struct {
    unsigned int nanos:1;
    unsigned int seconds:1;
} CDStruct_85a1ec51;

typedef struct {
    unsigned int all:1;
} CDStruct_eff9c538;

typedef struct {
    unsigned int audioRoute:1;
} CDStruct_fbf2c6cd;

typedef struct {
    unsigned int category:1;
} CDStruct_74e42c4c;

typedef struct {
    unsigned int encodingFormat:1;
} CDStruct_a8e956ad;

typedef struct {
    unsigned int entityType:1;
} CDStruct_032f6352;

typedef struct {
    unsigned int locked:1;
} CDStruct_b1e20226;

typedef struct {
    unsigned int score:1;
} CDStruct_4b1634df;

typedef struct {
    unsigned int searchResultsCount:1;
} CDStruct_a60b8694;

typedef struct {
    unsigned int statusCode:1;
} CDStruct_bcb1eac0;

typedef struct {
    unsigned int success:1;
} CDStruct_f2ecb737;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

typedef struct {
    unsigned int value:1;
} CDStruct_01ef6375;
