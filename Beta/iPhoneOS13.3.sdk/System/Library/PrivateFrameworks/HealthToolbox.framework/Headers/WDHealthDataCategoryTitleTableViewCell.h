/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDHealthDataCategoryTitleTableViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    long long _headerType;
    double _lastBaselineToBottomDistance;
    NSString *_titleText;
}

@property (copy, nonatomic) NSString *titleText;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHeaderType:(long long)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_updateFont;
- (id)_titleLabelFont;
- (void)_setupUI;
- (double)_titleLabelTopToFirstBaseline;
- (double)_titleLabelLastBaselineToBottom;
- (id)initWithHeaderType:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLastBaselineToBottomDistance:(double)arg1;

@end
