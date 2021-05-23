/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <UserNotificationsServer/UNSNotificationRecordUpdate.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate

{
    _Bool _shouldRepost;
    UNSNotificationRecord *_replacedNotificationRecord;
}

@property (nonatomic, readonly) UNSNotificationRecord *replacedNotificationRecord;
@property (nonatomic, readonly) _Bool shouldRepost;

+ (id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(_Bool)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(_Bool)arg3;

@end
