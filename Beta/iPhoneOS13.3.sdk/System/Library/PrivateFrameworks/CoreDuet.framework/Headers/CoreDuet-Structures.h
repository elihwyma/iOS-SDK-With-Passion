/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

typedef void (^CDUnknownBlockType)(void);

struct NSArray {
    Class _field1;
};

struct NSMapTable {
    Class _field1;
};

struct _CDPerfEvent {
    double startTime;
    double endTime;
};

struct _cdp_prediction_result {
    int _field1;
    float _field2;
    int _field3;
    int _field4;
};

struct os_activity_scope_state_s {
    unsigned long long opaque[2];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};
