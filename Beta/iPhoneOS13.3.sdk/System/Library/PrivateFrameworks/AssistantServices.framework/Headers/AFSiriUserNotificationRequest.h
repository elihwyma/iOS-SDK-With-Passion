/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject

{
    UNNotification *_notification;
    NSString *_sourceAppId;
}

+ (_Bool)canBeHandled;
+ (_Bool)supportedOnPlatform;
+ (_Bool)supportedForApplicationWithBundleId:(id)arg1;

- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;

@end
