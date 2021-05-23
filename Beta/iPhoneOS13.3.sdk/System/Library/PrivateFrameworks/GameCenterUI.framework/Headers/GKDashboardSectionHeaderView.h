/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;

@interface GKDashboardSectionHeaderView : UICollectionReusableView

{
    _Bool _onDarkBackground;
    UILabel *_titleLabel;
    NSLayoutConstraint *_leftMarginConstraint;
    UIColor *_titleColor;
    NSLayoutConstraint *_rightMarginConstraint;
}

@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) NSLayoutConstraint *leftMarginConstraint;
@property (nonatomic) _Bool onDarkBackground;

+ (double)defaultHeight;
+ (struct CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2;
+ (double)widthForTitle:(id)arg1 withFont:(id)arg2;

- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;

@end
