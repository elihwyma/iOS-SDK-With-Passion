/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class HKSource, NSLayoutConstraint, UITextView, _HKClinicalBulletedListLayoutManager;

@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell

{
    HKSource *_source;
    NSLayoutConstraint *_superviewTopToContentsTextViewFirstBaselineConstraint;
    NSLayoutConstraint *_contentsTextViewLastBaselineToSuperviewBottomConstraint;
    UITextView *_contentsTextView;
    _HKClinicalBulletedListLayoutManager *_bulletLayoutManager;
}

@property (nonatomic, readonly) NSLayoutConstraint *superviewTopToContentsTextViewFirstBaselineConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentsTextViewLastBaselineToSuperviewBottomConstraint;
@property (nonatomic, readonly) UITextView *contentsTextView;
@property (nonatomic, readonly) _HKClinicalBulletedListLayoutManager *bulletLayoutManager;
@property (weak, nonatomic) HKSource *source;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateForCurrentContentSizeCategory;
- (void)_setUpConstraints;
- (id)_titleParagraphStyle;
- (id)_localizedTitleString;
- (void)_setUpSubviews;
- (id)_createContentsTextViewWithLayoutManager:(id)arg1;
- (id)_attributedTitleString;
- (id)_attributedStringForBulletAtIndex:(long long)arg1;
- (id)_bodyEmph;
- (id)_bulletContentFont;
- (id)_bulletContentParagraphStyle;
- (id)_localizedBulletContentStringForBulletAtIndex:(long long)arg1;
- (id)_attributedStringForBullet;
- (id)_bulletFont;
- (id)_attributedContentsTextViewStringForCurrentContentSizeCategory;

@end
