/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class NSSet, SBDeviceApplicationSceneEntity, SBWorkspaceTransitionRequest;

@protocol BSInvalidatable;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController

{
    id <BSInvalidatable> _colorSamplingAssertion;
    id <BSInvalidatable> _wallpaperRequiredAssertion;
}

@property (retain, nonatomic) id <BSInvalidatable> colorSamplingAssertion;
@property (retain, nonatomic) id <BSInvalidatable> wallpaperRequiredAssertion;
@property (nonatomic, readonly) SBWorkspaceTransitionRequest *transitionRequest;
@property (copy, nonatomic, readonly) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property (copy, nonatomic, readonly) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;

- (void)_begin;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;
- (_Bool)_shouldDismissBanner;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (void)__startAnimation;
- (_Bool)__wantsInitialProgressStateChange;
- (id)_primaryAppOrAnyAppFromSet:(id)arg1;
- (void)_dismissBannerAnimated:(_Bool)arg1;

@end
