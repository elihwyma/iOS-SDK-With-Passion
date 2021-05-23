/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

typedef void (^CDUnknownBlockType)(void);

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct CGPoint {
    double x;
    double y;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _MRHIDButtonEvent {
    unsigned int _field1;
    unsigned int _field2;
    _Bool _field3;
};

struct _MRHIDTouchEvent {
    union _MRHIDPoint _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned int _field4;
};

struct _MRTextInputTraits {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct {
        long long _field1;
        long long _field2;
    } _field6;
    _Bool _field7;
    _Bool _field8;
    long long _field9[10];
    unsigned long long _field10;
};

typedef struct {
    unsigned int _field1;
    unsigned long long _field2;
} CDStruct_d008d4b8;

union _MRHIDPoint {
    struct {
        float _field1;
        float _field2;
    } _field1;
    float _field2[2];
};
