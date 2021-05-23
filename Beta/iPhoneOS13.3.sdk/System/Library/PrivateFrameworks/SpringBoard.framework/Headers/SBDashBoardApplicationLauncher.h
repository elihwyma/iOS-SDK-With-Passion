/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSCoverSheetViewController, NSString, SBInProcessSecureAppAction, SBSecureAppManager;

@interface SBDashBoardApplicationLauncher : NSObject

{
    SBInProcessSecureAppAction *_secureAppAction;
    _Bool _cameraIsPrewarming;
    _Bool _cameraPrewarmSucceeded;
    CSCoverSheetViewController *_coverSheetViewController;
    SBSecureAppManager *_secureAppManager;
}

@property (retain, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (weak, nonatomic) SBSecureAppManager *secureAppManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (void)dealloc;
- (_Bool)handleEvent:(id)arg1;
- (void)prewarmCameraHardware:(_Bool)arg1 andApplication:(_Bool)arg2;
- (void)notePrewarmRequestWasUseful;
- (void)notePrewarmRequestEnded;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)_activateCameraAnimated:(_Bool)arg1 actions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchQuickNote;
- (_Bool)handleTransitionRequest:(id)arg1;
- (void)_prewarmCamera;
- (void)_coolCameraIfNecessary;
- (_Bool)_canHandleTransitionRequest:(id)arg1 outActivatingSceneEntity:(id *)arg2;
- (void)_presentApplicationSceneEntity:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)_launchQuickNote;
- (_Bool)_backgroundLaunchCamera;
- (void)_reallyActivateAppSceneWithEntity:(id)arg1 interactive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_attemptToUnlockToCameraCompletion:(CDUnknownBlockType)arg1;
- (void)_activateAppSceneBelowDashBoard:(id)arg1 secureAppType:(unsigned long long)arg2 withActions:(id)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

@end
