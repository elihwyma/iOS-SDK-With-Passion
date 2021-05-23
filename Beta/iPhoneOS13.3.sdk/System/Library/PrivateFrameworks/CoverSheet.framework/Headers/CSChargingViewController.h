/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class BCBatteryDeviceController, CSBatteryChargingView;

@interface CSChargingViewController : CSCoverSheetViewControllerBase

{
    BCBatteryDeviceController *_batteryController;
    CSBatteryChargingView *_chargingView;
}

- (id)init;
- (void)dealloc;
- (long long)presentationStyle;
- (void)viewDidLoad;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationType;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)_updateChargingViewIfNecessary;
- (void)_updateChargingViewLegibility;
- (void)_createNewChargingViewForDoubleBattery:(_Bool)arg1;

@end
