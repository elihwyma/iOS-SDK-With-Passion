/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

#import <SafariServices/Swift-Protocol.h>

@class NSString, _UIAsyncInvocation;

@protocol _SFPasswordViewControllerDelegate;

@interface _SFPasswordViewController : UIViewController <Swift>

{
    _UIAsyncInvocation *_cancelViewServiceRequest;
    id <_SFPasswordViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFPasswordViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)_remoteViewController;
- (void)_addRemoteView;
- (void)_setUpServiceProxyIfNeeded;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)_addRemoteViewAsChild;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_connectToService;
- (void)_dismissPasswordViewController;
- (void)serviceProxyWillQueueInvocation:(id)arg1;

@end
