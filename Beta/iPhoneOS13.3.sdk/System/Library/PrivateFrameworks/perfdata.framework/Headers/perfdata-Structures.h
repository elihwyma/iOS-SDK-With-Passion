/*
 Image: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
 */

typedef void (^CDUnknownBlockType)(void);

struct pooled_mean {
    struct sum _field1;
    struct sum _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct running_mean {
    double _field1;
    double _field2;
    unsigned long long _field3;
};

struct sum {
    double _field1;
    double _field2;
};
