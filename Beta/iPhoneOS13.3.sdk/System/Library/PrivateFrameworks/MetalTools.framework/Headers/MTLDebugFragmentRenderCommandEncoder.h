/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsFragmentRenderCommandEncoder.h>

@class MTLDepthStencilDescriptor, MTLRenderPassDescriptor;

@protocol MTLDepthStencilState, MTLRenderPipelineState;

@interface MTLDebugFragmentRenderCommandEncoder : MTLToolsFragmentRenderCommandEncoder

{
    CDStruct_0f4bf8df _fragmentBuffers[31];
    CDStruct_0f4bf8df _fragmentTextures[128];
    CDStruct_0f4bf8df _fragmentSamplers[16];
    const CDStruct_886a8514 *_limits;
    unsigned int _unknownStoreActions;
    unsigned int _encoderState;
    struct ResourceTrackingDeferredAttachments _deferredAttachments;
    _Bool _hasValidScissorRect;
    float _depthBias;
    float _depthBiasSlopeScale;
    float _depthBiasClamp;
    unsigned int _frontStencilRef;
    unsigned int _backStencilRef;
    float _blendColorRed;
    float _blendColorGreen;
    float _blendColorBlue;
    float _blendColorAlpha;
    MTLRenderPassDescriptor *_descriptor;
    id <MTLRenderPipelineState> _renderPipelineState;
    id <MTLDepthStencilState> _depthStencilState;
    MTLDepthStencilDescriptor *_defaultDepthStencilDescriptor;
    unsigned long long _width;
    unsigned long long _height;
    CDStruct_5f3a0cd7 _scissorRect;
}

@property (copy, nonatomic, readonly) MTLRenderPassDescriptor *descriptor;
@property (nonatomic, readonly) float depthBias;
@property (nonatomic, readonly) float depthBiasSlopeScale;
@property (nonatomic, readonly) float depthBiasClamp;
@property (nonatomic, readonly) CDStruct_5f3a0cd7 scissorRect;
@property (nonatomic, readonly) id <MTLRenderPipelineState> renderPipelineState;
@property (nonatomic, readonly) id <MTLDepthStencilState> depthStencilState;
@property (nonatomic, readonly) MTLDepthStencilDescriptor *defaultDepthStencilDescriptor;
@property (nonatomic, readonly) unsigned int frontStencilRef;
@property (nonatomic, readonly) unsigned int backStencilRef;
@property (nonatomic, readonly) float blendColorRed;
@property (nonatomic, readonly) float blendColorGreen;
@property (nonatomic, readonly) float blendColorBlue;
@property (nonatomic, readonly) float blendColorAlpha;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)endEncoding;
- (void)setRenderPipelineState:(id)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setScissorRect:(CDStruct_5f3a0cd7)arg1;
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned long long)arg2 triangleIndices:(const char *)arg3 triangleCount:(unsigned long long)arg4;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float *)arg3 varyingCountPerVertex:(unsigned long long)arg4 triangleIndices:(const char *)arg5 triangleCount:(unsigned long long)arg6;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float *)arg3 varyingCountPerVertex:(unsigned long long)arg4;
- (void)_setDefaults;
- (id)initWithFragmentRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (void)_validateAllFunctionArguments;
- (void)validateFramebufferWithRenderPipelineState:(id)arg1;
- (void)_resourceTrackingRecordDrawAccesses;
- (void)_resourceTrackingRecordBoundResourceAccesses;
- (void)enumerateFragmentBuffersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFragmentTexturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFragmentSamplersUsingBlock:(CDUnknownBlockType)arg1;

@end
