/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKAuthenticateHostViewController, NSError, NSString;

@interface GKHostedAuthenticateViewController : UIViewController

{
    _Bool _disablesSignIn;
    _Bool _rotationLocked;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    CDUnknownBlockType _remoteViewReadyHandler;
    NSString *_lastPersonalizationVersionDisplayed;
    unsigned long long _lastPrivacyNoticeVersionDisplayed;
    GKAuthenticateHostViewController *_extensionHostViewController;
    long long _mode;
    CDUnknownBlockType _dismissCompletionHandler;
}

@property (retain, nonatomic) GKAuthenticateHostViewController *extensionHostViewController;
@property (nonatomic) long long mode;
@property (copy, nonatomic) CDUnknownBlockType dismissCompletionHandler;
@property (nonatomic, getter=isRotationLocked) _Bool rotationLocked;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType remoteViewReadyHandler;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool disablesSignIn;

+ (_Bool)_preventsAppearanceProxyCustomization;

- (id)init;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)_setupChildViewController;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)continueWithMode:(long long)arg1;
- (void)onboardingFlowDidSignOut;
- (void)_setupExtensionHostViewController;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)showPasswordChangeAlertWithURL:(id)arg1;

@end
