/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionView : UIView

{
    _Bool _disabled;
    _Bool _destructive;
    UIStackView *_labelStackView;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    NSLayoutConstraint *_topToFirstBaseline;
    NSLayoutConstraint *_lastBaselineToBottom;
    NSLayoutConstraint *_trailingViewCenterXToTrailing;
    NSLayoutConstraint *_labelStackViewTrailingToTrailingViewCenterX;
    NSLayoutConstraint *_nonSymbolImageWidth;
    NSLayoutConstraint *_nonSymbolImageHeight;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *topToFirstBaseline;
@property (retain, nonatomic) NSLayoutConstraint *lastBaselineToBottom;
@property (retain, nonatomic) NSLayoutConstraint *trailingViewCenterXToTrailing;
@property (retain, nonatomic) NSLayoutConstraint *labelStackViewTrailingToTrailingViewCenterX;
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageWidth;
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageHeight;
@property (nonatomic, readonly) UIView *trailingView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool destructive;

- (void)traitCollectionDidChange:(id)arg1;
- (id)_imageTintColor;
- (void)updateConstraints;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (id)_primaryTitleLabel;
- (id)_subtitleLabel;
- (id)_imageViewForImage:(id)arg1;
- (struct CGSize)_maxImageSize;
- (id)_subtitleTextColor;
- (id)_subtitleLabelFilterForCurrentTraits;
- (void)_updateAppearanceForStateChange;
- (id)_colorReflectingActionStateForColor:(id)arg1;

@end
