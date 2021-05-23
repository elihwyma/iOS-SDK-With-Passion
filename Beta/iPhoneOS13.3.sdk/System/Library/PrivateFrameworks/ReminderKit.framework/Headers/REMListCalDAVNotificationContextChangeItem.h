/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, REMListChangeItem;

@interface REMListCalDAVNotificationContextChangeItem : NSObject

{
    REMListChangeItem *_listChangeItem;
}

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic, readonly) NSArray *calDAVNotifications;

- (id)initWithListChangeItem:(id)arg1;
- (void)_addCalDAVNotification:(id)arg1;
- (id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4;
- (void)removeCalDAVNotication:(id)arg1;
- (void)clearCalDAVNotifications;
- (void)updateCalDAVNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
