/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

@class NSString, UIViewController;

@protocol LOViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider

{
    UIViewController<LOViewController> *_lockoutViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)lockoutViewControllerDidFinishDismissing:(id)arg1;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (id)_newLockoutViewControllerWithBundleIdentifier:(id)arg1;
- (id)_realOverlayViewController;

@end
