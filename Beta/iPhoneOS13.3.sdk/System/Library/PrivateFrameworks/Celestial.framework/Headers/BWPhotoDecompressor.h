/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPixelBufferPool, NSDictionary, NSMutableDictionary;

@interface BWPhotoDecompressor : NSObject

{
    int _poolSize;
    unsigned int _outputPixelFormat;
    BWPixelBufferPool *_outputPixelBufferPool;
    _Bool _decompressionSetupIsComplete;
    struct __CVBuffer *_decompressionPixelBufferPool;
    struct FigPhotoSurfacePool *_decompressionSurfacePool;
    struct FigPhotoDecompressionSession *_decompressionSession;
    NSDictionary *_containerOptions;
    NSMutableDictionary *_decompressionOptions;
    struct opaqueCMFormatDescription *_uncompressedFormatDescription;
    _Bool _forceAllocationsFromFigSurfacePool;
}

@property (readonly) BWPixelBufferPool *outputPixelBufferPool;

- (void)dealloc;
- (void)_releaseResources;
- (id)initWithPoolSize:(int)arg1 outputPixelFormat:(unsigned int)arg2;
- (struct __CVBuffer *)newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithOutputPixelBufferPool:(id)arg1;
- (struct opaqueCMSampleBuffer *)newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)_initWithPoolSize:(int)arg1 outputPixelFormat:(unsigned int)arg2 outputPixelBufferPool:(id)arg3;
- (struct __CVBuffer *)_newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 pixelBufferTrackingTag:(id)arg2;
- (int)_setupResources;
- (void)_setCVColorProperties:(struct __CVBuffer *)arg1 fromSourceBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (struct opaqueCMSampleBuffer *)_newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 pixelBufferTrackingTag:(id)arg2;
- (int)_setupDecompressionSurfacePool;
- (int)_setupDecompressionSession;
- (int)_setupContainerOptions;
- (int)_setupDecompressionOptions;

@end
