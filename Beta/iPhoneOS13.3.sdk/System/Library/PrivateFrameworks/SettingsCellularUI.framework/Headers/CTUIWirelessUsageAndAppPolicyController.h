/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class CoreTelephonyClient, NSString, PSSpecifier, PSUIAppDataUsageGroup;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController

{
    _Bool _shouldCalculateUsage;
    PSSpecifier *_groupSpecifier;
    PSUIAppDataUsageGroup *_appDataUsageGroup;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSUIAppDataUsageGroup *appDataUsageGroup;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property _Bool shouldCalculateUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)_handleNewCarrierNotification:(id)arg1;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;

@end
