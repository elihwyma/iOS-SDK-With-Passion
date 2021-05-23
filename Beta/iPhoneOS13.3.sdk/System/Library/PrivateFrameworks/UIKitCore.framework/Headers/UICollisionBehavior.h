/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, NSMutableDictionary, PKExtendedPhysicsBody;

@protocol UICollisionBehaviorDelegate;

@interface UICollisionBehavior : UIDynamicBehavior

{
    _Bool _usesImplicitBounds;
    struct UIEdgeInsets _implicitBoundsInsets;
    PKExtendedPhysicsBody *_implicitBoundsBody;
    NSMutableDictionary *_boundaryBodies;
    NSMutableDictionary *_boundaryPaths;
    unsigned long long _collisionMode;
    id <UICollisionBehaviorDelegate> _collisionDelegate;
    unsigned int _groupVID;
    unsigned int _groupBID;
    struct {
        unsigned int delegateBeganWithItem:1;
        unsigned int delegateEndedWithItem:1;
        unsigned int delegateBeganWithBoundary:1;
        unsigned int delegateEndedWithBoundary:1;
    } _collisionBehaviorFlags;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic) unsigned long long collisionMode;
@property (nonatomic) _Bool translatesReferenceBoundsIntoBoundary;
@property (copy, nonatomic, readonly) NSArray *boundaryIdentifiers;
@property (weak, nonatomic) id <UICollisionBehaviorDelegate> collisionDelegate;

+ (_Bool)_isPrimitiveBehavior;

- (id)init;
- (id)description;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)_setCollisions:(_Bool)arg1 forBody:(id)arg2 isEdge:(_Bool)arg3;
- (void)_addCollisionItem:(id)arg1;
- (void)_setupImplicitBoundaries;
- (void)_applySettings;
- (void)_setupExplicitBoundaries;
- (void)_removeImplicitBoundaries;
- (void)_removeExplicitBoundaryBodies;
- (void)_setTranslatesReferenceItemBounds:(_Bool)arg1 intoBoundaryWithInsets:(struct UIEdgeInsets)arg2;
- (void)_registerBoundaryForIdentifier:(id)arg1 path:(id)arg2;
- (void)_registerBodyForIdentifier:(id)arg1 path:(id)arg2;
- (void)_removeExplicitBoundaryPaths;
- (void)_didBeginContact:(id)arg1;
- (void)_didEndContact:(id)arg1;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets)arg1;
- (void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2;
- (void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (id)boundaryWithIdentifier:(id)arg1;
- (void)removeBoundaryWithIdentifier:(id)arg1;
- (void)removeAllBoundaries;

@end
