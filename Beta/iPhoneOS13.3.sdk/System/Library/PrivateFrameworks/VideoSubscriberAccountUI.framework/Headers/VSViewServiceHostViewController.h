/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;

@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController

{
    _Bool _hasRetriedOnce;
    _Bool _hasRequestedPresentation;
    id <VSViewServiceHostViewControllerDelegate> _delegate;
    NSMutableDictionary *_requestsByID;
    VSOptional *_currentRequest;
    VSViewServiceRemoteViewController *_remoteViewController;
    VSViewControllerFactory *_viewControllerFactory;
}

@property (retain, nonatomic) NSMutableDictionary *requestsByID;
@property (retain, nonatomic) VSOptional *currentRequest;
@property (retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController;
@property (nonatomic) _Bool hasRetriedOnce;
@property (nonatomic) _Bool hasRequestedPresentation;
@property (retain, nonatomic) VSViewControllerFactory *viewControllerFactory;
@property (weak, nonatomic) id <VSViewServiceHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)_cancelButtonPressed:(id)arg1;
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;
- (void)_didCancelRequest:(id)arg1;
- (void)_connectToViewServiceForRequest:(id)arg1;
- (id)_requestForID:(id)arg1;
- (void)_didCompleteRequest:(id)arg1;
- (void)_presentViewServiceHostViewController;
- (void)_addRemoteViewControllerAsChildViewController;
- (void)_dismissViewServiceHostViewController;
- (void)_removeRemoteViewControllerAsChildViewController;
- (_Bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;
- (void)presentViewServiceRemoteViewController:(id)arg1;
- (void)dismissViewServiceRemoteViewController:(id)arg1;
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;

@end
