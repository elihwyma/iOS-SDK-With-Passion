/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKStoreProductViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductViewController : _UIRemoteViewController

{
    SKStoreProductViewController *_productViewController;
}

@property (weak, nonatomic) SKStoreProductViewController *productViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;
- (void)didFinish;
- (void)didFinishWithResult:(id)arg1;
- (void)didFinishDismissal;
- (void)didReceiveTitle:(id)arg1;
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;
- (void)promptForStarRating;

@end
