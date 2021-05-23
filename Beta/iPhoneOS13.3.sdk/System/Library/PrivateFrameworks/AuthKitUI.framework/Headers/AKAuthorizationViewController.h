/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIViewController.h>

@class AKAuthorizationNavigationController, AKAuthorizationPresentationContext, AKAuthorizationScopeChoices, NSString;

@protocol AKAuthorizationViewControllerDelegate;

@interface AKAuthorizationViewController : UIViewController

{
    AKAuthorizationPresentationContext *_presentationContext;
    id <AKAuthorizationViewControllerDelegate> _delegate;
    AKAuthorizationNavigationController *_navigationController;
    AKAuthorizationScopeChoices *_scopeChoices;
}

@property (nonatomic, readonly) AKAuthorizationNavigationController *navigationController;
@property (nonatomic, readonly) AKAuthorizationScopeChoices *scopeChoices;
@property (nonatomic, readonly) AKAuthorizationPresentationContext *presentationContext;
@property (weak, nonatomic) id <AKAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_backBarButtonItem;
- (id)_cancelBarButtonItem;
- (long long)modalPresentationStyle;
- (void)authorizationPaneViewController:(id)arg1 didRequestIconWithCompletion:(CDUnknownBlockType)arg2;
- (void)performPasswordAuthenticationForPaneViewController:(id)arg1;
- (void)authorizationPaneViewController:(id)arg1 pushEditScope:(id)arg2 presentationContext:(id)arg3 options:(id)arg4;
- (void)authorizationPaneViewController:(id)arg1 dismissWithAuthorization:(id)arg2 error:(id)arg3;
- (void)authorizationPaneViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authorizationContainerViewControllerDidDismiss:(id)arg1;
- (void)_presentAuthorizationViewController;
- (_Bool)_isFirstTimeAppleIDAuthorization;
- (void)_presentFirstTimeViewController;
- (void)_presentConfirmPaneViewControllerReplacing:(_Bool)arg1;
- (id)firstTimeViewController;
- (id)passwordRequestController;
- (void)_presentContainerViewControllerWith:(id)arg1;
- (id)confirmPaneViewController;
- (void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)arg1 error:(id)arg2;
- (id)_logoBarButtonItem:(id)arg1;
- (void)_cancelButtonSelected:(id)arg1;
- (void)_backButtonSelected:(id)arg1;
- (void)presentConfirmPaneViewController;
- (void)performAppleIDAuthorizationForPaneViewController:(id)arg1;
- (id)initWithAuthorizationContext:(id)arg1;
- (void)presentAuthenticationChoiceUIWithCompletion:(CDUnknownBlockType)arg1;

@end
