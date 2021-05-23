/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class CRCarPlayPreferences, NSArray, NSString, NSTimer, PSGTVOutManager, PSSpecifier;

@interface PSGGeneralController : PSListController

{
    NSTimer *_usageTimer;
    PSGTVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    PSSpecifier *_airDropSpecifier;
    NSArray *_vpnBundleControllers;
    NSArray *_vpnSpecifiers;
    NSArray *_profileBundleControllers;
    NSArray *_profileSpecifiers;
    NSArray *_fontBundleControllers;
    NSArray *_fontSpecifiers;
    CRCarPlayPreferences *_carPreferences;
}

@property (retain, nonatomic) CRCarPlayPreferences *carPreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)reloadSpecifiers;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)profileNotification:(id)arg1;
- (void)handleCarPlayAllowedDidChange;
- (void)reloadAsyncSpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateVPNWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateFontsWithCompletion:(CDUnknownBlockType)arg1;
- (void)delayedAsyncLoadSpecifiers;
- (void)pairedVehiclesDidChange;
- (_Bool)_hasCarPlayContent;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1;
- (void)handleDidBecomeActive;
- (void)profileVisibilityChanged:(id)arg1;
- (void)updateSoftwareUpdateBadge;
- (void)homeButtonCustomizeControllerDidFinish:(id)arg1;
- (void)handleTVOutChange;
- (void)loadLegalAndRegulatoryWithSpecifier:(id)arg1;
- (void)loadHomeButtonSettings:(id)arg1;
- (id)EDGEEnabled:(id)arg1;
- (void)enableEdge:(id)arg1;
- (void)shutDown:(id)arg1;

@end
