/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarEditItem.h>

@class EKSource;

@interface EKCalendarAccountEditItem : EKCalendarEditItem

{
    EKSource *_limitedToSource;
}

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)currentSource;
- (_Bool)canAddCalendarToMoreThanOneAccount;
- (id)initLimitedToSource:(id)arg1;
- (_Bool)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;

@end
