/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, NSMutableArray, NSString, RUILoader, UINavigationController, UIViewController;

@protocol AAUIGenericTermsRemoteUIDelegate;

@interface AAUIGenericTermsRemoteUI : NSObject

{
    UINavigationController *_parentNavController;
    UIViewController *_originatingViewController;
    UINavigationController *_genericTermsUIViewController;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    _Bool _isModal;
    _Bool _isPreferringPassword;
    id <AAUIGenericTermsRemoteUIDelegate> _delegate;
}

@property (weak, nonatomic) id <AAUIGenericTermsRemoteUIDelegate> delegate;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_cancelButtonTapped:(id)arg1;
- (id)viewControllerForAlertPresentation;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)sessionConfigurationForLoader:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModelPressedBack:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;
- (void)presentFromViewController:(id)arg1 modal:(_Bool)arg2;
- (void)_loadRequestPreferringPassword:(_Bool)arg1;
- (void)_cleanUpAndDismissWithSuccess:(_Bool)arg1 agreeURL:(id)arg2;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (void)_cleanupRUILoader;
- (_Bool)_isUnauthorizedError:(id)arg1;
- (void)_displayConnectionErrorAndDismiss;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
