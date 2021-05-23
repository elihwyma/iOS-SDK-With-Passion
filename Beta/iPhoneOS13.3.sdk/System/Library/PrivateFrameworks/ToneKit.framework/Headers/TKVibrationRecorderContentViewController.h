/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, TKVibrationRecorderView, TKVibrationRecorderViewController, TKVibratorController, TLVibrationPattern, UIAlertAction, UIAlertController, UIBarButtonItem, UITextField;

@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderContentViewController : UIViewController

{
    int _mode;
    TKVibrationRecorderView *_vibrationRecorderView;
    TLVibrationPattern *_recordedVibrationPattern;
    double _currentVibrationComponentDidStartTimeStamp;
    _Bool _isWaitingForEndOfCurrentVibrationComponent;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_saveButton;
    UIAlertController *_vibrationNameAlertController;
    UIAlertAction *_vibrationNameAlertSaveAction;
    UITextField *_vibrationNameAlertTextField;
    TKVibratorController *_vibratorController;
    NSDictionary *_indefiniteVibrationPattern;
    id <TKVibrationRecorderViewControllerDelegate> _delegate;
    TKVibrationRecorderViewController *_parentVibrationRecorderViewController;
}

@property (weak, nonatomic) id <TKVibrationRecorderViewControllerDelegate> delegate;
@property (weak, nonatomic) TKVibrationRecorderViewController *parentVibrationRecorderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)applicationWillSuspend;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_handleApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)_cleanUpVibrationNameAlertController;
- (void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)_stopRecordingOrPlayingForApplicationSuspension;
- (void)_finishedWithRecorder;
- (void)_vibrationNameTextFieldContentsDidChange:(id)arg1;
- (void)_cancelButtonInAlertTapped:(id)arg1;
- (void)_saveButtonInAlertTapped:(id)arg1;
- (void)_updateStateSaveButtonInAlert;
- (void)_stopVibrating;
- (void)_storeVibrationComponentOfTypePause:(_Bool)arg1;
- (id)_indefiniteVibrationPattern;
- (void)_startVibratingWithVibrationPattern:(id)arg1;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidEnterRecordingMode;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
- (_Bool)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;
- (id)initWithVibratorController:(id)arg1;

@end
