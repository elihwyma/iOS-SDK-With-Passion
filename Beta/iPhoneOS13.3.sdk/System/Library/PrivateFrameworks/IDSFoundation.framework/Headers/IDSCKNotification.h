/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSCKNotification : NSObject

{
    long long _notificationType;
    NSString *_subscriptionID;
}

@property (nonatomic, readonly) long long notificationType;
@property (copy, nonatomic, readonly) NSString *subscriptionID;

+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
+ (Class)__class;

@end
