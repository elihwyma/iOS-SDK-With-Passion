/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell

{
    UILabel *_recurrenceLabel;
    double _lastLayoutWidth;
}

- (double)height;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_recurrenceLabel;
- (id)_myTableView;
- (void)setRecurrenceString:(id)arg1;

@end
