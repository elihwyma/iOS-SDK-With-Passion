/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLIOAccelResource.h>

@class MTLIOAccelBuffer;

@interface MTLIOAccelTexture : MTLIOAccelResource

{
    MTLIOAccelTexture *_parentTexture;
    unsigned long long _parentRelativeLevel;
    unsigned long long _parentRelativeSlice;
    MTLIOAccelBuffer *_buffer;
    unsigned int _swizzle;
    _Bool _writeSwizzleEnabled;
    _Bool _isCompressed;
    MTLIOAccelBuffer *_masterBuffer;
    struct __IOSurface *_iosurface;
    unsigned long long _iosurfacePlane;
    unsigned long long _textureType;
    unsigned long long _pixelFormat;
    unsigned long long _usage;
    unsigned long long _rotation;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _mipmapLevelCount;
    unsigned long long _sampleCount;
    unsigned long long _arrayLength;
    unsigned long long _numFaces;
    _Bool _shareable;
    _Bool _framebufferOnly;
    _Bool _isDrawable;
    _Bool _rootResourceIsSuballocatedBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    unsigned long long _masterBufferOffset;
    unsigned long long _length;
    unsigned long long _bufferOffset;
    unsigned long long _bufferBytesPerRow;
    void *_pointer;
    CDUnknownBlockType _deallocator;
    _Bool _allowGPUOptimizedContents;
}

@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) MTLIOAccelResource *rootResource;
@property (readonly) MTLIOAccelTexture *parentTexture;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) MTLIOAccelBuffer *buffer;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) struct __IOSurface *iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) unsigned long long rotation;
@property (readonly) CDStruct_a06f635e swizzle;
@property (readonly) unsigned int swizzleKey;
@property (readonly) _Bool isCompressed;
@property (readonly) long long compressionFeedback;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long usage;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long depth;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long numFaces;
@property (readonly, getter=isShareable) _Bool shareable;
@property (readonly, getter=isFramebufferOnly) _Bool framebufferOnly;
@property (readonly) _Bool isDrawable;
@property (readonly) _Bool rootResourceIsSuballocatedBuffer;
@property (readonly) _Bool allowGPUOptimizedContents;

+ (void)initNewTextureDataWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7;

- (void)dealloc;
- (id)description;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_caaed6bc)arg3 mipmapLevel:(unsigned long long)arg4;
- (_Bool)isSparse;
- (id)formattedDescription:(unsigned long long)arg1;
- (_Bool)isAliasable;
- (void)makeAliasable;
- (unsigned long long)hazardTrackingMode;
- (id)newSharedTextureHandle;
- (id)initWithTextureInternal:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange)arg4 slices:(struct _NSRange)arg5 swizzle:(CDStruct_a06f635e)arg6 compressedView:(_Bool)arg7;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8 isStrideTexture:(_Bool)arg9;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemPointer:(void *)arg3 sysMemSize:(unsigned long long)arg4 sysMemLength:(unsigned long long)arg5 sysMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8 deallocator:(CDUnknownBlockType)arg9;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 iosurface:(struct __IOSurface *)arg3 plane:(unsigned int)arg4 field:(unsigned int)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange)arg4 slices:(struct _NSRange)arg5;
- (id)initWithCompressedTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 level:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange)arg4 slices:(struct _NSRange)arg5 swizzle:(CDStruct_a06f635e)arg6;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 device:(id)arg5 descriptor:(id)arg6;
- (id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 descriptor:(id)arg6 sysMemRowBytes:(unsigned long long)arg7 vidMemSize:(unsigned long long)arg8 vidMemRowBytes:(unsigned long long)arg9 args:(struct IOAccelNewResourceArgs *)arg10 argsSize:(unsigned int)arg11;
- (void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(CDStruct_da2e99ad)arg3 size:(CDStruct_da2e99ad)arg4 toPixels:(void *)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7;
- (void)copyFromPixels:(const void *)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(CDStruct_da2e99ad)arg6 size:(CDStruct_da2e99ad)arg7;
- (struct __CFArray *)copyAnnotations;

@end
