/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

typedef void (^CDUnknownBlockType)(void);

struct CGSize {
    double _field1;
    double _field2;
};

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

// Ambiguous groups
typedef struct {
    unsigned int lastKnownResyncID:1;
    unsigned int resyncID:1;
    unsigned int syncID:1;
} CDStruct_02c44088;

typedef struct {
    unsigned int pending:1;
    unsigned int success:1;
} CDStruct_5ee4970e;

typedef struct {
    unsigned int isAvailable:1;
} CDStruct_08d5340b;

typedef struct {
    unsigned int pending:1;
} CDStruct_eab6c78c;

typedef struct {
    unsigned int success:1;
} CDStruct_f2ecb737;
