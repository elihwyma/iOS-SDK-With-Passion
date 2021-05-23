/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSVPushNotificationParameters;

@interface SSVPushNotificationRequest : SSRequest

{
    SSVPushNotificationParameters *_parameters;
}

@property (copy, nonatomic) SSVPushNotificationParameters *pushNotificationParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)start;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithPushNotificationParameters:(id)arg1;

@end
