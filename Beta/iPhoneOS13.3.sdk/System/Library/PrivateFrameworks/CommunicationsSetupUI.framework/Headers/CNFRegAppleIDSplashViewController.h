/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSAppleIDSplashViewController.h>

@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController

{
    _Bool _showBusyUIOnAppearance;
    CNFRegController *_regController;
    long long _serviceType;
}

@property (retain) CNFRegController *regController;
@property long long serviceType;
@property _Bool showBusyUIOnAppearance;

+ (_Bool)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id *)arg2;
+ (id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1;

- (void)dealloc;
- (id)serviceName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_applicationDidResume:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (id)serviceDescription;
- (id)serviceIcon;
- (id)_imService;
- (void)continueRegisteringAccount:(id)arg1;
- (id)_iCloudUserName;
- (void)_handleRegistarResults:(_Bool)arg1 alertController:(id)arg2;
- (void)_showSettingsController;
- (void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2;
- (void)_completeIfAccountIsAlreadyRegistered;

@end
