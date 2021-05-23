/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationResponse.h>

@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse

{
    NSString *_userText;
}

@property (copy, nonatomic, readonly) NSString *userText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 userText:(id)arg5;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;

@end
