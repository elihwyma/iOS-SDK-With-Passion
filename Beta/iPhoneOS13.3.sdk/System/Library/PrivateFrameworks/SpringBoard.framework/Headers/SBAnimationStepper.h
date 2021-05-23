/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSAnimationSettings, CADisplayLink, NSArray, NSMutableSet, NSString;

@interface SBAnimationStepper : NSObject

{
    BSAnimationSettings *_animationSettings;
    NSMutableSet *_views;
    NSMutableSet *_finishedAnimatingViews;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completion;
    double _percentage;
    _Bool _invalidated;
    _Bool _completed;
    _Bool _finishingForward;
    _Bool _finishingBackward;
    _Bool _animatingToStepPercent;
    double _animatedSteppingTimestamp;
    double _animatedSteppingStartPercent;
    double _animatedSteppingTargetPercent;
    double _finishBackwardTimestamp;
    double _finishBackwardDuration;
    double _finishBackwardPercentage;
    _Bool _adjustsDurationForLongestAnimation;
    double _duration;
    double _finishSpeed;
}

@property (nonatomic) double finishSpeed;
@property (nonatomic, readonly) NSArray *views;
@property (nonatomic, readonly) double duration;
@property (nonatomic) _Bool adjustsDurationForLongestAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isStepped) _Bool stepped;
@property (nonatomic) double stepPercentage;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_displayLinkFired:(id)arg1;
- (void)_checkForCompletion;
- (id)initWithAnimationSettings:(id)arg1;
- (void)startSteppingAnimationsInView:(id)arg1;
- (void)finishSteppingForwardToEnd;
- (void)finishSteppingBackwardToStart;
- (double)_nextCommitTime;
- (void)_adjustDurationForLongestAnimation;
- (void)_makeSubviewTree:(id)arg1 fromView:(id)arg2;
- (void)_displayLinkFiredForBackwardToStart:(id)arg1;
- (void)_setStepPercentage:(double)arg1;
- (void)_updateAnimationSteppingTarget:(double)arg1;
- (void)finishSteppingForwardToEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishSteppingBackwardToStartWithCompletion:(CDUnknownBlockType)arg1;

@end
