/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

typedef void (*CDUnknownFunctionPointerType)(void);

struct CPRecordStore;

struct CalDatabase {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    int _field2;
    struct CPRecordStore *_field3;
    struct CalEventOccurrenceCache *_field4;
    struct CalScheduledTaskCache *_field5;
    struct __CFDictionary *_field6;
    struct __CFDictionary *_field7;
    struct _opaque_pthread_mutex_t _field8;
    unsigned int _field9;
    unsigned int _field10;
    struct __CFArray *_field11;
    struct __CFString *_field12;
    struct __CFArray *_field13;
    int _field14;
    int _field15;
    struct __CFString *_field16;
    struct __CFString *_field17;
    struct __CFString *_field18;
    int _field19;
    CDUnknownBlockType _field20;
    struct _opaque_pthread_mutex_t _field21;
    _Bool _field22;
    struct __CFArray *_field23;
    struct __CFArray *_field24;
    struct __CFArray *_field25;
    id _field26;
    _Bool _field27;
    struct __CFSet *_field28;
    id _field29;
    _Bool _field30;
};

struct CalEventIdsSearchContext {
    struct __CFArray *_field1;
    struct __CFSet *_field2;
    struct __CFSet *_field3;
    _Bool *_field4;
    _Bool *_field5;
    struct CalDatabase *_field6;
};

struct CalEventOccurrenceCache;

struct CalEventOccurrenceSearchContext {
    struct __CFSet *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
    _Bool *_field5;
    _Bool *_field6;
    double _field7;
    double _field8;
    int _field9;
    double _field10;
    unsigned int _field11;
    struct CalEventOccurrenceCache *_field12;
    CDUnknownFunctionPointerType _field13;
    void *_field14;
    int _field15;
    _Bool _field16;
    struct __CFString *_field17;
    double _field18;
    _Bool _field19;
    double _field20;
};

struct CalLocationIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    _Bool *_field3;
    _Bool *_field4;
    struct CalDatabase *_field5;
};

struct CalParticipantIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    _Bool *_field3;
    _Bool *_field4;
    struct CalDatabase *_field5;
};

struct CalScheduledTaskCache;

struct __CFArray;

struct __CFDictionary;

struct __CFSet;

struct __CFString;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    double _field6;
} CDStruct_79f9e052;
