/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarAbstractSwitchEditItem.h>

@interface EKCalendarIsAffectingAvailabilityEditItem : EKCalendarAbstractSwitchEditItem

- (id)headerTitle;
- (_Bool)underlyingCalendarState;
- (_Bool)cellWrapsLongText;
- (id)cellText;
- (id)descriptionLabelText;
- (void)setUnderlyingCalendarState:(_Bool)arg1;
- (_Bool)configureWithCalendar:(id)arg1;

@end
