/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class VUIButton, VUILabel, VUIMediaTagsView, VUIOfferLayout, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIOfferView : UIView

{
    _Bool _isEntitled;
    VUIOfferLayout *_layout;
    _TVImageView *_imageView;
    _TVImageView *_logoView;
    _TVImageView *_appIconView;
    VUILabel *_channelNameLabel;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    VUILabel *_textLabel;
    UIView *_badgeView;
    VUIMediaTagsView *_tagsView;
    VUIButton *_versionsButton;
    UIView *_channelImageBackgroundView;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) VUIOfferLayout *layout;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) _TVImageView *logoView;
@property (retain, nonatomic) _TVImageView *appIconView;
@property (retain, nonatomic) VUILabel *channelNameLabel;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) VUIMediaTagsView *tagsView;
@property (retain, nonatomic) VUIButton *versionsButton;
@property (retain, nonatomic) UIView *channelImageBackgroundView;
@property (nonatomic) _Bool isEntitled;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)prepareForCellReuse;
- (_Bool)_shouldDisplaySeparator;
- (double)_chinHeightForSize:(struct CGSize)arg1;

@end
