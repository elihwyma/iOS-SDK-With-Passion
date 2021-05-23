/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSNumber, UIView, _UIPageCurlState;

@interface _UIPageCurl : NSObject

{
    long long _spineLocation;
    struct CGRect _contentRect;
    UIView *_contentView;
    _UIPageCurlState *_manualPageCurlState;
    NSMutableArray *_pendingStateQueue;
    NSMutableArray *_activeStateQueue;
    NSMutableSet *_completedStates;
    double _delayBetweenSuccessiveAnimations;
    double _pageDiagonalAngle;
    double _pageDiagonalLength;
    double _manualPageCurlMaxDAngle;
}

@property (nonatomic, readonly) long long _spineLocation;
@property (nonatomic, readonly, getter=_isManualPageCurlInProgressAndUncommitted) _Bool _manualPageCurlInProgressAndUncommitted;
@property (nonatomic, readonly) NSNumber *_wrappedManualPageCurlDirection;
@property (nonatomic, setter=_setManualPageCurlMaxDAngle:) double _manualPageCurlMaxDAngle;

- (void)dealloc;
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(_Bool)arg1;
- (id)initWithSpineLocation:(long long)arg1 andContentRect:(struct CGRect)arg2 inContentView:(id)arg3;
- (void)_setContentRect:(struct CGRect)arg1;
- (struct CGRect)_pageViewFrame:(_Bool)arg1;
- (_Bool)_areAnimationsInFlightOrPending;
- (_Bool)_isPreviousCurlCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (void)_enqueueCurlOfType:(long long)arg1 fromLocation:(struct CGPoint)arg2 inDirection:(long long)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(CDUnknownBlockType)arg6 finally:(CDUnknownBlockType)arg7;
- (void)_updateManualCurlToLocation:(struct CGPoint)arg1;
- (void)_completeManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2;
- (void)_abortManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2;
- (void)_ensureCurlFilterOnLayer:(id)arg1;
- (void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2;
- (_Bool)_populateFromValue:(double *)arg1 toValue:(double *)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (id)_newCurlFilter;
- (double)_distanceToTravelWithCurrentSpineLocation;
- (double)_baseAngleOffsetForState:(id)arg1;
- (void)_fromValue:(double *)arg1 toValue:(double *)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (double)_inputTimeForProgress:(double)arg1 distanceToTravel:(double)arg2 radius:(double *)arg3 minRadius:(double)arg4 angle:(double)arg5 dAngle:(double)arg6 touchLocation:(struct CGPoint)arg7 state:(id)arg8;
- (id)_animationKeyPaths;
- (long long)_validatedPageCurlTypeForPageCurlType:(long long)arg1 inDirection:(long long)arg2;
- (struct CGPoint)_referenceLocationForInitialLocation:(struct CGPoint)arg1 direction:(long long)arg2;
- (void)_beginCurlWithState:(id)arg1 previousState:(id)arg2;
- (void)_cancelTransitionWithState:(id)arg1 invalidatingPageCurl:(_Bool)arg2;
- (void)_updatedInputsFromState:(id)arg1 forLocation:(struct CGPoint)arg2 time:(double *)arg3 radius:(double *)arg4 angle:(double *)arg5;
- (id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(double)arg3 fromValue:(id)arg4;
- (void)_updateCurlFromState:(id)arg1 withTime:(double)arg2 radius:(double)arg3 angle:(double)arg4 addingAnimations:(id)arg5;
- (void)_forceCleanupState:(id)arg1 finished:(_Bool)arg2 completed:(_Bool)arg3;
- (double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)arg1 shouldComplete:(_Bool)arg2;
- (void)_endManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2 shouldComplete:(_Bool)arg3;
- (void)_cleanupState:(id)arg1;

@end
