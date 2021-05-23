/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController

{
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (id)animationSettings;
- (double)_animationDelay;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;
- (_Bool)_shouldDismissBanner;

@end
