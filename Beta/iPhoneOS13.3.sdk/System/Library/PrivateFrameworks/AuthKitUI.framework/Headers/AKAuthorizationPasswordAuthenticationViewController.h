/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@class AKAuthorizationPresentationContext, AKModalSignInViewController, NSString;

@protocol AKAuthorizationPasswordAuthenticationDelegate;

@interface AKAuthorizationPasswordAuthenticationViewController

{
    AKModalSignInViewController *_modalSignInViewController;
    double _keyboardHeight;
    id <AKAuthorizationPasswordAuthenticationDelegate> _delegate;
    AKAuthorizationPresentationContext *_presentationContext;
}

@property (weak, nonatomic) id <AKAuthorizationPasswordAuthenticationDelegate> delegate;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_username;
- (void)viewDidLoad;
- (void)keyboardDidShow:(id)arg1;
- (double)intrinsicContentHeight;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (id)_contextForAuthentication;
- (void)sizeToFitPaneContentAnimated:(_Bool)arg1;

@end
