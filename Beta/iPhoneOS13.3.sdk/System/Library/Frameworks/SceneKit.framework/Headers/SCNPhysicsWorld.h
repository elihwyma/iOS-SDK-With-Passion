/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, SCNPhysicsContact, SCNScene;

@protocol SCNPhysicsContactDelegate;

@interface SCNPhysicsWorld : NSObject

{
    struct btDiscreteDynamicsWorld *_world;
    struct btOverlappingPairCallback *_ghostPairCallback;
    struct btVehicleRaycaster *_vehicleRayCaster;
    struct btC3DDebugDraw *_debugDrawer;
    struct c3dAether _aether;
    _Bool _hasActiveFields;
    _Bool _firstSimulationDone;
    id <SCNPhysicsContactDelegate> _contactDelegate;
    SCNPhysicsContact *_contact;
    SCNScene *_scene;
    struct SCNVector3 _gravity;
    double _speed;
    double _scale;
    double _timeStep;
    NSMutableArray *_fields;
    double _elapsedTime;
    NSMutableArray *_behaviors;
    NSArray *_activeBehaviors;
    _Bool _activeBehaviorsValid;
    NSMutableSet *_bodies;
}

@property (nonatomic) struct SCNVector3 gravity;
@property (nonatomic) double speed;
@property (nonatomic) double timeStep;
@property (weak) id <SCNPhysicsContactDelegate> contactDelegate;
@property (nonatomic, readonly) NSArray *allBehaviors;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (double)scale;
- (void)_reset;
- (id).cxx_construct;
- (struct btDynamicsWorld *)_handle;
- (void)setScale:(double)arg1;
- (void)commonInit;
- (id)scene;
- (id)initWithScene:(id)arg1;
- (_Bool)_isDefault;
- (void)setScene:(id)arg1;
- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
- (void)removeAllBehaviors;
- (void)_postCommandWithBlock:(CDUnknownBlockType)arg1;
- (struct c3dAether *)_aetherHandle;
- (void)_removeFieldFromWorld:(id)arg1;
- (void)_addFieldToWorld:(id)arg1;
- (void)_allowGhostObjects;
- (void)removePhysicsBody:(id)arg1 handle:(void *)arg2;
- (void)addPhysicsBody:(id)arg1 nodeRef:(struct __C3DNode *)arg2 colGroup:(unsigned long long)arg3 colMask:(unsigned long long)arg4 colTest:(unsigned long long)arg5;
- (void)_preTick:(double)arg1;
- (void)wakeUpAllBodies;
- (_Bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3)arg1 toPoint:(struct btVector3)arg2 options:(id)arg3;
- (void)_createDynamicWorldIfNeeded;
- (void)_customEncodingOfSCNPhysicsWorld:(id)arg1;
- (void)_customDecodingOfSCNPhysicsWorld:(id)arg1;
- (void)_didDecodeSCNPhysicsWorld:(id)arg1;
- (id)_physicsContact;
- (void)sceneWillDie;
- (id)objectInAllBehaviorsAtIndex:(unsigned long long)arg1;
- (id)rayTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)contactTestBetweenBody:(id)arg1 andBody:(id)arg2 options:(id)arg3;
- (id)contactTestWithBody:(id)arg1 options:(id)arg2;
- (id)convexSweepTestWithShape:(id)arg1 fromTransform:(struct SCNMatrix4)arg2 toTransform:(struct SCNMatrix4)arg3 options:(id)arg4;
- (void)updateCollisionPairs;
- (_Bool)_needsRedraw;
- (void)enumerateBodiesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_findFieldAttachedToNode:(id)arg1;
- (void)_updatePhysicsFieldsTransforms;
- (void)_step:(double)arg1;
- (struct btVehicleRaycaster *)_defaultVehicleRayCaster;
- (void)_drawDebugInAuthoringEnvironment:(void *)arg1;

@end
