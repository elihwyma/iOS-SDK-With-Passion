/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKStoreReviewViewController;

@protocol SKRemoteReviewViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKRemoteReviewViewController : _UIRemoteViewController

{
    id <SKRemoteReviewViewControllerDelegate> _delegate;
    SKStoreReviewViewController *_reviewViewController;
}

@property (weak, nonatomic) id <SKRemoteReviewViewControllerDelegate> delegate;
@property (weak, nonatomic) SKStoreReviewViewController *reviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

@end
