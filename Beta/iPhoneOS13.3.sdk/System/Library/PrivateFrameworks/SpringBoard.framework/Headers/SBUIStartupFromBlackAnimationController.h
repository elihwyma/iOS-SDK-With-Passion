/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BSAnimationSettings, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController

{
    BSAnimationSettings *_animationSettings;
    _Bool _waitsForAppActivation;
    UIView *_internalContainerView;
    UIView *_blackView;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) _Bool waitsForAppActivation;

- (void)_setHidden:(_Bool)arg1;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (_Bool)_shouldDismissBanner;
- (void)_showBlackView;

@end
