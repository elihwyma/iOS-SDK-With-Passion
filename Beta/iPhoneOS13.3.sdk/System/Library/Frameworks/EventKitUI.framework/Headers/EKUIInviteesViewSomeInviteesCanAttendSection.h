/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUIInviteesViewAlternativeTimeSection.h>

@interface EKUIInviteesViewSomeInviteesCanAttendSection : EKUIInviteesViewAlternativeTimeSection

- (id)headerTitle;
- (unsigned long long)initialNumberOfTimeSlotsToShow;
- (id)searcherTimeSlots;
- (Class)customTimeCellClass;
- (_Bool)searchingForMoreTimes;
- (void)searchForMoreTimes;

@end
