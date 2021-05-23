/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKDateCache, HKDisplayCategory, HKGradientView, NSString, UIImageView, UILabel;

@protocol WDCurrentValueTableViewCellDelegate, WDDashboardCellPrimaryValueSource;

__attribute__((visibility("hidden")))
@interface WDCurrentValueTableViewCell : UITableViewCell

{
    HKGradientView *_backgroundGradientView;
    UIImageView *_categoryIcon;
    UILabel *_titleLabel;
    UILabel *_currentValueLabel;
    UILabel *_contextLabel;
    HKDateCache *_dateCache;
    HKDisplayCategory *_displayCategory;
    id <WDCurrentValueTableViewCellDelegate> _delegate;
    unsigned long long _marginMode;
    id <WDDashboardCellPrimaryValueSource> _primaryValueSource;
}

@property (retain, nonatomic) id <WDDashboardCellPrimaryValueSource> primaryValueSource;
@property (nonatomic) unsigned long long marginMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeight;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutSubviews;
- (void)_updateUI;
- (void)_setupSubviews;
- (void)primaryValueSourceDidUpdate:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 dateCache:(id)arg2 delegate:(id)arg3;
- (void)setDisplayCategory:(id)arg1;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)_updateTimeBasedUI;
- (struct CGRect)forceTouchFrame;
- (void)_layoutSubviewsForLargeText;
- (id)_currentValueTextWithFontScaledBy:(double)arg1;
- (id)_titleLabelTextWithFontScaledBy:(double)arg1;
- (void)_adjustValueLabelSizeForLargeTextForWidth:(double)arg1;
- (double)calculatedContentHeightForLargeTextWithSize:(struct CGSize)arg1;
- (id)_contextLabelText;
- (void)_updateBackgroundGradient;

@end
