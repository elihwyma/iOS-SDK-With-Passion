/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSString, VSAuditToken, VSOptional;

@interface VSIdentityProviderFetchOperation : VSAsyncOperation

{
    _Bool _fetchFromStoreOnly;
    NSString *_identityProviderID;
    NSString *_identityProviderUniqueID;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSOperationQueue *_privateQueue;
}

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSString *identityProviderID;
@property (nonatomic) _Bool fetchFromStoreOnly;
@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic, readonly) NSString *identityProviderUniqueID;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithIdentityProviderID:(id)arg1;
- (id)_fetchAllOperation;
- (id)initWithIdentityProviderUniqueID:(id)arg1;

@end
