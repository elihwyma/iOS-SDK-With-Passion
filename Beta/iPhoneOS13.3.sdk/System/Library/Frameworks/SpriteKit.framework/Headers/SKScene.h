/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKEffectNode.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSMapTable, NSMutableArray, PKPhysicsWorld, SKCameraNode, SKNode, SKPhysicsBody, SKPhysicsWorld, SKView, UIColor;

@protocol SKSceneDelegate;

@interface SKScene : SKEffectNode

{
    double _lastUpdate;
    double _pausedTime;
    struct CGRect _visibleRect;
    NSMapTable *_touchMap;
    NSMutableArray *_allChildenWithConstraints;
    struct CGRect _bounds;
    _Bool _isSetup;
    _Bool _usesExplicitUpdate;
    _Bool _usesExplicitRender;
    SKPhysicsBody *_scenePinBody;
    id _view;
    struct SKCSceneNode *_skcSceneNode;
    SKNode *_listener;
    AVAudioEngine *_audioEngine;
    _Bool __needsUpdate;
    _Bool __needsRender;
    SKPhysicsWorld *_physicsWorld;
    SKCameraNode *_camera;
    id <SKSceneDelegate> _delegate;
    AVAudioEnvironmentNode *_avAudioEnvironmentNode;
    PKPhysicsWorld *__pkPhysicsWorld;
}

@property _Bool _usesExplicitUpdate;
@property _Bool _usesExplicitRender;
@property _Bool _needsUpdate;
@property _Bool _needsRender;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) struct CGSize visibleRectSize;
@property (nonatomic) struct CGPoint visibleRectCenter;
@property (retain, nonatomic) AVAudioEnvironmentNode *avAudioEnvironmentNode;
@property (retain, nonatomic) PKPhysicsWorld *_pkPhysicsWorld;
@property (nonatomic) struct CGSize size;
@property (nonatomic) long long scaleMode;
@property (weak, nonatomic) SKCameraNode *camera;
@property (weak, nonatomic) SKNode *listener;
@property (retain, nonatomic, readonly) AVAudioEngine *audioEngine;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (weak, nonatomic) id <SKSceneDelegate> delegate;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic, readonly) SKPhysicsWorld *physicsWorld;
@property (weak, nonatomic, readonly) SKView *view;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithSize:(struct CGSize)arg1;
+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_update:(double)arg1;
- (struct CGPoint)position;
- (struct CGRect)frame;
- (void)setScale:(double)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (_Bool)_isDirty;
- (void)setPaused:(_Bool)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)parentFocusEnvironment;
- (void)setZPosition:(double)arg1;
- (void)didMoveToView:(id)arg1;
- (double)zPosition;
- (void)_setDirty;
- (void)update:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_notifyNextDirtyState;
- (void)willMoveFromView:(id)arg1;
- (void)_didMoveToView:(id)arg1;
- (id)_getFocusNodes;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)_willMoveFromView:(id)arg1;
- (void)sceneDidLoad;
- (void)checkAudioEngine;
- (void)handleAVAudioEngineInterruption:(id)arg1;
- (void)didEvaluateActions;
- (void)didSimulatePhysics;
- (double)zRotation;
- (void)setZRotation:(double)arg1;
- (double)xScale;
- (double)yScale;
- (void)setXScale:(double)arg1;
- (void)setYScale:(double)arg1;
- (void)didApplyConstraints;
- (void)didFinishUpdate;
- (_Bool)_hasConstraints;
- (void)_registerConstraintsForNode:(id)arg1;
- (void)_removeConstraintsForNode:(id)arg1;
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;
- (void)set_anchorPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromView:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1;
- (void)willRenderContent;
- (void)didContinueContact:(id)arg1;
- (void)_setNeedsRender;
- (void)_setBackgroundContentsWithBuffer:(struct __CVBuffer *)arg1;

@end
