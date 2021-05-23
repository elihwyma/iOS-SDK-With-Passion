/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTCarrierSpaceCapabilities, NSString, PSListController, PSSpecifier, PSUICarrierSpaceOptInSplashScreen, RemoteUIController;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceGroup : NSObject

{
    RemoteUIController *_remoteUIController;
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_parentSpecifier;
    CTCarrierSpaceCapabilities *_capabilities;
    PSUICarrierSpaceOptInSplashScreen *_optInSplashScreen;
}

@property (retain, nonatomic) RemoteUIController *remoteUIController;
@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) CTCarrierSpaceCapabilities *capabilities;
@property (retain, nonatomic) PSUICarrierSpaceOptInSplashScreen *optInSplashScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)newCarrierNotification;
- (void)openURLWithSpecifier:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;
- (void)carrierSpaceChanged;
- (id)descriptionForPlans:(id)arg1;
- (void)showConsentFlow:(id)arg1;
- (id)descriptionForUsage:(id)arg1;
- (id)carrierServicesSpecifier;
- (void)showTermsAndConditions:(id)arg1 consentFlowInfo:(id)arg2;
- (void)agreePressed;
- (void)disagreeOrCancelPressed;

@end
