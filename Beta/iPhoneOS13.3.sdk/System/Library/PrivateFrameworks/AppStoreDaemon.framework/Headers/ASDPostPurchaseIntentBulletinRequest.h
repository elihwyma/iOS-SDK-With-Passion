/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDPostPurchaseIntentBulletinRequestOptions;

@interface ASDPostPurchaseIntentBulletinRequest : ASDEphemeralRequest

@property (copy, nonatomic, readonly) ASDPostPurchaseIntentBulletinRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
