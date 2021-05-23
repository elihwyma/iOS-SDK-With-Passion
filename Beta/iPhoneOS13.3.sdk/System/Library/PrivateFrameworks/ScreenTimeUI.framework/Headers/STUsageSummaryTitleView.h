/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, STUsageReport, UIImageView, UILabel;

@interface STUsageSummaryTitleView : UIView

{
    _Bool _hasMultilineLayout;
    _Bool _useVibrancy;
    _Bool _truncateAverageLabel;
    unsigned long long _usageItemType;
    STUsageReport *_usageReport;
    double _previousWidth;
    UILabel *_titleLabel;
    UILabel *_usageLabel;
    UIImageView *_notificationDot;
    UIImageView *_deltaAverageImageView;
    UILabel *_deltaAverageLabel;
    NSArray *_variableConstraints;
    NSLayoutConstraint *_deltaAverageImageViewVerticalPosition;
    NSLayoutConstraint *_deltaAverageImageViewWidthConstraint;
    NSLayoutConstraint *_deltaAverageImageViewHeightConstraint;
}

@property (readonly) _Bool useVibrancy;
@property (readonly) _Bool truncateAverageLabel;
@property _Bool hasMultilineLayout;
@property double previousWidth;
@property (readonly) UILabel *titleLabel;
@property (readonly) UILabel *usageLabel;
@property (retain) UIImageView *notificationDot;
@property (readonly) UIImageView *deltaAverageImageView;
@property (readonly) UILabel *deltaAverageLabel;
@property (retain) NSArray *variableConstraints;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewVerticalPosition;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewWidthConstraint;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewHeightConstraint;
@property (nonatomic) unsigned long long usageItemType;
@property (retain, nonatomic) STUsageReport *usageReport;

- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (void)_setupSubviews;
- (void)_setUpConstraints;
- (id)initWithVibrancy:(_Bool)arg1 usageItemType:(unsigned long long)arg2 truncateAverageLabel:(_Bool)arg3;
- (void)_updateTitleLabel;
- (void)_updateUsageLabel;
- (void)_updateDeltaAverageViews;
- (_Bool)_shouldHaveMultilineLayoutForLineWidth:(double)arg1;

@end
