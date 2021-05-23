/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWNodeOutput, BWPixelBufferPool, BWRamp, BWStats, MISSING_TYPE, NSObject;

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct AVSystemControllerPrivate {
    _Bool _field1;
    _Bool _field2;
    float _field3;
    id _field4;
    struct OpaqueFigSystemController *_field5;
    id _field6;
    id _field7;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
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

struct BWAPSStatistics {
    float stdDataFromAPSForWide;
    float maxDataFromAPSForWide;
    float minDataFromAPSForWide;
    float stdDataFromSphereForWide;
    float maxDataFromSphereForWide;
    float minDataFromSphereForWide;
    float stdDataFromAPSForTele;
    float maxDataFromAPSForTele;
    float minDataFromAPSForTele;
    float stdDataFromSphereForTele;
    float maxDataFromSphereForTele;
    float minDataFromSphereForTele;
    float stdDataFromAccel;
    float maxDataFromAccel;
    float minDataFromAccel;
    float stdDataFromGyro;
    float maxDataFromGyro;
    float minDataFromGyro;
};

struct BWCoreAnalyticsMovieRecordingSphereAFStatistics {
    float accelStandardDeviation;
    float gyroStandardDeviation;
    float sphereMaxTrackErrorWide;
    float sphereMaxTrackErrorTele;
    float sphereStdTrackErrorSumXXWide;
    float sphereStdTrackErrorSumXXTele;
    float afMaxTrackErrorWide;
    float afMaxTrackErrorTele;
    float afStdTrackErrorSumXXWide;
    float afStdTrackErrorSumXXTele;
    float sphereMinDistanceFromEndStopWide;
    float sphereMinDistanceFromEndStopTele;
    float spherePowerWide;
    float spherePowerTele;
    float afPowerWide;
    float afPowerTele;
    unsigned int numberOfSamples;
    unsigned int numberOfSamplesWide;
    unsigned int numberOfSamplesTele;
    unsigned int range_0_90umBinWide;
    unsigned int range_90_110umBinWide;
    unsigned int range_110_130umBinWide;
    unsigned int range_130_150umBinWide;
    unsigned int range_150_175umBinWide;
    unsigned int range_175_infinityBinWide;
    unsigned int range_0_90umBinTele;
    unsigned int range_90_110umBinTele;
    unsigned int range_110_130umBinTele;
    unsigned int range_130_150umBinTele;
    unsigned int range_150_175umBinTele;
    unsigned int range_175_infinityBinTele;
};

struct BWCoreMotionMetadataSampleData {
    unsigned int _field1;
    unsigned int _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    float _field10;
};

struct BWDeferredMetadataCacheEntry {
    CDStruct_1b6d18a9 pts;
    struct __CFDictionary *metadataDict;
    short useCount;
    short age;
};

struct BWFreezeMotionEvaluation {
    _Bool _field1;
    _Bool _field2;
    float _field3;
    _Bool _field4;
    float _field5;
    _Bool _field6;
    float _field7;
};

struct BWPreviewStitcherShiftCorrection {
    struct CGPoint currentValue;
    struct CGPoint updatedValue;
    _Bool valueIsUpdated;
    _Bool lastRegistrationWasValid;
    int registeredFrameCaptureID;
    BWRamp *rampX;
    BWRamp *rampY;
};

struct BWRenderListOptimizationContext {
    short _field1;
    struct BWRenderListRendererNode *_field2;
    struct BWRenderListParameterNode *_field3;
    struct BWRenderListRendererNode *_field4;
    id _field5;
    id _field6;
    short _field7;
    _Bool _field8;
    id _field9;
    _Bool _field10;
    _Bool _field11;
};

struct BWRenderListParameterList {
    struct BWRenderListParameterNode *slh_first;
};

struct BWRenderListParameterNode {
    struct {
        struct BWRenderListParameterNode *_field1;
    } _field1;
    id _field2;
};

struct BWRenderListRendererList {
    struct BWRenderListRendererNode *slh_first;
};

struct BWRenderListRendererNode {
    struct {
        struct BWRenderListRendererNode *_field1;
    } _field1;
    id _field2;
};

struct BWSmartCameraScene {
    _Bool enabled;
    _Bool confident;
    float confidenceFilterRatio;
    float filteredConfidence;
    float confidenceThreshold;
    float confidenceHysteresisValueLag;
    char confidenceHysteresisTemporalLagBeforeConfident;
    char confidenceHysteresisTemporalLagBeforeNotConfident;
    char currentTemporalHysteresis;
    char *name;
};

struct BWStreamOutputStorage {
    int type;
    unsigned int flags;
    _Bool ready;
    _Bool enabled;
    BWNodeOutput *nodeOutput;
    struct opaqueCMSimpleQueue *simpleQueue;
    NSObject *bufferServicingQueue;
    CDUnknownFunctionPointerType bufferServicingQueueCallback;
    struct opaqueCMFormatDescription *cachedFormatDescription;
    int frameCount;
    CDStruct_1b6d18a9 lastEmittedPTS;
    int retainedBufferCount;
    BWPixelBufferPool *internalPixelBufferPool;
    _Bool pixelBufferPoolOwnedByAnotherNode;
    CDStruct_79c71658 outputDimensions;
    struct CGRect cropRect;
    BWStats *ioSurfaceCompressionRatioStats;
    int pixelBufferCompressionType;
    unsigned long long totalCompressedDataSize;
    unsigned long long totalUncompressedDataSize;
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

struct FigCaptureVideoTransform {
    _Bool mirrored;
    int rotationDegrees;
    CDStruct_79c71658 dimensions;
};

struct FigStateMachineStateConfiguration {
    _Bool _field1;
    id _field2;
    id _field3;
    id _field4;
};

struct OpaqueFigSystemController;

struct TimestampedAudioBufferList {
    struct __CFAllocator *allocator;
    long long auRenderCount;
    unsigned int dataBytesCapacity;
    unsigned int numFrames;
    CDStruct_1b6d18a9 pts;
    struct AudioBufferList *abl;
    unsigned int numPrependedSilenceFrames;
};

struct TtTrkCropRoi {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct _CAImageQueueReleasedImageInfo {
    unsigned int _field1;
    double _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    unsigned long long _field6;
    double _field7;
    unsigned long long _field8;
    unsigned long long _field9;
};

struct _EnqueuedBufferContext {
    struct opaqueCMSampleBuffer *_field1;
    unsigned long long _field2;
    id _field3;
    CDStruct_1b6d18a9 _field4;
    struct _CAImageQueueReleasedImageInfo _field5;
    int _field6;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct opaqueCMFormatDescription;

struct opaqueCMSampleBuffer;

struct opaqueCMSimpleQueue;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    id _field1;
    id _field2;
    unsigned int _field3;
    unsigned char _field4;
    unsigned char _field5;
    _Atomic unsigned char _field6;
    _Atomic unsigned char _field7;
} CDStruct_cc69c771;

typedef struct {
    unsigned char isValid;
    unsigned char pyrIndex;
    unsigned int inputWidth;
    unsigned int inputHeight;
    unsigned int inputStartOffsetY;
    unsigned int inputStartOffsetC;
    unsigned short outWidth;
    unsigned short outHeight;
    unsigned short xInitY;
    unsigned short xInitC;
    unsigned short yInitY;
    unsigned short yInitC;
    unsigned short xStepY;
    unsigned short xStepC;
    unsigned short yStepY;
    unsigned short yStepC;
} CDStruct_0822611a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    float _field5;
    double _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    float _field10;
    float _field11;
    float _field12;
    double _field13;
    unsigned int _field14;
    unsigned int _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    int _field19;
    _Bool _field20;
    float _field21;
    int _field22;
    _Bool _field23;
    int _field24;
    int _field25;
    int _field26;
    int _field27;
    float _field28;
    float _field29;
    unsigned int _field30;
    float _field31;
    int _field32;
} CDStruct_252df2d9;

typedef struct {
    unsigned int height;
    unsigned int width;
    unsigned int channels;
    int pixelFormat;
    float scale;
    float bias;
} CDStruct_06462422;

typedef struct {
    unsigned int _field1;
    unsigned int _field2[384];
    unsigned int *_field3;
    unsigned int *_field4;
    unsigned int *_field5;
} CDStruct_26f71572;

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    unsigned int _field4;
    _Bool _field5;
} CDStruct_b3ef6be4;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned short major;
    unsigned short minor;
    unsigned short patch;
} CDStruct_08002bce;

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    float forwardOrders[8];
    float inverseOrders[8];
} CDStruct_42bba296;

