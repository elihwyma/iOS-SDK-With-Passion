/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKit/AKAppleIDAuthenticationContext.h>

#import <AuthKitUI/Swift-Protocol.h>

@class AAUICDPStingrayRemoteUIController, AKAppleIDServerUIContextController, AKBasicLoginAlertController, AKNativeAccountRecoveryController, NSHTTPURLResponse, NSString, RUIObjectModel, RemoteUIController, UINavigationController, UIViewController;

@protocol AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, CDPStateUIProvider;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <Swift>

{
    UIViewController *_topViewControllerOnLoadStart;
    _Bool _overrideFirstActionSignal;
    AKBasicLoginAlertController *_basicLoginViewController;
    UINavigationController *_navController;
    UINavigationController *_modalRemoteUINavController;
    RemoteUIController *_remoteUIController;
    RUIObjectModel *_currentRemoteOM;
    AKAppleIDServerUIContextController *_serverUIContextController;
    NSHTTPURLResponse *_deferredResponse;
    AKNativeAccountRecoveryController *_nativeRecoveryController;
    AAUICDPStingrayRemoteUIController *_stingrayController;
    _Bool _forceInlinePresentation;
    _Bool _presentingServerUI;
    UIViewController *_presentingViewController;
    id <AKAppleIDAuthenticationInAppContextDelegate> _delegate;
    id <AKAppleIDAuthenticationInAppContextAlertDelegate> _alertDelegate;
    id <CDPStateUIProvider> _cdpUiProvider;
    id <AKAppleIDAuthenticationInAppContextPasswordDelegate> __passwordDelegate;
}

@property (nonatomic, getter=isPresentingServerUI) _Bool presentingServerUI;
@property (weak, nonatomic) id <AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate;
@property (retain, nonatomic, setter=_setCdpUiProvider:) id <CDPStateUIProvider> cdpUiProvider;
@property (weak, nonatomic, setter=_setPasswordDelegate:) id <AKAppleIDAuthenticationInAppContextPasswordDelegate> _passwordDelegate;
@property (nonatomic) _Bool forceInlinePresentation;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id <AKAppleIDAuthenticationInAppContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)completeWithError:(id)arg1;
- (id)_navController;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (id)_remoteUIController;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissKeepUsingUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)serverDataHarvester;
- (void)_assertValidPresentingViewController;
- (id)remoteUIStyle;
- (void)willPresentModalNavigationController:(id)arg1;
- (void)basicLoginAlertControllerDidPresent:(id)arg1;
- (void)basicLoginAlertControllerWillDismiss:(id)arg1;
- (void)basicLoginAlertControllerDidDismiss:(id)arg1;
- (void)_presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_presentBasicLoginUIAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_contextWillBeginPresentingSecondaryUI;
- (void)_presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentIDPProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanUpBasicLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)_contextWillDismissLoginAlertController;
- (void)_contextDidPresentLoginController;
- (_Bool)_isDeferrableFinalResponseHarvested;
- (void)_handleBackButtonTap:(id)arg1;
- (void)_contextDidDismissLoginAlertController;
- (_Bool)_isSatisfyingPasswordRequirements;

@end
