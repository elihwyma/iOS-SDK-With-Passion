/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSAuditToken, VSOptional;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation

{
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSOperationQueue *_privateQueue;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;

@end
