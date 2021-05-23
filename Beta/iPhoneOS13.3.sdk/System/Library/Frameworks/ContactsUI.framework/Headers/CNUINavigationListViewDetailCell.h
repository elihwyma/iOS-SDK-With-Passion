/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNUINavigationListViewCell.h>

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell

{
    long long _contentAlignment;
}

@property (nonatomic) long long contentAlignment;

+ (id)reuseIdentifier;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (struct CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;

- (void)updateConstraints;
- (double)minimumContentHeight;
- (double)contentViewBottomAnchorConstraintConstant;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (void)loadContentViewConstraints;
- (void)applyStyle;

@end
