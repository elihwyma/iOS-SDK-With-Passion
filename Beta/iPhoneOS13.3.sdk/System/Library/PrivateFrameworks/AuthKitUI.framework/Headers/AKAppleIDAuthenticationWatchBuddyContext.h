/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class NSString, RUIStyle;

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext

{
    NSString *_password;
    RUIStyle *_remoteUIStyle;
}

@property (retain, nonatomic) RUIStyle *remoteUIStyle;
@property (retain, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willPresentModalNavigationController:(id)arg1;

@end
