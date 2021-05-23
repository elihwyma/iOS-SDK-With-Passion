/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class MISSING_TYPE;

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct AudioChannelDescription {
    unsigned int _field1;
    unsigned int _field2;
    float _field3[3];
};

struct AudioChannelLayout {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct AudioChannelDescription _field4[1];
};

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

struct AudioValueRange {
    double _field1;
    double _field2;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FigLocalQueueMessage {
    int _field1;
    union {
        struct {
            struct opaqueCMSampleBuffer *_field1;
        } _field1;
        CDStruct_6e2f3782 _field2;
    } _field2;
};

struct FigRemoteOperation {
    int _field1;
    int _field2;
    unsigned long long _field3;
    struct __CFString *_field4;
    union {
        struct {
            struct __CFDictionary *_field1;
            struct __CFDictionary *_field2;
        } _field1;
        struct {
            void *_field1;
            struct __IOSurface *_field2;
            struct __IOSurface *_field3;
        } _field2;
        struct {
            struct opaqueCMSampleBuffer *_field1;
            unsigned long long _field2;
        } _field3;
        struct {
            struct opaqueCMFormatDescription *_field1;
        } _field4;
        CDStruct_6e2f3782 _field5;
    } _field5;
};

struct OpaqueFigSimpleMutex;

struct __CFDictionary;

struct __IOSurface;

struct opaqueCMFormatDescription;

struct opaqueCMSampleBuffer;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    double left;
    double top;
    double right;
    double bottom;
} CDStruct_1edcc8d7;

typedef struct {
    float redGain;
    float greenGain;
    float blueGain;
} CDStruct_d6531dd4;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    int width;
    int height;
} CDStruct_79c71658;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long horizontalSpacing;
    long long verticalSpacing;
} CDStruct_43f4b5b8;

typedef struct {
    long long _field1;
    struct opaqueCMFormatDescription *_field2;
} CDStruct_6e2f3782;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    CDStruct_e83c9415 source;
    CDStruct_e83c9415 target;
} CDStruct_82206317;
