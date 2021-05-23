/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLIOAccelResource.h>

@interface MTLIOAccelBuffer : MTLIOAccelResource

{
    void *_pointer;
    CDUnknownBlockType _deallocator;
    MTLIOAccelBuffer *_masterBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    unsigned long long _masterBufferOffset;
    unsigned long long _length;
    struct __IOSurface *_iosurface;
}

@property (readonly) unsigned long long length;
@property (nonatomic, readonly) void *contents;
@property (readonly) struct __IOSurface *iosurface;

- (void)dealloc;
- (id)description;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)formattedDescription:(unsigned long long)arg1;
- (struct __CFArray *)copyAnnotations;
- (void)addToGlobalResourceTable;
- (id)initWithDevice:(id)arg1 pointer:(void *)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 sysMemSize:(unsigned long long)arg5 vidMemSize:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8 deallocator:(CDUnknownBlockType)arg9;
- (id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4;
- (id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7;
- (id)initWithDevice:(id)arg1 iosurface:(struct __IOSurface *)arg2 args:(struct IOAccelNewResourceArgs *)arg3 argsSize:(unsigned int)arg4;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeAllDebugMarkers;
- (void)didModifyRange:(struct _NSRange)arg1;

@end
