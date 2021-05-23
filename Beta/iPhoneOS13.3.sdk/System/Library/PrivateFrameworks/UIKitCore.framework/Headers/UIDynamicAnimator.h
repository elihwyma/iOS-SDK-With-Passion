/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, PKExtendedPhysicsWorld, UIDynamicAnimatorTicker, UIDynamicsDebug, UIView;

@protocol UIDynamicAnimatorDelegate, _UIDynamicReferenceSystem;

@interface UIDynamicAnimator : NSObject

{
    PKExtendedPhysicsWorld *_world;
    CADisplayLink *_displaylink;
    double _elapsedTime;
    double _realElapsedTime;
    double _lastUpdateTime;
    double _lastInterval;
    long long _ticks;
    UIDynamicsDebug *_dynamicsDebug;
    NSMutableDictionary *_bodies;
    NSMutableArray *_topLevelBehaviors;
    NSMutableSet *_registeredBehaviors;
    NSMutableSet *_behaviorsToRemove;
    NSMutableSet *_behaviorsToAdd;
    NSMutableIndexSet *_availableFieldCategories;
    NSMutableArray *_postSolverActions;
    NSMutableArray *_beginContacts;
    NSMutableArray *_endContacts;
    _Bool _isInWorldStepMethod;
    _Bool _needsLocalBehaviorReevaluation;
    _Bool _stopping;
    unsigned long long _referenceSystemType;
    unsigned long long _integralization;
    struct {
        unsigned int delegateImplementsDynamicAnimatorDidPause:1;
        unsigned int delegateImplementsDynamicAnimatorWillResume:1;
    } _stateFlags;
    double _accuracy;
    int _registeredCollisionGroups;
    int _registeredImplicitBounds;
    struct CGRect _referenceSystemBounds;
    id <_UIDynamicReferenceSystem> _referenceSystem;
    int _debugInterval;
    _Bool _debugEnabled;
    CDUnknownBlockType _action;
    id <UIDynamicAnimatorDelegate> _delegate;
    _Bool _disableDisplayLink;
    double _speed;
    UIDynamicAnimatorTicker *_ticker;
}

@property (retain, nonatomic) UIDynamicAnimatorTicker *ticker;
@property (nonatomic, readonly) UIView *referenceView;
@property (copy, nonatomic, readonly) NSArray *behaviors;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly) double elapsedTime;
@property (weak, nonatomic) id <UIDynamicAnimatorDelegate> delegate;

+ (void)initialize;
+ (void)_unregisterAnimator:(id)arg1;
+ (void)_registerAnimator:(id)arg1;
+ (void)_referenceViewSizeChanged:(id)arg1;
+ (void)_clearReferenceViewFromAnimators:(id)arg1;
+ (id)_allDynamicAnimators;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_delegate;
- (void)_start;
- (void)_setSpeed:(double)arg1;
- (double)_speed;
- (void)_setDelegate:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)recursiveDescription;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithReferenceSystem:(id)arg1;
- (_Bool)_animatorStep:(double)arg1;
- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
- (void)updateItemFromCurrentState:(id)arg1;
- (void)_setRunning:(_Bool)arg1;
- (void)_tickle;
- (id)_bodyForItem:(id)arg1;
- (id)_world;
- (id)_registerBodyForItem:(id)arg1;
- (void)_unregisterBodyForItem:(id)arg1 action:(CDUnknownBlockType)arg2;
- (int)_registerCollisionGroup;
- (void)_registerImplicitBounds;
- (void)_unregisterCollisionGroup;
- (void)_unregisterImplicitBounds;
- (struct CGRect)_referenceSystemBounds;
- (void)_displayLinkTick:(id)arg1;
- (_Bool)_containsBehavior:(id)arg1;
- (id)initWithReferenceView:(id)arg1;
- (void)removeAllBehaviors;
- (void)_clearReferenceView;
- (id)_referenceSystem;
- (void)_traverseBehaviorHierarchy:(CDUnknownBlockType)arg1;
- (void)_checkBehavior:(id)arg1;
- (void)_registerBehavior:(id)arg1;
- (void)_unregisterBehavior:(id)arg1;
- (void)_setupWorld;
- (void)_registerFieldCategoryForFieldBehavior:(id)arg1;
- (void)_shouldReevaluateLocalBehaviors;
- (void)_unregisterFieldCategoryForFieldBehavior:(id)arg1;
- (id)_keyForItem:(id)arg1;
- (void)_runBlockPostSolverIfNeeded:(CDUnknownBlockType)arg1;
- (void)updateItemUsingCurrentState:(id)arg1;
- (id)_newBodyForItem:(id)arg1 inItemGroup:(id)arg2;
- (void)_defaultMapper:(id)arg1 position:(struct CGPoint)arg2 angle:(double)arg3 itemType:(unsigned long long)arg4;
- (_Bool)_isWorldActive;
- (void)_stop;
- (void)setDebugFrameInterval:(unsigned long long)arg1;
- (unsigned long long)debugFrameInterval;
- (_Bool)isDebugEnabled;
- (void)setDebugEnabled:(_Bool)arg1;
- (void)_evaluateLocalBehaviors;
- (void)_reevaluateImplicitBounds;
- (void)_reportBeginContacts;
- (void)_reportEndContacts;
- (void)_preSolverStep;
- (void)_postSolverStep;
- (void)_setReferenceSystem:(id)arg1;
- (double)_ptmRatio;
- (void)didBeginContact:(id)arg1;
- (void)didEndContact:(id)arg1;
- (void)_setAnimatorIntegralization:(unsigned long long)arg1;
- (unsigned long long)_animatorIntegralization;
- (id)itemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (void)setDebugAnimationSpeed:(double)arg1;
- (double)debugAnimationSpeed;
- (void)_setDebugInterval:(int)arg1;
- (int)_debugInterval;
- (_Bool)_debugEnabled;
- (void)_setDebugEnabled:(_Bool)arg1;
- (void)_setAction:(CDUnknownBlockType)arg1;
- (void)_setAlwaysDisableDisplayLink:(_Bool)arg1;
- (_Bool)_alwaysDisableDisplayLink;
- (double)_animatorInterval;
- (long long)_ticks;
- (double)_realElapsedTime;
- (void)setReferenceView:(id)arg1;
- (unsigned long long)_referenceSystemType;

@end
