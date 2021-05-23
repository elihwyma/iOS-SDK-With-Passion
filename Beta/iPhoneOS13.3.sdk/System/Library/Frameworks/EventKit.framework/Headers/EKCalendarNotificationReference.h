/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKCalendarNotification, EKEventStore, EKObjectID, NSDate;

@interface EKCalendarNotificationReference : NSObject

{
    NSDate *_date;
    EKEventStore *_eventStore;
    EKCalendarNotification *_notification;
    int _type;
    EKObjectID *_objectID;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) EKCalendarNotification *notification;
@property (nonatomic, readonly) EKObjectID *objectID;

- (id)description;
- (id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4;
- (long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2;
- (id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3;

@end
