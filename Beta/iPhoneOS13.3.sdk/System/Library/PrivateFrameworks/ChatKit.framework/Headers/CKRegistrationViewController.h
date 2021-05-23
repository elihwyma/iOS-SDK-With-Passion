/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class AKTapToSignInViewController, NSString;

@interface CKRegistrationViewController : UIViewController

{
    CDUnknownBlockType _completionBlock;
    AKTapToSignInViewController *_akSignInVC;
}

@property (retain, nonatomic) AKTapToSignInViewController *akSignInVC;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldShowAuthKitSignIn;
+ (id)_inProgressRegisteringNonPhoneAccount;
+ (_Bool)shouldShowRegistration;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canBecomeFirstResponder;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (id)accountRegistrar;
- (void)_handleRegistrarCompletion:(_Bool)arg1 errorAlertController:(id)arg2;
- (void)updateInsetsForKeyboardFrame:(struct CGRect)arg1;
- (void)setErrorPresentationViewController:(id)arg1;

@end
