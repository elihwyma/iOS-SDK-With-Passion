/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
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

struct AudioUnitMeterClipping {
    float peakValueSinceLastCall;
    unsigned char sawInfinity;
    unsigned char sawNotANumber;
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
    double width;
    double height;
};

struct NSDictionary {
    Class _field1;
};

struct PowerMeter {
    double mSampleRate;
    double mPeakDecay1;
    double mPeakDecay;
    double mDecay1;
    double mDecay;
    int mPrevBlockSize;
    int mPeakHoldCount;
    double mMaxPeak;
    struct AudioUnitMeterClipping mClipping;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

typedef struct {
    double beginTime;
    double endTime;
} CDStruct_73a5d3ca;

// Template types
typedef struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_7584168e;
