/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject

{
    struct OpaqueVTPixelTransferSession *_transferSession;
    _Bool _alwaysUseHardwareForConversion;
    BWPixelBufferPool *_pool;
    BWVideoFormat *_outputFormat;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    int _poolCapacity;
    _Bool _prefetchPool;
}

@property (nonatomic, readonly) BWVideoFormat *outputFormat;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_purgeResources;
- (id)initWithPrefetchPool:(_Bool)arg1;
- (int)updateOutputPixelFormat:(unsigned int)arg1 dimensions:(CDStruct_79c71658)arg2 poolCapacity:(int)arg3 colorSpaceProperties:(int)arg4 alwaysUseHardwareForConversion:(_Bool)arg5;
- (int)convertSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cropRect:(struct CGRect)arg2 outputSampleBuffer:(struct opaqueCMSampleBuffer **)arg3;
- (int)_buildBufferPool;
- (int)_buildTransferSession;
- (int)convertPixelBuffer:(struct __CVBuffer *)arg1 cropRect:(struct CGRect)arg2 allocateOutputFromBufferPool:(_Bool)arg3 outputPixelBuffer:(struct __CVBuffer **)arg4;

@end
