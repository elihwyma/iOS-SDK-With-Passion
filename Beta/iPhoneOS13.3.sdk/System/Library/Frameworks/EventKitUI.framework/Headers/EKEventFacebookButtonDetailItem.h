/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventFacebookButtonDetailItem : EKEventDetailItem

{
    UITableViewCell *_cell;
}

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)layoutCellsForWidth:(double)arg1 position:(int)arg2;

@end
