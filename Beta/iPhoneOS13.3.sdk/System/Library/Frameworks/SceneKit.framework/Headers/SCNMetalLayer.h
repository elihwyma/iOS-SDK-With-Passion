/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <QuartzCore/CAMetalLayer.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSString, SCNDisplayLink, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNTechnique, SKScene;

@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, SCNSceneRendererDelegate;

@interface SCNMetalLayer : CAMetalLayer

{
    SCNJitterer *_jitterer;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *_displayLink;
    long long _preferredFramePerSeconds;
    double _lastUpdate;
    double _lastRenderedTime;
    _Bool _drawForJittering;
    _Bool _rendersIntoMaterial;
    _Bool _syncTimeWithCoreAnimation;
}

@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) _Bool syncTimeWithCoreAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double sceneTime;
@property (weak, nonatomic) id <SCNSceneRendererDelegate> delegate;
@property (getter=isPlaying) _Bool playing;
@property (nonatomic) _Bool loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) _Bool autoenablesDefaultLighting;
@property (nonatomic, getter=isJitteringEnabled) _Bool jitteringEnabled;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) _Bool temporalAntialiasingEnabled;
@property (nonatomic) _Bool showsStatistics;
@property (nonatomic) unsigned long long debugOptions;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (nonatomic, readonly) unsigned long long renderingAPI;
@property (nonatomic, readonly) void *context;
@property (nonatomic, readonly) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic, readonly) unsigned long long depthPixelFormat;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;
@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (nonatomic, readonly) struct CGRect currentViewport;
@property (nonatomic) _Bool usesReverseZ;
@property (copy, nonatomic) SCNTechnique *technique;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_kvoKeysForwardedToRenderer;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)commonInit;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (id)layer;
- (void)play;
- (void)setNeedsDisplay;
- (id)initWithLayer:(id)arg1;
- (id)displayLink;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (double)currentTime;
- (void)display;
- (id)contentLayer;
- (void)stop:(id)arg1;
- (long long)preferredFramesPerSecond;
- (_Bool)canDrawConcurrently;
- (void)play:(id)arg1;
- (void)pause:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (_Bool)_canJitter;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (id)_authoringEnvironment;
- (id)currentRenderPassDescriptor;
- (_Bool)_showsAuthoringEnvironment;
- (void)SCN_displayLinkCallback:(double)arg1;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (struct SCNVector4)_viewport;
- (id)scn_backingLayer;
- (void)_sceneDidUpdate:(id)arg1;
- (void)set_showsAuthoringEnvironment:(_Bool)arg1;
- (void)_drawAtTime:(double)arg1;
- (void)_jitterRedisplay;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (_Bool)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setPointOfCulling:(id)arg1;
- (id)pointOfCulling;
- (id)rendererOptions;
- (_Bool)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)pauseDisplayLink;
- (void)resumeDisplayLink;
- (_Bool)rendersIntoMaterial;
- (void)setRendersIntoMaterial:(_Bool)arg1;
- (void)projectPoints:(struct SCNVector3 *)arg1 count:(unsigned long long)arg2;
- (_Bool)_isGLLayerBacked;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (_Bool)scn_inLiveResize;
- (void)_cancelJitterRedisplay;
- (_Bool)_supportsJitteringSyncRedraw;

@end
