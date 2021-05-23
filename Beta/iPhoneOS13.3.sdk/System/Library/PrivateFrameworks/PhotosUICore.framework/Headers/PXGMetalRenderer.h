/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class MTKView, NSMutableArray, NSString, PXGMetalRenderTextureStore, PXGMetalTextureConverter;

@protocol MTLBuffer, MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLLibrary, MTLSamplerState, MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore, PXGRendererDelegate, PXGTextureConverter;

@interface PXGMetalRenderer : NSObject

{
    struct os_unfair_lock_s _metalLock;
    id <MTLDevice> _device;
    MTKView *_metalView;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    id <MTLBuffer> _squareGeometryBuffer;
    unsigned long long _lastOffscreenRender;
    id <MTLTexture> _offscreenTexture;
    _Bool _isCreatingOffscreenTexture;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <MTLSamplerState> _mirrorRepeatSampler;
    id <MTLSamplerState> _clampToZeroSampler;
    id <MTLDepthStencilState> _depthStencil;
    struct os_unfair_lock_s _pipelinesLock;
    CDStruct_39b4dbd3 *_pipelines;
    long long _pipelinesCount;
    long long _pipelinesCapacity;
    NSObject<OS_dispatch_queue> *_compilationQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    NSMutableArray *_reusableRenderStates;
    long long _frameId;
    double _lastTime;
    PXGMetalRenderTextureStore *_opaqueTextures;
    PXGMetalRenderTextureStore *_translucentTextures;
    PXGMetalTextureConverter *_textureConverter;
    _Bool _isInvertColorsEnabled;
    CDUnknownBlockType _test_renderSnapshotHandler;
    id <PXGRendererDelegate> _delegate;
    struct CGRect _visibleRect;
    CDStruct_93894d6c _interactionState;
}

@property (nonatomic, readonly) struct CGRect visibleRectInRenderCoordinates;
@property (nonatomic, readonly) CDStruct_183601bc camera;
@property (nonatomic, readonly) unsigned long long destinationColorSpaceName;
@property (nonatomic, readonly) MTKView *metalView;
@property (nonatomic) _Bool isInvertColorsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXGRendererDelegate> delegate;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) CDStruct_93894d6c interactionState;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) id <PXGTextureConverter> textureConverter;
@property (copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler;

- (id)init;
- (void)dealloc;
- (struct NSObject *)view;
- (double)_screenScale;
- (void)setNeedsRender;
- (void)updateWithChangeDetails:(id)arg1;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (void)metalTextureConverter:(id)arg1 didCreateTexture:(id)arg2;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)_loadOffscreenTexture:(_Bool)arg1;
- (void)_setupMetalIfNeeded;
- (void)_setupBuffers;
- (id)_checkoutRenderState;
- (void)_checkinRenderState:(id)arg1;
- (CDStruct_39b4dbd3)_pipelineForRenderTexture:(const CDStruct_dcc83465 *)arg1 waitForCompilation:(_Bool)arg2;
- (CDStruct_39b4dbd3)_handleCompiledRenderPipelineState:(id)arg1 forColorProgram:(id)arg2 shaderFlags:(int)arg3 colorPixelFormat:(unsigned long long)arg4 pipelineIndex:(long long)arg5;
- (id)_createPipelineStateForColorProgram:(id)arg1 shaderFlags:(int)arg2 colorPixelFormat:(unsigned long long)arg3;
- (void)_pipelinesLock_resizePipelinesStorageIfNeeded;
- (void)_clearPipelines;
- (void)_configureMatricesInUniforms:(CDStruct_b1513b2e *)arg1;
- (id)_currentOffscreenTexture;
- (void)_configureCaptureSpriteTextures:(id)arg1 renderState:(id)arg2 withOffscreenTexture:(id)arg3;
- (void)_render:(id)arg1 withCompletionCompletion:(CDUnknownBlockType)arg2;
- (void)_parseSpriteTextures:(id)arg1 willPerformOffscreenPass:(_Bool)arg2 renderState:(id)arg3;
- (void)_drawSpriteTextures:(id)arg1 renderState:(id)arg2 withCommandEncoder:(id)arg3 passingTest:(CDUnknownBlockType)arg4;
- (long long)_drawRenderTexture:(CDStruct_dcc83465 *)arg1 withCommandEncoder:(id)arg2;

@end
