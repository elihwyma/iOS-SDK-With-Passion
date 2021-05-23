/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKBadge, NSLayoutConstraint, UILabel, _WDRoundedCornerView;

__attribute__((visibility("hidden")))
@interface WDBadgedTableViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    HKBadge *_badge;
    UILabel *_badgeLabel;
    _WDRoundedCornerView *_badgeView;
    NSLayoutConstraint *_badgeViewToAccessoryViewConstraint;
}

@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) _WDRoundedCornerView *badgeView;
@property (retain, nonatomic) NSLayoutConstraint *badgeViewToAccessoryViewConstraint;
@property (nonatomic, readonly) _Bool _shouldShowBadge;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (copy, nonatomic) HKBadge *badge;

+ (id)defaultReuseIdentifier;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateForCurrentSizeCategory;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_setBadge:(id)arg1;

@end
