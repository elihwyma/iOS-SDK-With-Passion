/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPixelBufferPool;

@protocol OS_dispatch_semaphore;

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject

{
    BWPixelBufferPool *_pool;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)dealloc;
- (void)signal;
- (struct __CVBuffer *)newPixelBuffer;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;

@end
