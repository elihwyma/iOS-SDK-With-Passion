/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <AssistantUI/AFUISceneHostingViewController.h>

#import <AssistantUI/Swift-Protocol.h>

@class AFApplicationInfo, NSArray, NSString, NSXPCConnection;

@protocol AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate;

@interface AFUISiriRemoteSceneViewController : AFUISceneHostingViewController <Swift>

{
    _Bool _connectionHasBeenResumed;
    NSArray *_audioCategoriesDisablingVolumeHUD;
    _Bool _expectingInvalidation;
    id <AFUISiriRemoteSceneViewControllerDataSource> _dataSource;
    id <AFUISiriRemoteSceneViewControllerDelegate> _delegate;
    AFApplicationInfo *_viewServiceApplicationInfo;
    NSXPCConnection *_remoteConnection;
}

@property (retain, nonatomic) NSXPCConnection *remoteConnection;
@property (weak, nonatomic) id <AFUISiriRemoteSceneViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <AFUISiriRemoteSceneViewControllerDelegate> delegate;
@property (nonatomic, readonly) AFApplicationInfo *viewServiceApplicationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteObjectInterface;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_connection;
- (void)setSession:(id)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)serviceViewControllerProxy;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)applicationWillEnterForeground;
- (id)sessionDelegate;
- (void)handlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (void)setWaitingForTelephonyToStart:(_Bool)arg1;
- (void)extendCurrentTTSRequested;
- (void)setRunningPPT:(_Bool)arg1 withTestName:(id)arg2 testOptions:(id)arg3;
- (void)preloadPluginBundles;
- (void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1;
- (void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1;
- (void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)sceneController:(id)arg1 willInvalidateScene:(id)arg2 forReason:(unsigned long long)arg3;
- (void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setStatusViewHidden:(_Bool)arg1;
- (void)setCarDisplaySnippetMode:(long long)arg1;
- (void)setStatusViewUserInteractionEnabled:(_Bool)arg1;
- (void)setBugReportingAvailable:(_Bool)arg1;
- (void)setHelpButtonEmphasized:(_Bool)arg1;
- (void)pulseHelpButton;
- (void)serviceRequestsActivationSourceWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)serviceRequestsDismissalWithDelayForTTS:(_Bool)arg1 userInfo:(id)arg2;
- (void)serviceStartGuidedAccess;
- (void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)serviceDidReadBulletinWithIdentifier:(id)arg1;
- (void)serviceStartRequestWithOptions:(id)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)siriIdleAndQuietStatusDidChange:(_Bool)arg1;
- (void)setStatusViewDisabled:(_Bool)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(_Bool)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(_Bool)arg3;
- (void)getScreenshotWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceWillStartTest:(id)arg1;
- (void)serviceDidFinishTest:(id)arg1;
- (void)serviceFailTest:(id)arg1 withReason:(id)arg2;
- (void)serviceDidEnterUITrackingMode;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;
- (void)serviceDidRequestKeyboard:(_Bool)arg1 minimized:(_Bool)arg2;
- (void)serviceDidRequestKeyboard:(_Bool)arg1;
- (void)serviceDidResetTextInput;
- (void)serviceWillBeginTapToEdit;
- (void)serviceDidEndTaptoEdit;
- (void)serviceDidRequestCurrentTextInput:(CDUnknownBlockType)arg1;
- (void)serviceViewControllerRequestsPresentation:(CDUnknownBlockType)arg1;
- (void)serviceViewControllerRequestsDismissal:(CDUnknownBlockType)arg1;
- (void)servicePresentedIntentWithBundleId:(id)arg1;
- (void)setTypeToSiriViewHidden:(_Bool)arg1;
- (void)updateToPresentationWithIdentifier:(id)arg1 presentationProperties:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;
- (void)siriDidHidePasscodeUnlock;
- (void)startRequestForText:(id)arg1;
- (void)siriKeyboardViewDidChange:(CDStruct_a82615c4 *)arg1;
- (void)setSpeechSynthesis:(id)arg1;
- (void)didReceiveHelpAction;
- (void)didReceiveReportBugAction;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveShortTapAction;
- (id)speechSynthesisDelegate;
- (void)siriWillShowPasscodeUnlock;
- (void)setStatusBarFrame:(struct CGRect)arg1;
- (void)setStatusViewHeight:(double)arg1;

@end
