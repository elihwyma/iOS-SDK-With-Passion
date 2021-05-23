/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator

{
    UIView *_crossfadeView;
    _Bool _addedToWindow;
    _Bool _fadesReferenceView;
}

@property (nonatomic) _Bool fadesReferenceView;

- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (void)_applyAlphaForFraction:(double)arg1;
- (id)initWithAnimationContainer:(id)arg1 crossfadeView:(id)arg2;

@end
