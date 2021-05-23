/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

__attribute__((visibility("hidden")))
@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem

{
    unsigned long long _entityType;
}

- (id)init;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (id)initWithEntityType:(unsigned long long)arg1;
- (_Bool)_shouldShowSourceForCalendar:(id)arg1;

@end
