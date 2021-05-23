/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <SettingsCellular/PSAppDataUsagePolicySwitchSpecifier.h>

__attribute__((visibility("hidden")))
@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier

+ (id)accountStore;
+ (id)_appleAccount;
+ (_Bool)shouldShowCloudDrive;
+ (id)cloudDriveGroupSpecifier;

- (id)initDefault;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)arg1;

@end
