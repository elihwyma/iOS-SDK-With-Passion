/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTitledBuddyHeaderView.h>

@class NSLayoutConstraint;

@interface HKTitledContactBuddyHeaderView : HKTitledBuddyHeaderView

{
    NSLayoutConstraint *_titleBaselineConstraint;
}

- (void)traitCollectionDidChange:(id)arg1;
- (double)bottomPadding;
- (void)_updateForCurrentSizeCategory;
- (id)initWithTopInset:(double)arg1 parentViewController:(id)arg2;

@end
