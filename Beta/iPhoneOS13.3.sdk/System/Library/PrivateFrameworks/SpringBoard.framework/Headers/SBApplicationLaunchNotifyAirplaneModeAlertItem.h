/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplicationLaunchNotifyAlertItem.h>

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem

{
    _Bool _usesCellNetwork;
}

- (id)initWithApplication:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_configureForAirplaneModeDataAlertOnCellular:(_Bool)arg1;
- (void)_configureForAirplaneModeDataAlertOffCellular:(_Bool)arg1;
- (void)_turnOffAirplaneMode;
- (void)_sendUserToSettings;

@end
