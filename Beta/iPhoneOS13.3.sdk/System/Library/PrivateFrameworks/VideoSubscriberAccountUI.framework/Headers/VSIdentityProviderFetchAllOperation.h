/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSAuditToken, VSDevice, VSOptional;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation

{
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSOperationQueue *_subqueue;
    VSDevice *_currentDevice;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *subqueue;
@property (retain, nonatomic) VSDevice *currentDevice;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)executionDidBegin;

@end
