/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWPixelBufferPool.h>

@class BWVideoFormat;

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool

{
    BWVideoFormat *_videoFormat;
}

@property (nonatomic, readonly) BWVideoFormat *videoFormat;
@property (nonatomic, readonly) struct __CVPixelBufferPool *cvPixelBufferPool;
@property (nonatomic, readonly) struct __CFDictionary *cvPixelBufferPoolAuxAttributes;

+ (void)initialize;

- (void)dealloc;
- (void)setCapacity:(unsigned long long)arg1;
- (void)flush;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct __CVBuffer *)newPixelBuffer;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4;
- (void)preallocateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)preallocate;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(_Bool)arg4 memoryPool:(id)arg5;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool *)arg1 attributes:(struct __CFDictionary *)arg2;
- (void)prefetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumerateSurfacesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithAttributes:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;

@end
