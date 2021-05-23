/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUITableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUITableViewCell

{
    UILabel *_additionalDetailLabel;
    id _source;
}

@property (retain, nonatomic, readonly) UILabel *additionalDetailLabel;
@property id source;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)leftFrame:(struct CGRect)arg1 overlapsRightFrame:(struct CGRect)arg2 difference:(double *)arg3;

@end
