/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SKComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController

{
    SKComposeReviewViewController *_composeReviewViewController;
}

@property (weak, nonatomic) SKComposeReviewViewController *composeReviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)promptForStarRating;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;

@end
