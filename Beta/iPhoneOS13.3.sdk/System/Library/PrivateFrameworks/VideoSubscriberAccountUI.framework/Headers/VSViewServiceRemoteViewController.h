/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol VSViewServiceRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceRemoteViewController : _UIRemoteViewController

{
    id <VSViewServiceRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <VSViewServiceRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_dismissViewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_presentViewController;
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;
- (void)_didCancelRequest:(id)arg1;
- (void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(CDUnknownBlockType)arg2;

@end
