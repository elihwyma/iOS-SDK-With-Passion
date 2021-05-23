/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIViewController.h>

@class PKPaymentSetupRequest, PKPaymentSetupViewController;

@protocol SUPaymentSetupViewControllerDelegate;

@interface SUPaymentSetupViewController : UIViewController

{
    id <SUPaymentSetupViewControllerDelegate> _delegate;
    PKPaymentSetupRequest *_paymentSetupRequest;
    PKPaymentSetupViewController *_childViewController;
}

@property (retain, nonatomic) PKPaymentSetupViewController *childViewController;
@property (weak, nonatomic) id <SUPaymentSetupViewControllerDelegate> delegate;
@property (nonatomic, readonly) PKPaymentSetupRequest *paymentSetupRequest;

- (void)_setup;
- (void)loadView;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithPaymentSetupRequest:(id)arg1;

@end
