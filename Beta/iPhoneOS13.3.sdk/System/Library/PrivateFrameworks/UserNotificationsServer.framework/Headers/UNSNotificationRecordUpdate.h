/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject

{
    UNSNotificationRecord *_notificationRecord;
}

@property (nonatomic, readonly) UNSNotificationRecord *notificationRecord;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithNotificationRecord:(id)arg1;

@end
