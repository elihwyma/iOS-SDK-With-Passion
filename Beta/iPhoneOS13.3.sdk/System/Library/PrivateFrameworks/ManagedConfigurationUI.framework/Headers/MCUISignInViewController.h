/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCSectionBasedTableViewController.h>

@class AKAppleIDAuthenticationInAppContext, MCSignInPageAuthenticationSectionController, MCSignInPageTitleSectionController, NSString;

@protocol MCUISignInViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCUISignInViewController : MCSectionBasedTableViewController

{
    _Bool _signInButtonTapped;
    _Bool _authenticationFinished;
    id <MCUISignInViewControllerDelegate> _delegate;
    MCSignInPageTitleSectionController *_titleSectionController;
    MCSignInPageAuthenticationSectionController *_authSectionController;
}

@property (nonatomic) _Bool signInButtonTapped;
@property (nonatomic) _Bool authenticationFinished;
@property (retain, nonatomic) MCSignInPageTitleSectionController *titleSectionController;
@property (retain, nonatomic) MCSignInPageAuthenticationSectionController *authSectionController;
@property (weak, nonatomic) id <MCUISignInViewControllerDelegate> delegate;
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) NSString *orgName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)signInViewController:(id)arg1 willPerformAuthenticationWithContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;

@end
