/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
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

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

typedef struct {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
} CDStruct_90f67059;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;
