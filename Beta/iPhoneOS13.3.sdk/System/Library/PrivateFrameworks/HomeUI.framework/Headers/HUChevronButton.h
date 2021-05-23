/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIStackView;

@interface HUChevronButton : UIControl

{
    UILabel *_titleLabel;
    UIStackView *_containerView;
    UIImageView *_chevronImageView;
}

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
