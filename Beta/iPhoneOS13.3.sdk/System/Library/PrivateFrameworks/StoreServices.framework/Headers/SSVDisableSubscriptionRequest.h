/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSAuthenticationContext;

@interface SSVDisableSubscriptionRequest : SSRequest

{
    SSAuthenticationContext *_authenticationContext;
}

@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
