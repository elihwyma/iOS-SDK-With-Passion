/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController

{
    SBSceneLayoutAnimationWrapperView *_layoutAnimationWrapperView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (void)_setHidden:(_Bool)arg1;
- (id)animationSettings;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (_Bool)_shouldDismissBanner;

@end
