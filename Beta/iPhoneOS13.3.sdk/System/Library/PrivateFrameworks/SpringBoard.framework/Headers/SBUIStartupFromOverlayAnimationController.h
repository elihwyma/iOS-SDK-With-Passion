/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay, BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController

{
    BKSDisplayRenderOverlay *_overlay;
    BSAnimationSettings *_animationSettings;
    _Bool _waitsForAppActivation;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) _Bool waitsForAppActivation;

- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (_Bool)_shouldDismissBanner;

@end
