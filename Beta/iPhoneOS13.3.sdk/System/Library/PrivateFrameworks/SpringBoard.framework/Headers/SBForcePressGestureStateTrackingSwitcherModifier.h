/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBForcePressGestureStateTrackingSwitcherModifier : SBSwitcherModifier

{
    SBAppLayout *_selectedAppLayout;
    _Bool _didBeginPanning;
    _Bool _didPop;
    double _panTranslationThreshold;
    double _panProgress;
    double _forceProgress;
    struct CGPoint _velocity;
    struct CGPoint _averageVelocity;
}

@property (nonatomic, readonly) struct CGPoint velocity;
@property (nonatomic, readonly) struct CGPoint averageVelocity;
@property (nonatomic, readonly) double panTranslationThreshold;
@property (nonatomic, readonly) double panProgress;
@property (nonatomic, readonly) double forceProgress;
@property (nonatomic, readonly) _Bool didBeginPanning;
@property (nonatomic, readonly) _Bool didPop;

- (id)handleGestureEvent:(id)arg1;
- (id)_actionForActivatingFinalDestination:(long long)arg1;
- (id)initWithSelectedAppLayout:(id)arg1;
- (id)_updateForGestureDidBeginWithGestureEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithGestureEvent:(id)arg1;
- (id)_updateForGestureDidEndWithGestureEvent:(id)arg1;
- (double)_currentProgressForGestureEvent:(id)arg1;
- (void)_updateForcePressTrackingWithGestureEvent:(id)arg1;
- (_Bool)_canCommitToSwitcherWithPanPercent:(double)arg1 forceComplete:(_Bool)arg2;
- (long long)_currentFinalDestination;
- (double)_projectedTranslationWithVelocity:(struct CGPoint)arg1 initialTranslation:(double)arg2;

@end
