/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSBatteryChargingView, NSMutableArray, NSTimer;

@protocol SBLockScreenBatteryChargingViewControllerDelegate;

@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase

{
    _Bool _shouldDisplayBattery;
    CSBatteryChargingView *_chargingView;
    NSTimer *_visibilityTimer;
    NSMutableArray *_connectedDevices;
    id <SBLockScreenBatteryChargingViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBLockScreenBatteryChargingViewControllerDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (long long)presentationStyle;
- (id)chargingView;
- (_Bool)batteryVisible;
- (void)_clearVisibilityTimer;
- (void)_visibilityTimerFired:(id)arg1;
- (id)initForDisplayOfBattery:(_Bool)arg1;
- (void)presentWithAnimation:(_Bool)arg1;
- (void)prepareForDismissalWithAnimation:(_Bool)arg1;
- (void)showChargeLevelWithBatteryVisible:(_Bool)arg1;

@end
