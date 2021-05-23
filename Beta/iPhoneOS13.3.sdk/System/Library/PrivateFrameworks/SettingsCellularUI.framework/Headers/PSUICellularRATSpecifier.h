/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSConfirmationSpecifier, PSListController, PSListItemsController;

__attribute__((visibility("hidden")))
@interface PSUICellularRATSpecifier : PSSpecifier

{
    PSListController *_hostController;
    PSSpecifier *_mobileDataGroup;
    int _RATSwitchKind;
    _Bool _3GOverrideTo4G;
    _Bool _LTEOverrideTo4G;
    _Bool _supports2G;
    _Bool _supports3G;
    _Bool _supports4G;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListItemsController *_RATModeDrilldownController;
    PSConfirmationSpecifier *_warning;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (retain, nonatomic) PSConfirmationSpecifier *warning;
@property (weak, nonatomic) PSListItemsController *RATModeDrilldownController;

- (_Bool)updateState;
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (id)getRATModeState:(id)arg1;
- (void)updateRATState;
- (_Bool)shouldShowLTEOptions;
- (_Bool)shouldShowLegacyRATOptions;
- (_Bool)_updateMobileDataGroupContentShowingRAT:(_Bool)arg1;
- (void)_setRATModeIgnoreCall:(int)arg1;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)acceptedRATSwitchDuringCall:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (void)showVoLTECanCauseIssues;
- (void)_setRATModeConfirmed:(int)arg1;
- (_Bool)supportsVoLTE;
- (unsigned long long)_getLTEService;
- (_Bool)doesMatchMaxRAT:(long long)arg1;
- (id)getLTEService:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (id)getRATSwitchIsOn:(id)arg1;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (void)updateRATSpecifiers;
- (void)acceptedRATSwitch:(id)arg1;
- (void)reloadRATStatus:(id)arg1;

@end
