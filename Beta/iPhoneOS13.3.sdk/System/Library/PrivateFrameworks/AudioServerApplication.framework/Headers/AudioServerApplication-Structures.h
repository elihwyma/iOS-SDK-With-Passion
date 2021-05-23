/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct AudioBufferList;

struct AudioValueRange {
    double _field1;
    double _field2;
};

struct OpaqueAudioConverter;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    float *_field5;
    struct OpaqueAudioConverter **_field6;
    struct OpaqueAudioConverter **_field7;
    struct AudioBufferList **_field8;
    struct AudioBufferList **_field9;
    struct AudioBufferList **_field10;
    struct AudioBufferList *_field11;
} CDStruct_3e00b629;
