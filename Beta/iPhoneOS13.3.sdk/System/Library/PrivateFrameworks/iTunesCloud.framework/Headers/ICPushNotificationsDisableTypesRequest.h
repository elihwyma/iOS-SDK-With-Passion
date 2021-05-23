/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICPushNotificationsResponse, ICStoreRequestContext, NSString;

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    ICPushNotificationsResponse *_response;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 notificationType:(id)arg2;

@end
