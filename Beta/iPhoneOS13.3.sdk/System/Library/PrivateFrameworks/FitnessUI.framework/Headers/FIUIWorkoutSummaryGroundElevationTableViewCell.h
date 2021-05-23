/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class FIUIDividerView, NSString, UIFont, UILabel;

@interface FIUIWorkoutSummaryGroundElevationTableViewCell : UITableViewCell

{
    UIFont *_labelFont;
    UILabel *_titleLabel;
    UILabel *_minElevationLabel;
    UILabel *_maxElevationLabel;
    FIUIDividerView *_dividerView;
    NSString *_minElevation;
    NSString *_maxElevation;
}

+ (double)rowHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupUI;
- (void)setMinElevationString:(id)arg1;
- (void)setMaxElevationString:(id)arg1;

@end
