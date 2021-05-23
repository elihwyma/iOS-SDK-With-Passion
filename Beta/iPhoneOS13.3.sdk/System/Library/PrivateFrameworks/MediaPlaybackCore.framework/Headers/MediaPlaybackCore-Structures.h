/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

typedef void (^CDUnknownBlockType)(void);

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct CGSize {
    double _field1;
    double _field2;
};

struct DSPSplitComplex {
    float *realp;
    float *imagp;
};

struct MPCAudioSpectrumAnalyzerBand {
    float _field1;
    float _field2;
};

struct MPCModelStorePlaybackItemsRequestAccumulatorResult {
    _Bool _field1;
    _Bool _field2;
};

struct NSMapTable {
    Class _field1;
};

struct _MPCAudioSpectrumAnalyzerBandInternal {
    struct MPCAudioSpectrumAnalyzerBand _field1;
    float _field2;
    float _field3;
    float _field4;
    unsigned long long _field5;
};

struct _MPCModelStorePlaybackItemEligibility {
    _Bool _field1;
    long long _field2;
};

struct _MSVSignedRange {
    long long location;
    long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
} CDStruct_8024420c;

typedef struct {
    double snapshotTime;
    double startTime;
    double endTime;
    double duration;
    double elapsedDuration;
    float rate;
    float defaultRate;
    _Bool isLiveContent;
    _Bool isLoading;
} CDStruct_fce57115;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
} CDStruct_4a9aa5a8;

typedef struct {
    long long reverseCount;
    long long forwardCount;
} CDStruct_339ad95e;

typedef struct {
    CDStruct_198678f7 _field1;
    CDStruct_198678f7 _field2;
} CDStruct_3c1748cc;

// Ambiguous groups
typedef struct {
    unsigned int representativeItemCloudID:1;
    unsigned int storeAdamID:1;
} CDStruct_c223d907;
