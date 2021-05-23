/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class NSDictionary, NSString, UINavigationController, UIViewController;

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext

{
    NSDictionary *_overrideFirstActionSignal;
    UIViewController *_topViewControllerOnLoadStart;
    UINavigationController *_navigationController;
}

@property (weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic, readonly) NSString *usernameForCreating;
@property (nonatomic, readonly) NSString *passwordForCreating;

- (id)init;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;

@end
