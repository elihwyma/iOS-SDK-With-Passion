/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

typedef void (^CDUnknownBlockType)(void);

struct CGSize {
    double width;
    double height;
};

struct CloudVodkaAttributes_ {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
};

struct FPSubscriptionInfo_ {
    unsigned long long _field1;
    int _field2;
};

struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID[20];
};

struct VanillaVodkaAttributes_ {
    unsigned int _field1;
    struct sinfEntry_ *_field2;
    unsigned int _field3;
};

struct WHAVodkaAttributes_ {
    unsigned int _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sinfEntry_;

// Ambiguous groups
typedef struct {
    unsigned int dSID:1;
} CDStruct_f07dd4d9;

union FPContentInfo_ {
    unsigned int _field1;
    struct VanillaVodkaAttributes_ _field2;
    struct CloudVodkaAttributes_ _field3;
    struct WHAVodkaAttributes_ _field4;
};
