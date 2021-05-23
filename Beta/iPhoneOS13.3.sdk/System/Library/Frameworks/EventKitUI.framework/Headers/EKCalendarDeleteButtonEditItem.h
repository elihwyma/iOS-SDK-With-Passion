/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarEditItem.h>

@class UITableViewCell;

@interface EKCalendarDeleteButtonEditItem : EKCalendarEditItem

{
    UITableViewCell *_cell;
    id _deleteButtonTarget;
    SEL _deleteButtonAction;
}

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2;

@end
