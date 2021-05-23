/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification

{
    unsigned long long _status;
    unsigned long long _allowedEntityTypes;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long allowedEntityTypes;

- (id)initWithType:(long long)arg1;
- (id)inviteReplyNotificationFromEventStore:(id)arg1;

@end
