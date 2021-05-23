/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, NSString, UNNotification;

@interface UNNotificationResponse : NSObject

{
    UNNotification *_notification;
    NSString *_actionIdentifier;
    NSString *_originIdentifier;
    BSServiceConnectionEndpoint *_targetConnectionEndpoint;
    NSString *_targetSceneIdentifier;
}

@property (copy, nonatomic, readonly) NSString *originIdentifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *targetConnectionEndpoint;
@property (nonatomic, readonly) NSString *targetSceneIdentifier;
@property (copy, nonatomic, readonly) UNNotification *notification;
@property (copy, nonatomic, readonly) NSString *actionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2;

@end
