/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/MTLSpline.framework/MTLSpline
 */

#import <NSObject.h>

@class MTKView, NSMutableArray;

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLLibrary, MTLRenderPipelineState;

@interface MTLSplineRenderer : NSObject

{
    float _edgeFactor;
    float _insideFactor;
    MTKView *_view;
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _computeTessellationFactorsPipeline;
    id <MTLRenderPipelineState> _renderPostTessellationPipelineState;
    NSMutableArray *_dataCollection;
    unsigned long long _triangleFillMode;
    CDStruct_14d5dc5e _projectionMatrix;
}

@property (retain) NSMutableArray *dataCollection;
@property CDStruct_14d5dc5e projectionMatrix;
@property unsigned long long triangleFillMode;

- (id)init;
- (id)initWithMTKView:(id)arg1 dataCollection:(id)arg2;
- (void)createPipelineStates;
- (void)renderWithCommandBuffer:(id)arg1;
- (void)computeTessellationFactors:(id)arg1 data:(id)arg2;
- (void)renderPostTessellation:(id)arg1 data:(id)arg2;
- (void)renderToTextureWithCommandBuffer:(id)arg1 texture:(id)arg2;

@end
