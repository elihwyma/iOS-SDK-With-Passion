/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSAuthenticationContext;

@interface SSVSubscriptionStatusRequest : SSRequest

{
    _Bool _authenticatesIfNecessary;
    SSAuthenticationContext *_authenticationContext;
    long long _carrierBundleProvisioningStyle;
    NSString *_localizedAuthenticationReason;
    NSString *_reason;
}

@property (nonatomic) _Bool authenticatesIfNecessary;
@property (copy, nonatomic) NSString *localizedAuthenticationReason;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_allowMultipleCallbacks;
+ (long long)requestMessage;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithStatusResponseBlock:(CDUnknownBlockType)arg1;

@end
