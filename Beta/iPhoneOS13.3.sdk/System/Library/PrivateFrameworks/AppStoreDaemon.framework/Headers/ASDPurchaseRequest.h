/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (copy, nonatomic, readonly) ASDPurchaseRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
