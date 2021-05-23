/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLHeap.h>

@class MTLIOAccelDevice, MTLIOAccelResource, NSString;

@protocol MTLDevice;

@interface MTLIOAccelHeap : _MTLHeap

{
    MTLIOAccelResource *_resource;
    MTLIOAccelDevice<MTLDevice> *_device;
    struct MTLRangeAllocator _allocator;
    struct _opaque_pthread_mutex_t _mutex;
    unsigned long long _size;
}

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) long long type;

- (void)dealloc;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)deallocHeapSubResource;
- (void)unpinMemoryAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(struct IOAccelNewResourceArgs *)arg4 argsSize:(unsigned int)arg5 desc:(id)arg6;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(struct IOAccelNewResourceArgs *)arg4 argsSize:(unsigned int)arg5;
- (id)newSubResourceWithLength:(unsigned long long)arg1 alignment:(unsigned long long)arg2 options:(unsigned long long)arg3 offset:(unsigned long long *)arg4;
- (id)newSubResourceAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 alignment:(unsigned long long)arg3 options:(unsigned long long)arg4;

@end
