/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableFollowUp : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldSkipAccountCheck;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2;
+ (_Bool)_shouldAllowFollowUp:(id)arg1;
+ (_Bool)_shouldClearFollowUpFromPayload:(id)arg1;
+ (_Bool)isDeviceOfferNotification:(id)arg1;
+ (void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bag:(id)arg3;
+ (void)_performClearWithPayload:(id)arg1;
+ (void)_performPostWithPayload:(id)arg1;
+ (id)_createFollowUpItemFromNotification:(id)arg1;
+ (id)_createFollowUpItemFromPayload:(id)arg1;
+ (id)_createNotificationFromFollowUpItem:(id)arg1;

@end
