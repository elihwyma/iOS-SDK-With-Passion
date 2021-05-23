/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUITableViewCell.h>

@class TwoPartTextLabel, UIColor, UILabel;

@protocol EKCellShortener;

@interface PreferencesTwoPartValueCell : EKUITableViewCell

{
    TwoPartTextLabel *_twoPartLabel;
    unsigned int _notifiedShort;
    UILabel *_largePart2TextLabel;
    _Bool _strikeThroughLargeDetailTextLabel;
    _Bool _strikeThroughLargePart2TextLabel;
    id <EKCellShortener> _shortener;
}

@property (retain, nonatomic, readonly) TwoPartTextLabel *twoPartTextLabel;
@property (weak, nonatomic) id <EKCellShortener> shortener;
@property (retain, nonatomic, readonly) UIColor *valueColor;
@property (retain, nonatomic, readonly) UILabel *largePart2TextLabel;
@property (nonatomic) _Bool strikeThroughLargeDetailTextLabel;
@property (nonatomic) _Bool strikeThroughLargePart2TextLabel;

- (id)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)checkValueWidths;
- (void)_layoutSubviewsCore;
- (void)shorten;

@end
