/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSPurchaseIntentActionRequest : SSRequest

{
    NSString *_appBundleId;
    unsigned long long _action;
}

@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) unsigned long long action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
