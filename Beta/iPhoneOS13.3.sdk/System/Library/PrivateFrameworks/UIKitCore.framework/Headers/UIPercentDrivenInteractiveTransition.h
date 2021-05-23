/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol UITimingCurveProvider, UIViewImplicitlyAnimating;

@interface UIPercentDrivenInteractiveTransition : NSObject <Swift>

{
    double _duration;
    _Bool _didCommitAnimations;
    id <UIViewImplicitlyAnimating> _interruptibleAnimator;
    NSUUID *_animationTrackingAnimatorUUID;
    _Bool _wantsInteractiveStart;
    _Bool __transitionInterrupted;
    double _completionSpeed;
    long long _completionCurve;
    id <UITimingCurveProvider> _timingCurve;
    NSString *__originalFillMode;
    NSUUID *__uuid;
}

@property (retain, nonatomic, setter=_setOriginalFillMode:) NSString *_originalFillMode;
@property (retain, nonatomic, setter=_setUuid:) NSUUID *_uuid;
@property (nonatomic, getter=_isTransitionInterrupted, setter=_setTransitionInterrupted:) _Bool _transitionInterrupted;
@property (readonly) double duration;
@property (readonly) double percentComplete;
@property (nonatomic) double completionSpeed;
@property (nonatomic) long long completionCurve;
@property (retain, nonatomic) id <UITimingCurveProvider> timingCurve;
@property (nonatomic) _Bool wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_setDuration:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)pauseInteractiveTransition;
- (void)_resetInteractionController;
- (void)_stopInteractiveTransition;
- (void)_continueInterruptibleTransition:(id)arg1 reverse:(_Bool)arg2;
- (_Bool)_useAnimatorTrackingToDriveTransition;
- (void)_stopInteractiveTransition:(id)arg1;
- (_Bool)_startInterruptibleTransition:(id)arg1;
- (void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(_Bool)arg3 didComplete:(_Bool)arg4;
- (void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(CDUnknownBlockType)arg3;

@end
