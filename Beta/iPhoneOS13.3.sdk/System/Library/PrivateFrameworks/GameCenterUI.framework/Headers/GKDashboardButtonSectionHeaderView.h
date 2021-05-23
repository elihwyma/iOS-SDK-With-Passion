/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardSectionHeaderView.h>

@class NSLayoutConstraint, NSString, UIButton;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView

{
    id _buttonTarget;
    SEL _buttonAction;
    UIButton *_button;
    NSLayoutConstraint *_titleToButtonConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
}

@property (nonatomic) UIButton *button;
@property (nonatomic) NSLayoutConstraint *titleToButtonConstraint;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) id buttonTarget;
@property (nonatomic) SEL buttonAction;

+ (double)widthForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (struct CGSize)platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (double)widthForTitle:(id)arg1;
+ (struct CGSize)platformSizeForTitle:(id)arg1;

- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;
- (void)buttonPressed:(id)arg1;

@end
