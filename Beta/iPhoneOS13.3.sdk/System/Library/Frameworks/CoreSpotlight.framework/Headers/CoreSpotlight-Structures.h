/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

typedef void (^CDUnknownBlockType)(void);

struct CSLiveEventDataRename {
    char *_field1;
    int _field2;
};

struct CSLiveEventDataXattr {
    id _field1;
    id _field2;
};

struct CSLiveEventInfo {
    int _field1;
    int _field2;
    char *_field3;
    unsigned long long _field4;
    id _field5;
    int _field6;
    union {
        struct CSLiveEventDataRename _field1;
        struct CSLiveEventDataXattr _field2;
    } _field7;
};

struct CSUnpackInfo {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
    short _field5;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    char *containerBytes;
    struct {
        unsigned int embeddedReference;
        unsigned char type;
    } reference;
} CDStruct_b7fac349;
