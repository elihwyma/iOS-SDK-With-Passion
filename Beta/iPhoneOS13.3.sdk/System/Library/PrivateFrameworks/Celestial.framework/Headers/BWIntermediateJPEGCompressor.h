/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface BWIntermediateJPEGCompressor : NSObject

{
    unsigned long long _compressedBufferSize;
    float _compressionQuality;
    float _compressionRate;
    int _jpegSurfacePoolLowWaterBufferCount;
    int _jpegSurfacePoolHighWaterBufferCount;
    _Bool _setupIsComplete;
    struct FigPhotoSurfacePool *_surfacePool;
    struct FigPhotoCompressionSession *_compressionSession;
    struct __CFDictionary *_containerOptions;
    NSMutableDictionary *_qualityControllerParameters;
    struct __CFDictionary *_compressionOptions;
    struct opaqueCMFormatDescription *_jpegFormatDescription;
}

+ (void)initialize;

- (void)dealloc;
- (void)_releaseResources;
- (int)_setupJPEGEncodeResourcesForSourcePixelBuffer:(struct __CVBuffer *)arg1;
- (int)_setupJPEGFormatDescriptionFromSourceBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)_setupJPEGSurfacePool;
- (int)_setupJPEGCompressionSession;
- (int)_setupJPEGContainerOptions;
- (int)_setupJPEGCompressionOptions;
- (id)initWithCompressionQuality:(float)arg1 compressionRate:(float)arg2 jpegSurfacePoolLowWaterBufferCount:(int)arg3 jpegSurfacePoolHighWaterBufferCount:(int)arg4;
- (struct opaqueCMSampleBuffer *)newJPEGSampleBufferFromUncompressedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
