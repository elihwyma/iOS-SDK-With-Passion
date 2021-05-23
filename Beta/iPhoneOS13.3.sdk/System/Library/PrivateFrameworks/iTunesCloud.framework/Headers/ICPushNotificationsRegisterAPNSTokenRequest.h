/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICPushNotificationsResponse, ICStoreRequestContext, NSData;

@interface ICPushNotificationsRegisterAPNSTokenRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    NSData *_token;
    ICPushNotificationsResponse *_response;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 token:(id)arg2;

@end
