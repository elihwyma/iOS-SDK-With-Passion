/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor

{
    struct MTLRenderPipelineDescriptorPrivate _private;
}

@property (nonatomic) unsigned long long postVertexDumpBufferIndex;
@property (nonatomic) _Bool forceSoftwareVertexFetch;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)colorAttachments;
- (unsigned long long)sampleCount;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexFunction:(id)arg1;
- (void)setFragmentFunction:(id)arg1;
- (id)fragmentFunction;
- (id)vertexFunction;
- (id)vertexBuffers;
- (id)vertexDescriptor;
- (unsigned long long)maxTessellationFactor;
- (unsigned long long)maxVertexAmplificationCount;
- (_Bool)supportIndirectCommandBuffers;
- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (id)pipelineLibrary;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setAlphaToCoverageEnabled:(_Bool)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (unsigned long long)rasterSampleCount;
- (unsigned long long)colorSampleCount;
- (void)setColorSampleCount:(unsigned long long)arg1;
- (void)validateWithDevice:(id)arg1;
- (void)setSupportIndirectCommandBuffers:(_Bool)arg1;
- (void)setAlphaToOneEnabled:(_Bool)arg1;
- (void)setRasterizationEnabled:(_Bool)arg1;
- (void)setSampleCoverage:(float)arg1;
- (void)setSampleMask:(unsigned long long)arg1;
- (void)setInputPrimitiveTopology:(unsigned long long)arg1;
- (void)setTessellationPartitionMode:(unsigned long long)arg1;
- (void)setMaxTessellationFactor:(unsigned long long)arg1;
- (void)setTessellationFactorScaleEnabled:(_Bool)arg1;
- (void)setTessellationFactorFormat:(unsigned long long)arg1;
- (void)setTessellationControlPointIndexType:(unsigned long long)arg1;
- (void)setTessellationFactorStepFunction:(unsigned long long)arg1;
- (void)setTessellationOutputWindingOrder:(unsigned long long)arg1;
- (void)setVertexEnabled:(_Bool)arg1;
- (id)fragmentBuffers;
- (_Bool)forceResourceIndex;
- (void)setForceResourceIndex:(_Bool)arg1;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)setOpenGLModeEnabled:(_Bool)arg1;
- (_Bool)openGLModeEnabled;
- (void)setDriverCompilerOptions:(id)arg1;
- (id)driverCompilerOptions;
- (id)newSerializedFragmentDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)tessellationPartitionMode;
- (_Bool)isTessellationFactorScaleEnabled;
- (unsigned long long)tessellationFactorFormat;
- (unsigned long long)tessellationControlPointIndexType;
- (unsigned long long)tessellationFactorStepFunction;
- (unsigned long long)tessellationOutputWindingOrder;
- (unsigned long long)sampleMask;
- (float)sampleCoverage;
- (_Bool)isAlphaToCoverageEnabled;
- (_Bool)isAlphaToOneEnabled;
- (_Bool)isRasterizationEnabled;
- (unsigned long long)vertexAmplificationMode;
- (void)setVertexAmplificationMode:(unsigned long long)arg1;
- (void)setMaxVertexAmplificationCount:(unsigned long long)arg1;
- (_Bool)isVertexEnabled;
- (_Bool)isLogicOperationEnabled;
- (void)setLogicOperationEnabled:(_Bool)arg1;
- (unsigned long long)logicOperation;
- (void)setLogicOperation:(unsigned long long)arg1;
- (_Bool)isAlphaTestEnabled;
- (void)setAlphaTestEnabled:(_Bool)arg1;
- (unsigned long long)alphaTestFunction;
- (void)setAlphaTestFunction:(unsigned long long)arg1;
- (void)setClipDistanceEnableMask:(unsigned char)arg1;
- (unsigned char)clipDistanceEnableMask;
- (_Bool)isPointSmoothEnabled;
- (void)setPointSmoothEnabled:(_Bool)arg1;
- (_Bool)isPointCoordLowerLeft;
- (void)setPointCoordLowerLeft:(_Bool)arg1;
- (_Bool)isPointSizeOutputVS;
- (void)setPointSizeOutputVS:(_Bool)arg1;
- (_Bool)isTwoSideEnabled;
- (void)setTwoSideEnabled:(_Bool)arg1;
- (unsigned int)vertexDepthCompareClampMask;
- (void)setVertexDepthCompareClampMask:(unsigned int)arg1;
- (unsigned int)fragmentDepthCompareClampMask;
- (void)setFragmentDepthCompareClampMask:(unsigned int)arg1;
- (_Bool)sampleCoverageInvert;
- (void)setSampleCoverageInvert:(_Bool)arg1;
- (_Bool)isDepthStencilWriteDisabled;
- (void)setDepthStencilWriteDisabled:(_Bool)arg1;
- (unsigned long long)inputPrimitiveTopology;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (void)attachVertexDescriptor:(id)arg1;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)serializeFragmentData;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id *)arg2;

@end
