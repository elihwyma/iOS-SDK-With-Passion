/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLComputePipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor

{
    struct MTLComputePipelineDescriptorPrivate _private;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setComputeFunction:(id)arg1;
- (_Bool)supportIndirectCommandBuffers;
- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (id)pipelineLibrary;
- (id)buffers;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)validateWithDevice:(id)arg1;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg1;
- (void)setSupportIndirectCommandBuffers:(_Bool)arg1;
- (id)stageInputDescriptor;
- (void)setStageInputDescriptor:(id)arg1;
- (_Bool)forceResourceIndex;
- (void)setForceResourceIndex:(_Bool)arg1;
- (id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)computeFunction;
- (void)setDriverCompilerOptions:(id)arg1;
- (id)driverCompilerOptions;
- (_Bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (id)newSerializedComputeData;

@end
