/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBAbstractDefaults.h>

@class SBBiometricKitDefaults, SBExternalDemoDefaults, SBExternalDuetDefaults, SBExternalGlobalDefaults, SBExternalNotesDefaults, SBExternalPhoneDefaults, SBExternalSettingsDefaults, SBExternalSetupDefaults, SBExternalSoundsDefaults, SBExternalWifiDefaults;

@interface SBExternalDefaults : SBAbstractDefaults

{
    SBExternalGlobalDefaults *_lazy_globalDefaults;
    SBExternalDuetDefaults *_lazy_duetDefaults;
    SBExternalDemoDefaults *_lazy_demoDefaults;
    SBExternalSetupDefaults *_lazy_setupDefaults;
    SBExternalSettingsDefaults *_lazy_settingsDefaults;
    SBExternalPhoneDefaults *_lazy_phoneDefaults;
    SBExternalWifiDefaults *_lazy_networkDefaults;
    SBExternalSoundsDefaults *_lazy_soundDefaults;
    SBExternalNotesDefaults *_lazy_notesDefaults;
    SBBiometricKitDefaults *_lazy_biometricKitDefaults;
}

@property (retain, nonatomic, readonly) SBExternalGlobalDefaults *globalDefaults;
@property (retain, nonatomic, readonly) SBExternalDuetDefaults *duetDefaults;
@property (retain, nonatomic, readonly) SBExternalDemoDefaults *demoDefaults;
@property (retain, nonatomic, readonly) SBExternalSetupDefaults *setupDefaults;
@property (retain, nonatomic, readonly) SBExternalSettingsDefaults *settingsDefaults;
@property (retain, nonatomic, readonly) SBExternalPhoneDefaults *phoneDefaults;
@property (retain, nonatomic, readonly) SBExternalWifiDefaults *networkDefaults;
@property (retain, nonatomic, readonly) SBExternalSoundsDefaults *soundDefaults;
@property (retain, nonatomic, readonly) SBExternalNotesDefaults *notesDefaults;
@property (retain, nonatomic, readonly) SBBiometricKitDefaults *biometricKitDefaults;

@end
