/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class TVImageLayout, VUIButton, VUIFocusableTextView, VUILabel, VUIListLockupCollectionViewCellLayout, VUISeparatorView, _TVImageView, _TVMonogramView;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCellView : UIView

{
    VUIListLockupCollectionViewCellLayout *_layout;
    _TVImageView *_imageView;
    _TVMonogramView *_monogramView;
    TVImageLayout *_imageLayout;
    VUILabel *_titleLabel;
    VUILabel *_subTitleLabel;
    VUIFocusableTextView *_descriptionTextView;
    VUIButton *_primaryButton;
    VUIButton *_secondaryButton;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) VUIListLockupCollectionViewCellLayout *layout;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) _TVMonogramView *monogramView;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subTitleLabel;
@property (retain, nonatomic) VUIFocusableTextView *descriptionTextView;
@property (retain, nonatomic) VUIButton *primaryButton;
@property (retain, nonatomic) VUIButton *secondaryButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)prepareForCellReuse;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end
