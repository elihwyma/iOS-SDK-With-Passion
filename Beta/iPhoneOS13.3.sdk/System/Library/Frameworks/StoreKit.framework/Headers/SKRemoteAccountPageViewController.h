/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKAccountPageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteAccountPageViewController : _UIRemoteViewController

{
    SKAccountPageViewController *_accountPageViewController;
}

@property (weak, nonatomic) SKAccountPageViewController *accountPageViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)disconnect;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)didFinishLoading;
- (void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;
- (void)financeInterruptionResolved:(_Bool)arg1;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)overrideRedeemCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBridgedNavigationItemWithOptions:(id)arg1;
- (void)pushBridgedViewControllerAnimated:(_Bool)arg1 options:(id)arg2;
- (void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)presentBridgedViewController;
- (void)dismissBridgedViewController;

@end
