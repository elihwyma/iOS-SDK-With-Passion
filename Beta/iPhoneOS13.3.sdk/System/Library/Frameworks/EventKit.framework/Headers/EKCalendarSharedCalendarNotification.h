/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification

{
    unsigned long long _sharingInvitationResponse;
    unsigned long long _allowedEntityTypes;
}

@property (nonatomic) unsigned long long sharingInvitationResponse;
@property (nonatomic) unsigned long long allowedEntityTypes;

- (id)initWithType:(long long)arg1;
- (id)calendarFromEventStore:(id)arg1;

@end
