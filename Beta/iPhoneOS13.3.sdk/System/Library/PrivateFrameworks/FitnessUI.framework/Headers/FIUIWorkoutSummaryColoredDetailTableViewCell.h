/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIColor, UIFont, UILabel, UIView;

@interface FIUIWorkoutSummaryColoredDetailTableViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_secondTitleLabel;
    UILabel *_secondDetailLabel;
    UILabel *_noDataLabel;
    UIFont *_detailFont;
    UIFont *_suffixFont;
    UIView *_dividerView;
    NSString *_detailString;
    NSString *_suffixString;
    UIColor *_textColor;
    _Bool _shouldForceLTRForDetailString;
    _Bool _showBackgroundButton;
    UIButton *_customAccessoryButton;
    UIView *_optionalButtonView;
}

@property (retain, nonatomic) UIView *optionalButtonView;
@property (nonatomic) _Bool showBackgroundButton;
@property (retain, nonatomic) UIButton *customAccessoryButton;

+ (double)rowHeightWithNoDataString:(id)arg1;
+ (double)rowHeightWithSecondMetric;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTitleString:(id)arg1;
- (void)_setupUI;
- (void)_setDefaultValueFontSizes;
- (void)_resizeFontsIfNeededToFitWidth:(double)arg1;
- (void)setLineHidden:(_Bool)arg1;
- (void)setDetailString:(id)arg1 suffixString:(id)arg2 textColor:(id)arg3 shouldForceLTRForDetailString:(_Bool)arg4;
- (void)setSecondMetricTitle:(id)arg1 detailString:(id)arg2 detailColor:(id)arg3;
- (void)setNoDataString:(id)arg1 textColor:(id)arg2;

@end
