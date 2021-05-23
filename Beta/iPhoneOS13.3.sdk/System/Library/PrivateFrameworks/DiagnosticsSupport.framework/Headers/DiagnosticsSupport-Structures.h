/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct NSMutableArray {
    Class _field1;
};

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_7523a67d;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    int droppedCallCount;
    int droppedWiFiCallCount;
    int droppedVoLTECallCount;
    int placedCallCount;
    int deviceDroppedCallCount;
} CDStruct_a0eae414;
