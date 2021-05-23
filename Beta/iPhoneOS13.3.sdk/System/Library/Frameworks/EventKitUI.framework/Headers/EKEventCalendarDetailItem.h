/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class EKCalendar, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventCalendarDetailItem : EKEventDetailItem

{
    EKCalendar *_calendar;
    UITableViewCell *_cell;
}

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;
- (_Bool)_calendarCanBeChanged;

@end
