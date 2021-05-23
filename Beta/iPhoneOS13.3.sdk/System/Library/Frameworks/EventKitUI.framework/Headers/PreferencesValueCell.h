/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUITableViewCell.h>

@protocol EKCellShortener;

@interface PreferencesValueCell : EKUITableViewCell

{
    id <EKCellShortener> _shortener;
}

@property (weak, nonatomic) id <EKCellShortener> shortener;

- (void)layoutSubviews;
- (void)_checkValueWidth;

@end
