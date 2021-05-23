/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AKAppleIDAuthenticationController, UIViewController;

@protocol AAUIDeviceToDeviceEncryptionHelperDelegate;

@interface AAUIDeviceToDeviceEncryptionHelper : NSObject

{
    UIViewController *_presentingViewController;
    id <AAUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
    AKAppleIDAuthenticationController *_authController;
}

@property (retain, nonatomic) AKAppleIDAuthenticationController *authController;
@property (weak, nonatomic, readonly) UIViewController *presentingViewController;
@property (weak, nonatomic) id <AAUIDeviceToDeviceEncryptionHelperDelegate> delegate;

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

@end
