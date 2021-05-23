/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsDevice.h>

@class NSMutableSet;

@interface MTLDebugDevice : MTLToolsDevice

{
    _Bool _prevResourceTrackingEnabled;
    NSMutableSet *_buffersAlreadyChecksummedInFrame;
    struct MTLSamplerDescriptorHashMap _argumentBufferSamplers;
    _Bool _resourceTrackingEnabled;
    _Bool _resourceTrackingChecksummingEnabled;
    _Bool _resourceTrackingChecksummingForceAll;
    unsigned int _frameNum;
}

@property (nonatomic, readonly) _Bool resourceTrackingEnabled;
@property (nonatomic) unsigned int frameNum;
@property (nonatomic, readonly) _Bool resourceTrackingChecksummingEnabled;
@property (nonatomic, readonly) _Bool resourceTrackingChecksummingForceAll;

+ (_Bool)complainAboutSloppyTextureUsage;

- (void)dealloc;
- (id).cxx_construct;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(_Bool)arg2;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (id)newCommandQueue;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)newDefaultLibrary;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (id)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newSharedTextureWithDescriptor:(id)arg1;
- (id)newSharedTextureWithHandle:(id)arg1;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newEvent;
- (id)newSharedEvent;
- (id)newSharedEventWithHandle:(id)arg1;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)eventSignaled:(id)arg1 value:(unsigned long long)arg2;
- (void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (unsigned int)checksumBuffer:(id)arg1;
- (void)bufferChecksummedInFrame:(id)arg1;
- (id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)validateResourceOptions:(unsigned long long)arg1 isTexture:(_Bool)arg2 isIOSurface:(_Bool)arg3;
- (void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validateMemorylessResource:(id)arg1;
- (void)_resourceTrackingChecksummingEndOfFrame;
- (id)_newSharedEventWithParent:(id)arg1;
- (void)notifySamplerStateDeallocated:(id)arg1;
- (void)resourceTrackingEndOfFrame;
- (_Bool)overrideResourceTrackingEnabled:(_Bool)arg1;
- (_Bool)restoreResourceTrackingEnabled;

@end
