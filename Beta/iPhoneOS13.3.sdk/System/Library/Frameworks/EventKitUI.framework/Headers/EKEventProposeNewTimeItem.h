/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventProposeNewTimeItem : EKEventDetailItem

{
    UITableViewCell *_cell;
    _Bool _cellNeedsUpdate;
}

+ (_Bool)eventShowsProposeTime:(id)arg1;

- (void)reset;
- (void)setCellPosition:(int)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_updateCellIfNeededForWidth:(double)arg1;

@end
