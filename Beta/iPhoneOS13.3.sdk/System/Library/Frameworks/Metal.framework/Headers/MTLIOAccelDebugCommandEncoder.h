/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLDebugCommandEncoder.h>

@class MTLResourceList;

@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder

{
    void *_kernelCommandBufferCurrent;
    void *_kernelCommandBufferEnd;
    struct IOAccelResourceList *_resourceList;
    MTLResourceList *_api_resourceList;
}

- (void)dealloc;
- (void)endEncoding;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithCommandBuffer:(id)arg1;
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)restartDebugPass;
- (void *)reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (unsigned int)addDebugResourceListInfo:(struct IOAccelResourceInfo *)arg1 flag:(unsigned int)arg2;
- (void)debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void)debugResourceBytes:(unsigned int)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void)addAPIResource:(id)arg1;
- (void)kprintfResource:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)IOLogResource:(unsigned int)arg1 length:(unsigned int)arg2;

@end
