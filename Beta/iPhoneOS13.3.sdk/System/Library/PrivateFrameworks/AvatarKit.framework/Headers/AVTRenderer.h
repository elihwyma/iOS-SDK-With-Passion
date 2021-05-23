/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <SceneKit/SCNRenderer.h>

@class AVTARMaskRenderer, AVTAvatar, AVTAvatarEnvironment, AVTFaceTracker, NSLock, NSString, SCNNode, SCNTechnique;

@protocol MTLTexture, SCNSceneRendererDelegate;

@interface AVTRenderer : SCNRenderer

{
    AVTAvatarEnvironment *_environment;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    id <SCNSceneRendererDelegate> _fwdDelegate;
    _Bool _pauseSimulation;
    _Bool _arMode;
    _Bool _enableDepthMask;
    AVTFaceTracker *_faceTracker;
    unsigned long long _antialiasingMode;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
    struct __CVMetalTextureCache *_arMaskTextureCache;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) _Bool arMode;
@property (nonatomic) _Bool pauseSimulation;
@property (nonatomic) _Bool enableDepthMask;
@property (nonatomic) unsigned long long avt_antialiasingMode;
@property (retain, nonatomic) AVTFaceTracker *faceTracker;
@property (retain, nonatomic) id <MTLTexture> capturedDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)renderer;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)renderer:(id)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)renderer:(id)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;
- (void)_updateFocal;
- (void)avatarDidChange;
- (id)transitionTexture;
- (void)_avtSetup;
- (void)_updateAvatarForARMode;
- (void)_setAvatar:(id)arg1;
- (void)__setAvatar:(id)arg1;
- (void)setEnableDepthMask:(_Bool)arg1 withFlippedDepth:(_Bool)arg2;
- (void)fadePuppetToWhite:(float)arg1;

@end
