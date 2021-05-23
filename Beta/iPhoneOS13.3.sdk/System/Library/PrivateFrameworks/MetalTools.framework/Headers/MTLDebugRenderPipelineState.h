/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState

{
    unsigned long long _maxVertexCount;
    unsigned long long _maxInstanceCount;
    unsigned long long _maxPatchCount;
    unsigned long long _rasterSampleCount;
    unsigned long long _colorPixelFormat[8];
    unsigned long long _depthPixelFormat;
    unsigned long long _stencilPixelFormat;
    unsigned long long _vertexDescriptorLayoutCount;
    struct {
        unsigned long long bufferIndex;
        unsigned long long bufferStride;
    } _vertexDescriptorLayouts[31];
    _Bool _threadgroupSizeMatchesTileSize;
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
}

@property (nonatomic, readonly) MTLRenderPipelineDescriptor *descriptor;
@property (nonatomic, readonly) MTLRenderPipelineReflection *reflection;
@property (nonatomic, readonly) MTLTileRenderPipelineDescriptor *tileDescriptor;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (id)getParameter:(id)arg1;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4;
- (id)outputImageBlockData;
- (_Bool)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1;
- (void)_updateCachedPipelineState:(id)arg1;
- (void)_updateCachedTilePipelineState:(id)arg1;
- (id)_findMasterStruct:(id)arg1 includeImageBlockData:(_Bool)arg2;

@end
