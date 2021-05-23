/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class MTLRenderPipelineDescriptor;

@protocol MTLFunction, MTLRenderPipelineState;

@interface PKMetalShader : NSObject

{
    id <MTLFunction> _vertexFunction;
    id <MTLFunction> _fragmentFunction;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLRenderPipelineState> _pipelineStateWithColorMaskNone;
    id <MTLRenderPipelineState> _msaaPipelineState;
    id <MTLRenderPipelineState> _msaaPipelineStateWithColorMaskNone;
    unsigned long long _stencilPixelFormat;
    long long _blendMode;
    unsigned long long _colorAttachmentIndex;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    unsigned long long _numColorAttachments;
    PKMetalShader *_noBlendModeShader;
    PKMetalShader *_addBlendModeShader;
    PKMetalShader *_subtractBlendModeShader;
    PKMetalShader *_maxBlendModeShader;
    PKMetalShader *_invertBlendModeShader;
    unsigned long long _msaaPipelineStateSampleCount;
    unsigned long long _msaaPipelineStateWithColorMaskNoneSampleCount;
}

@property (nonatomic, readonly) id <MTLRenderPipelineState> pipelineState;

- (id)init;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 blendMode:(long long)arg3 colorAttachmentIndex:(unsigned long long)arg4 sharedPipelineDescriptor:(id)arg5 numColorAttachments:(unsigned long long)arg6;
- (void)createPipelineState;
- (id)pipelineStateDescriptorSampleCount:(unsigned long long)arg1;
- (id)newShaderWithBlendMode:(long long)arg1;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 sharedPipelineDescriptor:(id)arg3 numColorAttachments:(unsigned long long)arg4;
- (id)msaaPipelineStateWithSampleCount:(unsigned long long)arg1;
- (id)pipelineStateWithColorMaskNone;
- (id)msaaPipelineStateWithColorMaskNoneAndSampleCount:(unsigned long long)arg1;
- (id)shaderWithBlendMode:(long long)arg1;

@end
