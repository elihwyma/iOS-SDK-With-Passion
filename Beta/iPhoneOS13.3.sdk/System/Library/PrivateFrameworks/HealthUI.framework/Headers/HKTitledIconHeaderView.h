/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface HKTitledIconHeaderView : UIView

{
    _Bool _centersSubtitle;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_iconImage;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *iconImageTint;
@property (nonatomic) _Bool centersSubtitle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_titleFont;
- (void)_updateFont;
- (void)setLayoutMarginsWithTableView:(id)arg1;
- (id)_healthIconImage;
- (struct CGSize)_sizeThatFitsLabel:(id)arg1 containerSize:(struct CGSize)arg2;
- (double)_verticalOffsetForTitle;
- (void)_positionSubtitleLabel;
- (double)_verticalOffsetForSubtitle;

@end
