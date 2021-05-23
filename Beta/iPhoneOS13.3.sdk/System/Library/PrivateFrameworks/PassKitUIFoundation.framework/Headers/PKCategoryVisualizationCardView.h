/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <UIKit/UIView.h>

@class MPSUnaryImageKernel, MTLRenderPassDescriptor, NSArray, NSSet, NSString, PKMetalRenderLoop;

@protocol MTLBuffer, MTLCommandQueue, MTLRenderPipelineState, MTLTexture;

@interface PKCategoryVisualizationCardView : UIView

{
    PKMetalRenderLoop *_renderLoop;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLRenderPassDescriptor *_secondRenderPassDescriptor;
    unsigned long long _drawableWidth;
    unsigned long long _drawableHeight;
    id <MTLCommandQueue> _commandQueue;
    id <MTLTexture> _texture;
    id <MTLTexture> _overlayTexture;
    id <MTLTexture> _overlayNormalTexture;
    id <MTLRenderPipelineState> _overlayPipelineState;
    id <MTLRenderPipelineState> _circlePipelineState;
    id <MTLRenderPipelineState> _circleOutlinePipelineState;
    id <MTLBuffer> _vertexCoordsBuffer;
    id <MTLBuffer> _textureCoordsBuffer;
    id <MTLBuffer> _circleUniformsBuffer;
    id <MTLBuffer> _circleDataBuffer;
    id <MTLBuffer> _singleCircleDataBuffer;
    MPSUnaryImageKernel *_blurShader;
    _Bool _hasPendingUpdate;
    long long _pendingUpdateStyle;
    _Bool _invalidated;
    _Bool _effectivePaused;
    _Bool _needsDraw;
    _Bool _emptying;
    CDStruct_f50b3c6f _state;
    _Bool _motionEnabled;
    _Bool _paused;
    _Bool _blurDisabled;
    NSArray *_bucketColors;
    NSSet *_magnitudes;
}

@property (copy, nonatomic) NSArray *bucketColors;
@property (copy, nonatomic, readonly) NSSet *magnitudes;
@property (nonatomic, getter=isMotionEnabled) _Bool motionEnabled;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic, getter=isBlurDisabled) _Bool blurDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_empty;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)renderWithTextures:(id)arg1 rendererState:(id)arg2;
- (void)setMagnitudes:(id)arg1 withStyle:(long long)arg2;
- (id)rendererState;
- (void)_updatePausedState;
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;
- (void)_startMotionUpdates;
- (void)_stopMotionUpdates;
- (void)renderLoop:(id)arg1 drawableSizeDidChange:(struct CGSize)arg2;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)_createMetalResourcesWithTextures:(id)arg1;
- (void)_updateCircles;
- (void)_updateTextureAndBlurShader;
- (void)_updateRenderPassDescriptorWithDrawable:(id)arg1;
- (void)_calculateNewCirclePositions;

@end
