/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, SKInvocationQueueProxy, SKRemoteProductActivityViewController, _SKStoreProductActivityAnimationController, _UIAsyncInvocation;

@protocol SKStoreProductActivityViewControllerDelegate, SKUIServiceProductActivityViewController;

@interface SKStoreProductActivityViewController : UIViewController

{
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteProductActivityViewController *_remoteViewController;
    NSDictionary *_parameters;
    _SKStoreProductActivityAnimationController *_animationController;
    id <SKStoreProductActivityViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SKStoreProductActivityViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_viewTapped:(id)arg1;

@end
