/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/UIViewController.h>

@class PKAddPaymentPassRequestConfiguration, PKRemoteAddPaymentPassViewController, _UIAsyncInvocation;

@protocol PKAddPaymentPassViewControllerDelegate;

@interface PKAddPaymentPassViewController : UIViewController

{
    id <PKAddPaymentPassViewControllerDelegate> _delegate;
    PKAddPaymentPassRequestConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddPaymentPassViewController *_remoteVC;
}

@property (weak, nonatomic) id <PKAddPaymentPassViewControllerDelegate> delegate;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)canAddPaymentPass;

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
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;
- (void)_setRemoteVC:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
