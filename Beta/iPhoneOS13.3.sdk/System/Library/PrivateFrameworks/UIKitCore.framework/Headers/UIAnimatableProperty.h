/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAnimatablePropertyBase.h>

@class NSObject, UIViewInProcessAnimationState, UIViewRunningAnimationEntry, _UIViewAnimatablePropertyTransformer;

@protocol OS_dispatch_queue, UIVectorOperatable, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface UIAnimatableProperty : UIAnimatablePropertyBase

{
    _UIViewAnimatablePropertyTransformer *_transformer;
    NSObject<OS_dispatch_queue> *_animationEntryLockingQueue;
    NSObject<OS_dispatch_queue> *_invalidationLockingQueue;
    UIViewRunningAnimationEntry *_animationEntry;
    id <UIVectorOperatable> _pendingTargetVelocity;
    id <UIVectorOperatable> _pendingVelocity;
    _Bool _invalidated;
    int _ownershipCount;
    id _value;
    id _presentationValue;
    id <UIViewAnimationComposing> _composer;
    UIViewInProcessAnimationState *_animationState;
    CDUnknownBlockType _invalidationCallback;
}

@property (retain, nonatomic) id <UIViewAnimationComposing> composer;
@property (retain, nonatomic) UIViewRunningAnimationEntry *animationEntry;
@property (weak, nonatomic) UIViewInProcessAnimationState *animationState;
@property (nonatomic) int ownershipCount;
@property (copy, nonatomic) CDUnknownBlockType invalidationCallback;
@property (retain) id presentationValue;
@property (retain, nonatomic) id value;
@property (nonatomic) id velocity;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

- (id)debugDescription;
- (void)invalidate;
- (id)transformer;
- (void)setTransformer:(id)arg1;
- (_Bool)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(CDUnknownBlockType)arg3 newValueCallback:(CDUnknownBlockType)arg4 removedCallback:(CDUnknownBlockType)arg5;
- (id)velocityTarget:(_Bool)arg1;
- (void)setVelocity:(id)arg1 target:(_Bool)arg2;
- (_Bool)_performAnimation;
- (void)invalidateAndStopImmediately:(_Bool)arg1;
- (id)initWithInvalidationCallback:(CDUnknownBlockType)arg1;
- (void)invalidateIfPossible;

@end
