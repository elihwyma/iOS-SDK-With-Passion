/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSAuthenticationContext;

@interface SSVRefreshSubscriptionRequest : SSRequest

{
    SSAuthenticationContext *_authenticationContext;
    _Bool _requestingOfflineSlot;
}

@property (nonatomic, getter=isRequestingOfflineSlot) _Bool requestingOfflineSlot;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;

@end
