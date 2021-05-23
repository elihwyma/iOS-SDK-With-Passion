/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKStoreProductActivityViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductActivityViewController : _UIRemoteViewController

{
    SKStoreProductActivityViewController *_productActivityViewController;
}

@property (weak, nonatomic) SKStoreProductActivityViewController *productActivityViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

@end
