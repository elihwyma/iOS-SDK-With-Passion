/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUIInviteesViewTimeSlotCell.h>

@interface EKUIInviteesViewProposedTimeCell : EKUIInviteesViewTimeSlotCell

{
    _Bool _conflicts;
}

@property _Bool conflicts;

- (id)participantsTextColor;

@end
