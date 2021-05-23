/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKStorePageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteStorePageViewController : _UIRemoteViewController

{
    SKStorePageViewController *_storePageViewController;
}

@property (weak, nonatomic) SKStorePageViewController *storePageViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)showProductPageWithItemIdentifier:(id)arg1;

@end
