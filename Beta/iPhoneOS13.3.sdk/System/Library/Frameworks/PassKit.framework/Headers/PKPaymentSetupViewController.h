/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/UIViewController.h>

@class PKPaymentSetupRequest, PKRemotePaymentSetupViewController, UIActivityIndicatorView, UIButton, UILabel, _UIAsyncInvocation;

@interface PKPaymentSetupViewController : UIViewController

{
    PKRemotePaymentSetupViewController *_remoteVC;
    PKPaymentSetupRequest *_paymentSetupRequest;
    _UIAsyncInvocation *_remoteVCRequest;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
    UIButton *_cancelButton;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)modalPresentationStyle;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)modalTransitionStyle;
- (id)initWithPaymentSetupRequest:(id)arg1;
- (void)_cancelTapped;
- (void)_setRemoteVC:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)paymentSetupDidFinish;
- (void)_hideLoadingContent;

@end
