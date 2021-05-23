/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLCommandQueue.h>

@class MTLIOAccelDevice;

@protocol MTLDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue

{
    struct __IOAccelCommandQueue *_commandQueue;
    MTLIOAccelDevice<MTLDevice> *_device;
    unsigned long long _priority;
    unsigned long long _backgroundPriority;
}

@property (readonly) id <MTLDevice> device;

- (void)dealloc;
- (void)setLabel:(id)arg1;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (_Bool)setGPUPriority:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (void)setCompletionQueue:(id)arg1;
- (unsigned long long)getGPUPriority;
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (unsigned long long)getBackgroundGPUPriority;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)_setGPUPriority:(unsigned long long)arg1 backgroundPriority:(unsigned long long)arg2;
- (void)submitCommandBuffers:(id *)arg1 count:(unsigned long long)arg2;

@end
