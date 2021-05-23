/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct CGImageMetadata;

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

struct FigPhotoCodecSessionPool;

struct FigPhotoDecompressionContainer {
    struct __CFRuntimeBase _field1;
    struct FigPhotoDecompressionSession *_field2;
    unsigned char _field3;
    unsigned char _field4;
    struct FigPhotoDecompressionContainerVTable *_field5;
    union {
        struct {
            struct __CFAllocator *_field1;
            struct OpaqueFigPictureCollection *_field2;
            struct OpaqueFigFormatReader *_field3;
            struct {
                unsigned char _field1;
                long long _field2;
                long long _field3;
                struct CGImageMetadata *_field4;
                struct __CFDictionary *_field5;
                int _field6;
            } _field4;
            struct {
                unsigned char _field1;
                struct __CFArray *_field2;
            } _field5;
            struct {
                unsigned char _field1;
                long long _field2;
                long long _field3;
            } _field6;
            CDStruct_5c52f79b _field7;
            CDStruct_5c52f79b _field8;
        } _field1;
        struct {
            struct __CFAllocator *_field1;
            struct OpaqueFigFormatReader *_field2;
            struct __CFDictionary *_field3;
            CDStruct_183601bc *_field4;
            struct __CFArray *_field5;
            struct __CFArray *_field6;
            unsigned char _field7;
        } _field2;
        struct {
            struct __CFAllocator *_field1;
            struct {
                int _field1;
                union {
                    void *_field1;
                    struct __CFURL *_field2;
                    struct __IOSurface *_field3;
                    struct __CFData *_field4;
                    struct OpaqueCMBlockBuffer *_field5;
                } _field2;
                struct OpaqueCMByteStream *_field3;
            } _field2;
            struct {
                unsigned char _field1;
                CDStruct_4bcfbbae _field2;
                int _field3;
                int _field4;
            } _field3;
            struct {
                unsigned char _field1;
                CDStruct_183601bc *_field2;
                unsigned long long _field3;
            } _field4;
            struct {
                unsigned char _field1;
                unsigned char _field2;
                CDStruct_1dee9796 _field3;
                int _field4;
                unsigned char _field5;
                struct {
                    unsigned char _field1;
                    CDStruct_4bcfbbae _field2;
                    int _field3;
                    CDStruct_1dee9796 _field4;
                    int _field5;
                } _field6;
            } _field5;
            struct {
                unsigned char _field1;
                unsigned char _field2;
                CDStruct_1dee9796 _field3;
            } _field6;
            struct {
                unsigned char _field1;
                unsigned char _field2;
                CDStruct_1dee9796 _field3;
                struct __CFData *_field4;
            } _field7;
            CDStruct_9bf39510 _field8;
            CDStruct_9bf39510 _field9;
            struct {
                struct OpaqueFigPhotoJPEGDecodeSession *_field1;
            } _field10;
            struct {
                struct {
                    unsigned char _field1;
                    struct OpaqueFigSimpleMutex *_field2;
                    struct __CFArray *_field3;
                    unsigned long long _field4;
                } _field1;
            } _field11;
        } _field3;
    } _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    CDStruct_ad60da61 _field9;
    CDStruct_ad60da61 _field10;
    int _field11;
};

struct FigPhotoDecompressionContainerVTable;

struct FigPhotoDecompressionSession {
    struct __CFRuntimeBase _field1;
    struct os_unfair_lock_s _field2;
    unsigned long long _field3;
    struct __CFSet *_field4;
    CDStruct_a2624479 _field5;
    CDStruct_a2624479 _field6;
    struct FigPhotoSurfacePool *_field7;
    struct FigPhotoScaleAndRotateSession *_field8;
    struct FigPhotoCodecSessionPool *_field9;
    struct FigPhotoCodecSessionPool *_field10;
    unsigned long long _field11;
    struct OpaqueFigPhotoJPEGDecodeSession *_field12;
};

struct FigPhotoScaleAndRotateSession;

struct FigPhotoSurfacePool;

struct OpaqueCMBlockBuffer;

struct OpaqueCMByteStream;

struct OpaqueFigCDSCALayerInternal {
    id _field1;
    struct CGRect _field2;
    unsigned char _field3;
    void *_field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    id _field8;
};

struct OpaqueFigCDSCALayerOutputNodeContentLayerInternal {
    id _field1;
};

struct OpaqueFigCDSCALayerOutputNodeLayerInternal {
    id _field1;
    id _field2;
    id _field3;
};

struct OpaqueFigFormatReader;

struct OpaqueFigPhotoJPEGDecodeSession;

struct OpaqueFigPictureCollection;

struct OpaqueFigSimpleMutex;

struct OpaqueFigSubtitleBackdropCALayerContentLayerInternal {
    id _field1;
};

struct OpaqueFigSubtitleRenderer;

struct OpaqueFigSubtitleWebVTTCueCALayerInternal {
    id _field1;
    id _field2;
    struct OpaqueFigSubtitleRenderer *_field3;
    struct CGRect _field4;
    struct __CFAttributedString *_field5;
    unsigned char _field6;
};

struct OpaqueFigSubtitleWebVTTRegionCALayerInternal {
    id _field1;
    id _field2;
    struct OpaqueFigSubtitleRenderer *_field3;
    struct CGRect _field4;
    struct __CFDictionary *_field5;
    struct __CFArray *_field6;
    unsigned int _field7;
};

struct __CFAllocator;

struct __CFArray;

struct __CFData;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned long long _field1;
    _Atomic unsigned long long _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
} CDStruct_5c52f79b;

typedef struct {
    unsigned char _field1;
    long long _field2;
} CDStruct_ad60da61;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    long long _field1;
    unsigned long long _field2;
} CDStruct_1dee9796;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    struct __CFArray *_field4;
} CDStruct_a2624479;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    struct __CFData *_field3;
} CDStruct_9bf39510;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;
