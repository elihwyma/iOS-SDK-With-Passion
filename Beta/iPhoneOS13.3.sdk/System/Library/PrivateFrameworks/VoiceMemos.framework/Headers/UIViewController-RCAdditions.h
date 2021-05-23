/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (RCAdditions)

@property (nonatomic, setter=rc_setScreenUpdatesDisabled:) _Bool rc_screenUpdatesDisabled;

+ (id)recursiveDescription;

- (id)recursiveDescription;
- (id)_recursiveDescriptionWithInset:(id)arg1;
- (void)rc_addChildViewWithViewController:(id)arg1 toView:(id)arg2;
- (_Bool)rc_canAnimate;
- (id)rc_navigationItemForPresentingNavigationItem:(id)arg1 forViewController:(id)arg2;
- (_Bool)rc_isDescendantOfViewController:(id)arg1;
- (void)rc_screenUpdatesDisabledDidChange;
- (_Bool)rc_shouldAutoDisableUpdatesWhenInBackground;
- (void)rc_runAutomatedDebuggingTestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)rc_addChildViewWithViewController:(id)arg1;
- (_Bool)rc_isPrimaryLayoutAxis:(long long)arg1;
- (void)rc_loadViewIfNecessary;
- (void)rc_ensureIsInterfaceOrientationMask:(unsigned long long)arg1 preferredOrientation:(long long)arg2 doneEnsuringBlock:(CDUnknownBlockType)arg3;
- (void)rc_automaticallyUpdateScreenUpdatesDisabled;
- (void)rc_applicationDidEnterBackground;
- (void)rc_applicationWillEnterForeground;
- (void)rc_configurePopoverControllerWithSource:(id)arg1;

@end
