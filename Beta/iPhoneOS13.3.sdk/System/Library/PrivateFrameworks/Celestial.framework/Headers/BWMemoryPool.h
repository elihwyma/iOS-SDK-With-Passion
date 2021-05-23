/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface BWMemoryPool : NSObject

{
    unsigned long long _defaultCacheBufferSize;
    unsigned long long _writeCombineCacheBufferSize;
    NSObject<OS_dispatch_queue> *_queue;
    struct __IOSurface *_writeCombineCacheBuffer;
    struct __IOSurface *_defaultCacheBuffer;
}

+ (void)initialize;

- (void)dealloc;
- (void)discardMemory;
- (id)initWithDefaultCacheMemoryPoolSize:(long long)arg1 writeCombineCacheMemoryPoolSize:(long long)arg2;
- (void)ensureMemoryAsync;
- (void)discardMemoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addMemoryPoolToPixelBufferAttributes:(id)arg1;
- (void)_discardMemory;
- (void)_ensureMemoryPool;
- (void)ensureMemorySync;
- (int)addMemoryPoolToPropertiesForCaptureStream:(struct OpaqueFigCaptureStream *)arg1;
- (int)addMemoryPoolToPropertiesForCaptureDevice:(struct OpaqueFigCaptureDevice *)arg1;
- (id)newMTLBufferWithLength:(unsigned long long)arg1 forDevice:(id)arg2;
- (int)removeMemoryPoolFromPropertiesForCaptureDevice:(struct OpaqueFigCaptureDevice *)arg1;

@end
