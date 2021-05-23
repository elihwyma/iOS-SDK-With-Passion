/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, NSUUID, VSOptional, VSViewServiceHostViewController, VSViewServiceRequest;

@protocol VSViewServiceRequestOperationDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequestOperation : VSAsyncOperation

{
    _Bool _isPresentingViewController;
    VSViewServiceRequest *_viewServiceRequest;
    id <VSViewServiceRequestOperationDelegate> _delegate;
    VSOptional *_result;
    VSViewServiceHostViewController *_viewServiceHostViewController;
    NSUUID *_requestID;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSViewServiceHostViewController *viewServiceHostViewController;
@property (copy, nonatomic) NSUUID *requestID;
@property (copy, nonatomic, readonly) VSViewServiceRequest *viewServiceRequest;
@property (weak, nonatomic) id <VSViewServiceRequestOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)_dismissViewController;
- (void)_presentViewController;
- (void)finishExecutionIfPossible;
- (void)executionDidBegin;
- (void)_dismissViewControllerIfRequired;
- (void)presentViewServiceHostViewController:(id)arg1;
- (void)dismissViewServiceHostViewController:(id)arg1;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
- (_Bool)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;
- (id)initWithViewServiceRequest:(id)arg1;

@end
