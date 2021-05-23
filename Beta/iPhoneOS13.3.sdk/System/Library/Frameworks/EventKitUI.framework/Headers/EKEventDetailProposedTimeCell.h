/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class EKCalendarEventInvitationNotificationAttendee, EKEvent, EKEventDetailsHighlightControl;

__attribute__((visibility("hidden")))
@interface EKEventDetailProposedTimeCell : EKEventDetailCell

{
    EKCalendarEventInvitationNotificationAttendee *_attendee;
    EKEventDetailsHighlightControl *_control;
    EKEvent *_event;
}

+ (_Bool)requiresConstraintBasedLayout;

- (_Bool)update;
- (_Bool)shouldDisplayForEvent;
- (_Bool)hasCustomLayout;
- (id)initWithEvent:(id)arg1 andAttendee:(id)arg2;

@end
