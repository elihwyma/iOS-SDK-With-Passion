/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class AVTAvatarStore, AVTRenderer, NSLock, NSString;

@protocol CFXAnimojiTrackingLossDelegate, OS_dispatch_queue;

@interface CFXAnimojiEffectRenderer : NSObject

{
    NSObject<OS_dispatch_queue> *_puppetLoadingQ;
    NSObject<OS_dispatch_queue> *_puppetRenderingQ;
    _Bool _logged_render_failed;
    _Bool _asynchronouslyLoadNewPuppets;
    _Bool _allowAntialiasing;
    id <CFXAnimojiTrackingLossDelegate> _trackingLossDelegate;
    AVTRenderer *_renderer;
    AVTAvatarStore *_avatarStore;
    NSString *_currentAvatarIdentifier;
    NSLock *_rendererLock;
    struct __CVMetalTextureCache *_metalTextureCache;
    struct __CVMetalTextureCache *_metalDepthTextureCache;
    struct __CVPixelBufferPool *_inputBufferPool;
    double _systemTimeForAVTRenderer;
    struct CGSize _workingSize;
}

@property (retain, nonatomic) AVTRenderer *renderer;
@property (retain, nonatomic) AVTAvatarStore *avatarStore;
@property (retain, nonatomic) NSString *currentAvatarIdentifier;
@property (retain, nonatomic) NSLock *rendererLock;
@property (nonatomic) struct __CVMetalTextureCache *metalTextureCache;
@property (nonatomic) struct __CVMetalTextureCache *metalDepthTextureCache;
@property (nonatomic) struct CGSize workingSize;
@property (nonatomic) struct __CVPixelBufferPool *inputBufferPool;
@property (nonatomic) double systemTimeForAVTRenderer;
@property (nonatomic) _Bool asynchronouslyLoadNewPuppets;
@property (weak, nonatomic) id <CFXAnimojiTrackingLossDelegate> trackingLossDelegate;
@property (nonatomic) _Bool allowAntialiasing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setupAVTMetalShaderCache;

- (id)init;
- (void)dealloc;
- (void)clear;
- (void)flush;
- (id)renderWithInputs:(id)arg1 time:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3;
- (void)setupInputBufferPoolForSize:(struct CGSize)arg1;
- (struct __CVBuffer *)newPixelBufferRenderedFromARFrame:(id)arg1 withEffect:(id)arg2 depthTexture:(id)arg3 pauseSimulationPhysicsAndDepth:(_Bool)arg4 captureOrientation:(long long)arg5 interfaceOrientation:(long long)arg6;
- (void)clearRenderer_renderLocked;
- (_Bool)inputBufferIsPortraitAspect:(struct CGSize)arg1;
- (struct __CVBuffer *)newPixelBufferRenderedFromARFrame:(id)arg1 withEffect:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4;
- (void)asyncLoadNewPuppet:(id)arg1 currentPuppet:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 primeFrame:(id)arg5;
- (id)_createNewRendererForPuppet:(id)arg1;
- (_Bool)CFX_getRenderer:(id *)arg1 forAnimojiEffect:(id)arg2 primeFrame:(id)arg3 captureOrientation:(long long)arg4 interfaceOrientation:(long long)arg5;
- (_Bool)CFX_setupPuppetRender:(id)arg1 forFrame:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 isInitialSetup:(_Bool)arg5;
- (void)renderAnimoji:(id)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2 depthTexture:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (double)CFX_focalLengthForFrame:(id)arg1 workingSize:(struct CGSize)arg2 interfaceOrientation:(long long)arg3;
- (id)CFX_depthDataToTexture:(id)arg1;
- (void)renderFrame:(id)arg1 withEffect:(id)arg2 depthTexture:(id)arg3 pauseSimulationPhysicsAndDepth:(_Bool)arg4 captureOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (_Bool)testCurrentPuppetisEqualToPuppet:(id)arg1;
- (void)updateCurrentRenderer:(id)arg1 puppetName:(id)arg2;

@end
