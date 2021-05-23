/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class _MTLDevice;

@protocol MTLArgumentEncoder, MTLBuffer, OS_dispatch_queue;

@interface _MTLUtilityBuffer : NSObject

{
    _MTLDevice *_device;
    id <MTLBuffer> _utilArgumentBuffer;
    id <MTLArgumentEncoder> _utilArgumentEncoder;
    struct _MTLUtilityBufferResourceTable *_resourceTable;
    NSObject<OS_dispatch_queue> *_utilityQueue;
}

- (void)dealloc;
- (id)utilityBufferForComputeCommandEncoder:(id)arg1;
- (id)utilityBufferForRenderCommandEncoder:(id)arg1;
- (void)addBufferToGlobalResourceTable:(id)arg1;
- (void)addTextureToGlobalResourceTable:(id)arg1;
- (void)addSamplerStateToGlobalResourceTable:(id)arg1;
- (void)addComputePipelineStateToGlobalResourceTable:(id)arg1;
- (void)addRenderPipelineStateToGlobalResourceTable:(id)arg1;
- (void)addIndirectCommandBufferToGlobalResourceTable:(id)arg1;
- (void)removeResourceFromGlobalResourceTable:(unsigned long long)arg1 resourceType:(unsigned long long)arg2;
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long *)arg2 indexCount:(unsigned long long)arg3;
- (_Bool)createArgumentBufferWithLayout:(id)arg1 type:(id)arg2;
- (void)encodeBuffer:(id)arg1 atResourceIndex:(unsigned long long)arg2;
- (void)encodeTexture:(id)arg1 atResourceIndex:(unsigned long long)arg2;
- (void)encodeSampler:(id)arg1 atResourceIndex:(unsigned long long)arg2;
- (void)encodeComputePipeline:(id)arg1 atResourceIndex:(unsigned long long)arg2;
- (void)encodeRenderPipeline:(id)arg1 atResourceIndex:(unsigned long long)arg2;
- (void)encodeIndirectCommandBuffer:(id)arg1 atResourceIndex:(unsigned long long)arg2;
- (id)initWithLayout:(id)arg1 type:(id)arg2 device:(id)arg3;
- (unsigned long long)reserveNextResourceIndexForType:(unsigned long long)arg1;

@end
