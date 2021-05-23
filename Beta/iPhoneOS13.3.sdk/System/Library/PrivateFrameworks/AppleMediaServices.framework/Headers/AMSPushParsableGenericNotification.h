/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableGenericNotification : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (_Bool)_shouldPresentAlertForPayload:(id)arg1;
+ (id)_generateDialogRequestFromPayload:(id)arg1 config:(id)arg2;
+ (id)_generateNotificationFromPayload:(id)arg1 config:(id)arg2;

@end
