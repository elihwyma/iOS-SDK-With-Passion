/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, SBFolderControllerAnimationContext, SBHIconAnimationSettings, SBValueConvergenceAnimator, UIView;

@protocol SBIconAnimationContaining, SBIconAnimatorDelegate;

@interface SBIconAnimator : NSObject

{
    double _fraction;
    double _hintFraction;
    _Bool _startAnimationAfterRotationEnds;
    _Bool _windowIsRotating;
    _Bool _cleanedUp;
    _Bool _animating;
    NSMutableArray *_pendedAnimationContexts;
    SBFolderControllerAnimationContext *_animationContext;
    _Bool _invalidated;
    id <SBIconAnimatorDelegate> _delegate;
    SBHIconAnimationSettings *_settings;
    SBValueConvergenceAnimator *_hintAnimator;
    UIView *_backgroundDarkeningView;
    id <SBIconAnimationContaining> _animationContainer;
}

@property (nonatomic, readonly) id <SBIconAnimationContaining> animationContainer;
@property (nonatomic, readonly) UIView *referenceView;
@property (nonatomic) _Bool invalidated;
@property (weak, nonatomic) id <SBIconAnimatorDelegate> delegate;
@property (retain, nonatomic) SBHIconAnimationSettings *settings;
@property (nonatomic) double fraction;
@property (nonatomic) double hintFraction;
@property (retain, nonatomic) SBValueConvergenceAnimator *hintAnimator;
@property (retain, nonatomic) UIView *backgroundDarkeningView;
@property (nonatomic, readonly, getter=isAnimating) _Bool animating;
@property (nonatomic, readonly, getter=isPastPointOfNoReturn) _Bool pastPointOfNoReturn;

- (void)dealloc;
- (void)cleanup;
- (void)prepare;
- (_Bool)_isDelayedForRotation;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (id)initWithAnimationContainer:(id)arg1;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (id)centralAnimationFactory;
- (void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)hintToFraction:(double)arg1;
- (void)_windowFinishedRotating;
- (void)_invalidateCompletions;
- (void)_animateToFractionFromContext:(id)arg1;
- (void)_animateToFractionFromPendingContexts;

@end
