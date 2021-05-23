/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <Foundation/NSObject.h>

@class AKAppleIDAuthenticationController, UIViewController;

@protocol CDPUIDeviceToDeviceEncryptionHelperDelegate;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject

{
    UIViewController *_presentingViewController;
    id <CDPUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
    AKAppleIDAuthenticationController *_authController;
}

@property (retain, nonatomic) AKAppleIDAuthenticationController *authController;
@property (weak, nonatomic, readonly) UIViewController *presentingViewController;
@property (weak, nonatomic) id <CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate;

- (id)initWithPresentingViewController:(id)arg1;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_encryptionErrorFromError:(id)arg1;
- (_Bool)_isHSA2AvailableForAuthenticationContext:(id)arg1;
- (void)_validateCDPStateForAuthResults:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_authenticateContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validatePasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPasscode;
- (void)_executeSyncOnMainThreadIfNeeded:(CDUnknownBlockType)arg1;
- (id)_cdpStateControllerWithAuthResults:(id)arg1;
- (id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;
- (id)_cdpStateControllerWithContext:(id)arg1;
- (void)_configurePresentingViewControllerForModalPresentation;

@end
