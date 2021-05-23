/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSURL, SKInvocationQueueProxy, SKRemoteComposeReviewViewController, _UIAsyncInvocation;

@protocol SKComposeReviewDelegate, SKUIServiceComposeReviewViewController;

@interface SKComposeReviewViewController : UIViewController

{
    _UIAsyncInvocation *_cancelRequest;
    NSURL *_compositionURL;
    CDUnknownBlockType _prepareBlock;
    SKRemoteComposeReviewViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> *_serviceProxy;
    id <SKComposeReviewDelegate> _delegate;
}

@property (weak, nonatomic) id <SKComposeReviewDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_addRemoteView;
- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(_Bool)arg1 error:(id)arg2;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithCompositionURL:(id)arg1;
- (void)_tearDownAfterError:(id)arg1;

@end
