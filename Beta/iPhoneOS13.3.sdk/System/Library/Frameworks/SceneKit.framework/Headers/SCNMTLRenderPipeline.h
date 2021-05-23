/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MTLVertexDescriptor, NSArray;

@protocol MTLFunction, MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface SCNMTLRenderPipeline : NSObject

{
    CDStruct_21854d8c _sceneBuffer;
    struct __C3DFXProgram *_program;
    struct __C3DFXPass *_pass;
    CDStruct_8f3d16ac _renderPassDesc;
    unsigned int _buffersUsageMask[2];
    unsigned int _texturesUsageMask[2];
    unsigned int _samplersUsageMask[2];
    id <MTLRenderPipelineState> _state;
    MTLVertexDescriptor *_vertexDescriptor;
    id <MTLFunction> _vertexFunction;
    id <MTLFunction> _fragmentFunction;
    NSArray *_frameBufferBindings;
    NSArray *_nodeBufferBindings;
    NSArray *_lightBufferBindings;
    NSArray *_passBufferBindings;
    NSArray *_shadableBufferBindings;
}

@property (retain, nonatomic) id <MTLRenderPipelineState> state;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (retain, nonatomic) id <MTLFunction> vertexFunction;
@property (retain, nonatomic) id <MTLFunction> fragmentFunction;
@property (copy, nonatomic) NSArray *frameBufferBindings;
@property (copy, nonatomic) NSArray *nodeBufferBindings;
@property (copy, nonatomic) NSArray *passBufferBindings;
@property (copy, nonatomic) NSArray *shadableBufferBindings;
@property (copy, nonatomic) NSArray *lightBufferBindings;
@property (nonatomic, readonly) unsigned int vertexBuffersUsageMask;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)matchesRenderPassDescriptor:(id)arg1;
- (void)_computeUsageForArguments:(id)arg1 function:(id)arg2;

@end
