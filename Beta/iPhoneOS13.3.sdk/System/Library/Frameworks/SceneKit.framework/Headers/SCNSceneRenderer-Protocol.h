/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, SCNNode, SCNScene, SKScene;

@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, SCNSceneRendererDelegate;

@protocol SCNSceneRenderer <Swift>

@property (retain, nonatomic) SCNScene *scene;
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

- (unsigned short)hitTest:options: /* Error: Ran out of types for this method. */;
- (unsigned short)presentScene:withTransition:incomingPointOfView:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)isNodeInsideFrustum:withPointOfView: /* Error: Ran out of types for this method. */;
- (unsigned short)nodesInsideFrustumWithPointOfView: /* Error: Ran out of types for this method. */;
- (unsigned short)projectPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)unprojectPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareObject:shouldAbortBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareObjects:withCompletionHandler: /* Error: Ran out of types for this method. */;

@end
