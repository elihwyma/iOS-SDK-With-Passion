/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <PreferencesUI/PSUIPasscodeLockController.h>

@class NSString, PSEnrollContainerViewController, UIViewController;

__attribute__((visibility("hidden")))
@interface PSUIBiometricController : PSUIPasscodeLockController

{
    _Bool _currentlyEnablingTouchIDForPurchases;
    long long _storeState;
    PSEnrollContainerViewController *_enrollController;
    CDUnknownBlockType _modalFlowSuccessCompletion;
    CDUnknownBlockType _modalFlowCancelCompletion;
    UIViewController *_enrollmentPopoverController;
}

@property (nonatomic) long long storeState;
@property (weak, nonatomic) PSEnrollContainerViewController *enrollController;
@property (copy, nonatomic) CDUnknownBlockType modalFlowSuccessCompletion;
@property (copy, nonatomic) CDUnknownBlockType modalFlowCancelCompletion;
@property (nonatomic) _Bool currentlyEnablingTouchIDForPurchases;
@property (retain, nonatomic) UIViewController *enrollmentPopoverController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldPresentEnrollmentInPopover;

- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)didUnlock;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didCancelEnteringPIN;
- (id)authorizationToken;
- (void)setupBiometricLogoHeader;
- (void)enrollBiometric;
- (void)presentPasscodePaneFromSpecifier:(id)arg1;
- (_Bool)hasPasscodeAndBiometric;
- (_Bool)isTouchIDUnlockRestricted;
- (void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldRestrictFeaturesRequiringEnrollment;
- (void)updateStoreBiometricsState;
- (_Bool)isTouchIDForPurchasesRestricted;
- (_Bool)isTouchIDForStockholmRestricted;
- (_Bool)isBiometricEditingAllowed;
- (id)biometricLogo;
- (id)biometricTableViewHeader;
- (id)headerForUseBiometricSection;
- (void)setBiometricUnlockEnabled:(id)arg1 specifier:(id)arg2;
- (id)isTouchIDUnlockEnabled:(id)arg1;
- (void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2;
- (id)isTouchIDForPurchasesEnabled:(id)arg1;
- (void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2;
- (id)isTouchIDForStockholmEnabled:(id)arg1;
- (void)setSafariAutoFillEnabled:(id)arg1 specifier:(id)arg2;
- (id)safariAutoFillEnabled:(id)arg1;
- (_Bool)isSafariAutofillRestricted;
- (void)presentPopoverForContentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_passcodeControllerForSpecifier:(id)arg1;
- (void)presentPopoverForContentViewController:(id)arg1;
- (id)passcodeController;
- (void)_popEnrollmentController;
- (void)enrollmentControllerDidDismiss;
- (void)completeModalFlow;
- (void)cancelModalFlow;
- (void)updateTouchIDUnlockSpecifier;
- (void)updateTouchIDForPurchasesSpecifier;
- (void)updateTouchIDForStockholmSpecifier;
- (_Bool)isEnrollmentAvailable;
- (id)useBiometricForSpecifiers;
- (void)pushPasscodePane;
- (void)hideCancelButton;
- (void)enrollmentCompletedForIdentity:(id)arg1;

@end
