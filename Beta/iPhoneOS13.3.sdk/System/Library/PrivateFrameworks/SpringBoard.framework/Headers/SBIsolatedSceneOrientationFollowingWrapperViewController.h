/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSString, SBDeviceApplicationSceneHandle, SBSecureWindow, SBWindowSelfHostWrapper, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector;

@protocol SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate;

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController

{
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIViewController *_contentViewController;
    SBSecureWindow *_appOverlayWindow;
    SBWindowSelfHostWrapper *_appOverlayHostWrapper;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    _Bool _sceneWantsDeviceOrientationEvents;
    _Bool _rendersWhileLocked;
    id <SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> _orientationDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (id)initWithContentViewController:(id)arg1 sceneHandle:(id)arg2 orientationDelegate:(id)arg3 rendersWhileLocked:(_Bool)arg4;

@end
