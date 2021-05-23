/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView

{
    UILabel *_titleLabel;
    NSLayoutConstraint *_bottomToTitleLastBaselineConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *bottomToTitleLastBaselineConstraint;
@property (copy, nonatomic) NSString *titleText;

+ (id)defaultReuseIdentifier;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)updateConstraintConstants;
- (void)setUpUI;

@end