typedef struct {
    char *_field1;
    unsigned int _field2;
} CDStruct_d69d7d91;

typedef struct {
    void *data;
    unsigned int height;
    unsigned int width;
    unsigned int rowBytes;
    unsigned int pixelFormat;
} CDStruct_bc80a2e6;

typedef struct {
    void *data;
    void *reserved;
    unsigned long long dim[4];
    unsigned long long stride[4];
    unsigned long long width;
    unsigned long long height;
    unsigned long long channels;
    unsigned long long batch_number;
    unsigned long long sequence_length;
    unsigned long long stride_width;
    unsigned long long stride_height;
    unsigned long long stride_channels;
    unsigned long long stride_batch_number;
    unsigned long long stride_sequence_length;
    int storage_type;
} CDStruct_0a65202a;

typedef struct {
    void *plan;
    int network_index;
} CDStruct_2bc666a5;

typedef struct {
    double w;
    double x;
    double y;
    double z;
} CDStruct_bf7dff04;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

typedef struct {
    double timestamp;
    float x;
    float y;
    float z;
} CDStruct_f31118bd;

typedef struct {
    float x;
    float y;
    float width;
    float height;
} CDStruct_0f55ad9b;

typedef struct {
    float _field1;
    int _field2;
    _Bool _field3;
} CDStruct_45d4b146;

