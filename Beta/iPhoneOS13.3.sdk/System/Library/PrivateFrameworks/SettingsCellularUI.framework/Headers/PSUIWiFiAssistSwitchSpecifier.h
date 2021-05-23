/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <SettingsCellular/PSAppDataUsagePolicySwitchSpecifier.h>

__attribute__((visibility("hidden")))
@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier

+ (_Bool)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (unsigned long long)dataUsage;
- (id)initDefault;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)arg1;

@end
