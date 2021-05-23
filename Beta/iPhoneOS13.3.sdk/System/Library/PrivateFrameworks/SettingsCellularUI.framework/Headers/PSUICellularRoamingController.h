/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSUICellularRoamingController : PSListController

{
    PSSpecifier *_voiceRoamingSpecifier;
    PSSpecifier *_dataRoamingSpecifier;
    PSSpecifier *_cdmaRoamingSpecifier;
}

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)newCarrierNotification;
- (void)roamingOptionsDidChange;
- (id)getDataRoamingStatus:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getEUInternetStatus:(id)arg1;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(_Bool)arg1;
- (void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getVoiceRoamingStatus:(id)arg1;
- (id)dataRoamingSpecifiers;
- (id)cdmaRoamingSpecifiers;
- (void)reloadRoamingStatus;

@end
