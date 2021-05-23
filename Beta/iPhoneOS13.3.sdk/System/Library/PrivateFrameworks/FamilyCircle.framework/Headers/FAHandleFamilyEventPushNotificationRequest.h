/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest

{
    NSDictionary *_payload;
}

@property (readonly) NSDictionary *payload;

- (id)initWithPayload:(id)arg1;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
