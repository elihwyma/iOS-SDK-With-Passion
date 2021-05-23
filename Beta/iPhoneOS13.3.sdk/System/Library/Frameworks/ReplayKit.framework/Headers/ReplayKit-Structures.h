/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

typedef void (^CDUnknownBlockType)(void);

struct AudioQueueBuffer;

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

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

typedef struct {
    struct OpaqueAudioQueue *_field1;
    struct AudioStreamBasicDescription _field2;
    struct AudioQueueBuffer *_field3[100];
    struct OpaqueAudioFileID *_field4;
    unsigned int _field5;
    long long _field6;
    int _field7;
} CDStruct_f128470a;
