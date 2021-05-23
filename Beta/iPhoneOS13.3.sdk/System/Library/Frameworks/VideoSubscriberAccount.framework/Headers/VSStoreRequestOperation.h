/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class SSRequest, VSOptional, VSStoreRequest;

@interface VSStoreRequestOperation : VSAsyncOperation

{
    int _requestCompletionFlag;
    VSStoreRequest *_request;
    VSOptional *_result;
    SSRequest *_storeServicesRequest;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) SSRequest *storeServicesRequest;
@property (copy, nonatomic) VSStoreRequest *request;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (_Bool)_isFirstToFinish;

@end
