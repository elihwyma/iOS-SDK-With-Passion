/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSCoverSheetViewController, NSString, SBUIFlashlightController;

@protocol CSCameraPrewarming, SBFLockOutStatusProvider;

@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase

{
    SBUIFlashlightController *_flashlight;
    _Bool _suppressingVisibleChanges;
    _Bool _animatingToCamera;
    CSCoverSheetViewController *_coverSheetViewController;
    id <SBFLockOutStatusProvider> _lockOutController;
    id <CSCameraPrewarming> _cameraPrewarmer;
}

@property (nonatomic) _Bool animatingToCamera;
@property (weak, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (retain, nonatomic) id <SBFLockOutStatusProvider> lockOutController;
@property (retain, nonatomic) id <CSCameraPrewarming> cameraPrewarmer;
@property (nonatomic) _Bool suppressingVisibleChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;
+ (_Bool)deviceSupportsButtons;

- (void)dealloc;
- (_Bool)isPortrait;
- (void)loadView;
- (long long)presentationStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)hasCamera;
- (_Bool)hasFlashlight;
- (void)_setupFlashlight;
- (long long)presentationType;
- (void)_resetIdleTimer;
- (void)_addStateCaptureHandlers;
- (void)flashlightAvailabilityDidChange:(_Bool)arg1;
- (void)flashlightLevelDidChange:(unsigned long long)arg1;
- (id)quickActionsView;
- (void)_tearDownFlashlightIfOff;
- (void)_tearDownFlashlight;
- (void)_updateFlashlightButtonState;
- (void)_updateFlashlightButtonAvailability;
- (_Bool)_supportsCamera;
- (void)_launchCamera;
- (void)_toggleFlashlight;
- (_Bool)_isFlashlightOn;
- (void)_deviceBlockStateDidChangeNotification:(id)arg1;
- (void)_featureLockStateDidChangeNotification:(id)arg1;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(_Bool)arg1;
- (id)quickActionsViewIfLoaded;
- (_Bool)allowsFlashlight;
- (_Bool)allowsCameraPress;
- (void)touchBeganForButton:(id)arg1;
- (void)fireActionForButton:(id)arg1;
- (void)touchEndedForButton:(id)arg1;
- (long long)presentationPriority;

@end
