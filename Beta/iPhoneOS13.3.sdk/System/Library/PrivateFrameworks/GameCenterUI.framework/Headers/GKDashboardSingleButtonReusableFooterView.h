/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, UIButton;

@interface GKDashboardSingleButtonReusableFooterView : UICollectionReusableView

{
    NSLayoutConstraint *_buttonLeadingConstraint;
    CDUnknownBlockType _buttonTapHandler;
    UIButton *_button;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSLayoutConstraint *buttonLeadingConstraint;
@property (copy, nonatomic) CDUnknownBlockType buttonTapHandler;

- (void)awakeFromNib;
- (void)buttonTapped:(id)arg1;
- (void)setButtonTitle:(id)arg1 forState:(unsigned long long)arg2;

@end
