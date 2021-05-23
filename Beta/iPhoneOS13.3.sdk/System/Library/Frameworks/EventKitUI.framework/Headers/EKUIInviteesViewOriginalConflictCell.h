/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUIInviteesViewTimeSlotCell.h>

@interface EKUIInviteesViewOriginalConflictCell : EKUIInviteesViewTimeSlotCell

{
    _Bool _conflict;
}

@property _Bool conflict;

- (id)participantsTextColor;
- (id)timeTextColor;

@end
