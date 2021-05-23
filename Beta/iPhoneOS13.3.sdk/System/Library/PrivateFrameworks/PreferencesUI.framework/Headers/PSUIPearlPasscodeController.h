/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <PreferencesUI/PSUIBiometricController.h>

@class LAContext, NSString, OBPrivacyPresenter, PSEnrollmentNavigationController, PSSpecifier, PSUIPearlAttentionGroupController;

__attribute__((visibility("hidden")))
@interface PSUIPearlPasscodeController : PSUIBiometricController

{
    PSSpecifier *_enrollFaceSpecifier;
    PSEnrollmentNavigationController *_enrollFaceController;
    PSUIPearlAttentionGroupController *_attentionGroupController;
    LAContext *_authContext;
    OBPrivacyPresenter *_presenter;
    PSSpecifier *_currentlyPresentingPearlEnrollSpecifier;
}

@property (retain, nonatomic) PSSpecifier *enrollFaceSpecifier;
@property (retain, nonatomic) PSEnrollmentNavigationController *enrollFaceController;
@property (retain, nonatomic) PSUIPearlAttentionGroupController *attentionGroupController;
@property (retain, nonatomic) LAContext *authContext;
@property (retain, nonatomic) OBPrivacyPresenter *presenter;
@property (retain) PSSpecifier *currentlyPresentingPearlEnrollSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enroll:(id)arg1;
- (_Bool)passcodeViewControllerAllowSkip:(id)arg1;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (_Bool)isEnrolled;
- (void)enrollBiometric;
- (id)biometricLogo;
- (id)biometricTableViewHeader;
- (id)headerForUseBiometricSection;
- (void)setBiometricUnlockEnabled:(id)arg1 specifier:(id)arg2;
- (id)passcodeController;
- (_Bool)isEnrollmentAvailable;
- (void)pushPasscodePane;
- (void)backgrounded:(id)arg1;
- (void)popPearlEnrollmentController;
- (void)deleteAllIdentities;
- (unsigned long long)numberOfAppsUsingPearl;
- (id)numberOfAppsUsingPearlDescription:(id)arg1;
- (id)pearlEnrollSpecifiers;
- (void)pearlLearnMoreTapped:(id)arg1;

@end
