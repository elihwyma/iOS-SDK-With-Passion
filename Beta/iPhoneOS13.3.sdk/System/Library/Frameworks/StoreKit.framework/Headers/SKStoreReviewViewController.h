/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSString, SKInvocationQueueProxy, SKRemoteReviewViewController, _UIAsyncInvocation;

@protocol SKUIServiceReviewViewController;

__attribute__((visibility("hidden")))
@interface SKStoreReviewViewController : UIViewController

{
    SKInvocationQueueProxy<SKUIServiceReviewViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteReviewViewController *_remoteViewController;
    NSString *_reviewRequestToken;
}

@property (retain, nonatomic) SKInvocationQueueProxy<SKUIServiceReviewViewController> *serviceProxy;
@property (retain, nonatomic) _UIAsyncInvocation *cancelRequest;
@property (retain, nonatomic) SKRemoteReviewViewController *remoteViewController;
@property (retain, nonatomic) NSString *reviewRequestToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)remoteReviewViewControllerTerminatedWithError:(id)arg1;
- (id)initWithReviewRequestToken:(id)arg1;

@end
