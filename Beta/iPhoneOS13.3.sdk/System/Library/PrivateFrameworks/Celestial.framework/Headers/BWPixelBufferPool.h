/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWMemoryPool, BWVideoFormat, NSDictionary, NSString;

@interface BWPixelBufferPool : NSObject

{
    BWVideoFormat *_videoFormat;
    unsigned long long _capacity;
    NSString *_name;
    _Bool _clientProvidesPool;
    NSDictionary *_additionalPixelBufferAttributes;
    struct os_unfair_lock_s _pixelBufferPoolConfigurationLock;
    struct __CVPixelBufferPool *_pixelBufferPool;
    NSDictionary *_pixelBufferPoolAuxAttributes;
    int _pixelBufferPoolCreateError;
    BWMemoryPool *_memoryPool;
}

@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) unsigned int pixelFormat;
@property (nonatomic, readonly) struct __CVPixelBufferPool *cvPixelBufferPool;
@property (nonatomic, readonly) struct __CFDictionary *cvPixelBufferPoolAuxAttributes;

+ (void)initialize;

- (void)dealloc;
- (void)setCapacity:(unsigned long long)arg1;
- (void)flush;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_flush;
- (struct __CVBuffer *)newPixelBuffer;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4;
- (void)preallocateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)preallocate;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(_Bool)arg4 memoryPool:(id)arg5;
- (int)_ensurePool;
- (struct __CVBuffer *)_newPixelBuffer;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool *)arg1 attributes:(struct __CFDictionary *)arg2;
- (void)prefetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumerateSurfacesUsingBlock:(CDUnknownBlockType)arg1;

@end