typedef struct {
    float simulatedAperture;
} CDStruct_a89bfe68;

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
    _Bool _field1;
    unsigned long long _field2;
    struct *_field3;
} CDStruct_dbc1e4aa;

typedef struct {
    _Bool _field1;
    double _field2;
    CDStruct_bf7dff04 _field3;
} CDStruct_75c063ac;

typedef struct {
    unsigned int objectId;
    int category;
    CDStruct_0f55ad9b bbox;
    unsigned int confidence;
    unsigned int yaw;
    unsigned int roll;
    int smile;
    int blinkLeft;
    int blinkRight;
    CDStruct_0f55ad9b eyeRectLeft;
    CDStruct_0f55ad9b eyeRectRight;
    unsigned char hasPoseData;
    unsigned char hasEyeData;
    unsigned char hasBlinkData;
    unsigned char hasSmileData;
    int modality;
} CDStruct_30018149;

typedef struct {
    unsigned int objectId;
    int category;
    CDStruct_0f55ad9b bbox;
    unsigned int confidence;
    int modality;
} CDStruct_a63c4314;

typedef struct {
    CDStruct_bf7dff04 _field1;
    struct {
        float _field1;
        float _field2;
        float _field3;
    } _field2;
    struct {
        float _field1;
        float _field2;
        float _field3;
    } _field3;
    struct {
        float _field1;
        float _field2;
        float _field3;
    } _field4;
    int _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    float _field9;
} CDStruct_63cbf74e;

typedef struct {
    CDStruct_0f55ad9b _field1;
    unsigned int _field2;
    unsigned char _field3;
} CDStruct_55a054ef;

typedef struct {
    CDStruct_6e3f967a lastWideSpherePos;
    CDStruct_6e3f967a lastTeleSpherePos;
    CDStruct_6e3f967a currentTeleSpherePos;
    CDStruct_6e3f967a previousTeleSpherePos;
    _Bool supportAverageSpherePositionKey;
} CDStruct_c6494e1c;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
    CDStruct_1b6d18a9 _field3;
    _Bool _field4;
    _Bool _field5;
} CDStruct_56e3bca3;

typedef struct {
    unsigned int objectId;
    unsigned int age;
    unsigned int unmatchedFrameCount;
    int killFlag;
    CDStruct_30018149 object;
} CDStruct_66dcbea3;

typedef struct {
    float crossCorrelationMaximum[2];
    int maxCorrelationShift[2];
    int frameRingBufferCount;
    int frameRingBufferDistance;
    struct CGRect roi;
    _Bool isMotionDetected;
    _Bool valid;
} CDStruct_4d1c11a6;

typedef struct {
    struct {
        unsigned char numModels;
        char codeVersion[20];
        char name[3][20];
        char version[3][20];
        unsigned char rsvd[32];
    } modelInfo;
    unsigned int frameId;
    unsigned int numObjects;
    CDStruct_30018149 objects[4];
} CDStruct_35801271;

// Ambiguous groups
typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDStruct_869f9c67;

typedef struct {
    float redGain;
    float greenGain;
    float blueGain;
} CDStruct_d6531dd4;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
} CDStruct_5c5366e1;
