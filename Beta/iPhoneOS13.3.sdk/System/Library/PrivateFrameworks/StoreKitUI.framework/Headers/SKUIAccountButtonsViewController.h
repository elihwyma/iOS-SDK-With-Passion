/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIAccountButtonsView, SKUIClientContext, SKUILink;

@protocol SKUIAccountButtonsDelegate;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsViewController : UIViewController <Swift>

{
    SKUIAccountButtonsView *_buttonsView;
    SKUIClientContext *_clientContext;
    id <SKUIAccountButtonsDelegate> _delegate;
    SKUILink *_ecommerceLink;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIAccountButtonsDelegate> delegate;
@property (retain, nonatomic) SKUILink *ECommerceLink;
@property (nonatomic, getter=isGiftingHidden) _Bool giftingHidden;
@property (nonatomic, getter=isTermsAndConditionsHidden) _Bool termsAndConditionsHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)_buttonsView;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_reloadAccountsButton;
- (void)_reloadRestrictions;
- (void)_sendDidSignIn;
- (void)_viewAppleID;
- (void)_signOut;
- (void)_openIForgot;
- (void)_ecommerceLinkAction:(id)arg1;
- (void)_giftAction:(id)arg1;
- (void)_redeemButtonAction:(id)arg1;
- (void)_termsAndConditionsButtonAction:(id)arg1;
- (void)_usernameButtonAction:(id)arg1;
- (void)_signInButtonAction:(id)arg1;

@end
