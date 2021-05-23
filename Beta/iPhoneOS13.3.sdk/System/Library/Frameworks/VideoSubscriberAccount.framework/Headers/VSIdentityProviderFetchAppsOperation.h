/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSAuditToken, VSOptional;

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation

{
    VSOptional *_identityProviderID;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSOperationQueue *_privateQueue;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSOptional *identityProviderID;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;

@end
