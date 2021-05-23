/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableRichNotification : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldSkipAccountCheck;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2;

@end
