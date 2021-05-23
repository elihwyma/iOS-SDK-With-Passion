/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKBubblePathAnimator, GKBubbleSet, UIViewController, _GKBubbleFlowPathTransitionInfo;

@protocol GKBubbleFlowableViewController;

@interface _GKBubbleFlowTransitionInfo : NSObject

{
    UIViewController<GKBubbleFlowableViewController> *_toVC;
    UIViewController<GKBubbleFlowableViewController> *_fromVC;
    UIViewController *_toWrapperVC;
    UIViewController *_fromWrapperVC;
    UIViewController *_containingViewController;
    CDStruct_b207fc29 _toFlags;
    CDStruct_b207fc29 _fromFlags;
    GKBubbleSet *_fromBubbles;
    GKBubbleSet *_toBubbles;
    long long _toFocusBubbleType;
    long long _fromFocusBubbleType;
    long long _transitionType;
    long long _transitionPhase;
    double _startTime;
    double _duration;
    double _fadeOutDuration;
    double _crossfadeDuration;
    double _fadeInDuration;
    double _relativeDuration;
    double _relativeStartTime;
    double _relativeFadeOutDuration;
    double _relativeCrossfadeDuration;
    double _relativeFadeInDuration;
    GKBubblePathAnimator *_toPathAnimator;
    GKBubblePathAnimator *_fromPathAnimator;
    GKBubblePathAnimator *_onlyPathAnimator;
    _GKBubbleFlowPathTransitionInfo *_toPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_fromPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_onlyPathTransitionInfo;
    _Bool _fadedOutRealFromView;
    _Bool _disableInteractionDuringTransition;
}

@property (retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *toVC;
@property (retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *fromVC;
@property (retain, nonatomic) UIViewController *toWrapperVC;
@property (retain, nonatomic) UIViewController *fromWrapperVC;
@property (retain, nonatomic) UIViewController *containingViewController;
@property (nonatomic) CDStruct_b207fc29 toFlags;
@property (nonatomic) CDStruct_b207fc29 fromFlags;
@property (retain, nonatomic) GKBubbleSet *fromBubbles;
@property (retain, nonatomic) GKBubbleSet *toBubbles;
@property (nonatomic) long long toFocusBubbleType;
@property (nonatomic) long long fromFocusBubbleType;
@property (nonatomic) long long transitionType;
@property (nonatomic) long long transitionPhase;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double crossfadeDuration;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double relativeStartTime;
@property (nonatomic) double relativeDuration;
@property (nonatomic) double relativeFadeOutDuration;
@property (nonatomic) double relativeCrossfadeDuration;
@property (nonatomic) double relativeFadeInDuration;
@property (retain, nonatomic) GKBubblePathAnimator *toPathAnimator;
@property (retain, nonatomic) GKBubblePathAnimator *fromPathAnimator;
@property (retain, nonatomic) GKBubblePathAnimator *onlyPathAnimator;
@property (retain, nonatomic) _GKBubbleFlowPathTransitionInfo *toPathTransitionInfo;
@property (retain, nonatomic) _GKBubbleFlowPathTransitionInfo *fromPathTransitionInfo;
@property (retain, nonatomic) _GKBubbleFlowPathTransitionInfo *onlyPathTransitionInfo;
@property (nonatomic) _Bool fadedOutRealFromView;
@property (nonatomic) _Bool disableInteractionDuringTransition;
@property (nonatomic, readonly) _Bool animated;
@property (nonatomic, readonly) UIViewController *realToVC;
@property (nonatomic, readonly) UIViewController *realFromVC;
@property (nonatomic, readonly) _Bool hasNonFallbackPathAnimator;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)recalculateDurationsAfterAdjustment;
- (void)adjustDuration:(double)arg1;
- (id)copyForPhase:(long long)arg1;

@end
