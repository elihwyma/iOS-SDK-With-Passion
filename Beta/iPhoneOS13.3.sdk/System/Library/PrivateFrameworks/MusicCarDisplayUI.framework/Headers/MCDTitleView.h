/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIFont, UILabel;

@interface MCDTitleView : UIView

{
    NSLayoutConstraint *_badgeWidthConstraint;
    _Bool _explicitTrack;
    _Bool _shouldUseMusicExplicitGlyph;
    UIFont *_font;
    UILabel *_titleLabel;
    UILabel *_explicitLabel;
}

@property (retain, nonatomic) UILabel *explicitLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, getter=isExplicitTrack) _Bool explicitTrack;
@property (nonatomic) _Bool shouldUseMusicExplicitGlyph;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)setupConstraints;
- (void)_updateExplicitTreatmentString;
- (id)_createLabelWithTextAlignment:(long long)arg1;

@end
