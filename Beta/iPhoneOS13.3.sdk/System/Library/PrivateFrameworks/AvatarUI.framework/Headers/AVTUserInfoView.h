/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UILabel, UIVisualEffectView;

@interface AVTUserInfoView : UIView

{
    _Bool _isRegisteredForCategorySizeChange;
    UIColor *_containerBackgroundColor;
    UIVisualEffectView *_userInfoEffectView;
    UILabel *_userInfoLabel;
    NSArray *_activeConstraints;
    struct NSDirectionalEdgeInsets _textInsets;
}

@property (nonatomic) _Bool isRegisteredForCategorySizeChange;
@property (retain, nonatomic) UIVisualEffectView *userInfoEffectView;
@property (retain, nonatomic) UILabel *userInfoLabel;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct NSDirectionalEdgeInsets textInsets;
@property (nonatomic) UIColor *containerBackgroundColor;

+ (double)textVerticalPadding;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (void)_configure;
- (void)contentSizeCategoryDidChange:(id)arg1;

@end
