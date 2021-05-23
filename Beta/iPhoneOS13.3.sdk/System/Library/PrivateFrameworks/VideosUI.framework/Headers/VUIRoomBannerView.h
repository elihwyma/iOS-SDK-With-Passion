/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, VUIFocusableTextView, VUILabel, VUIRoomBannerLayout, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIRoomBannerView : UIView

{
    IKViewElement *_viewElement;
    VUILabel *_titleLabel;
    VUIFocusableTextView *_descriptionLabel;
    VUIRoomBannerLayout *_layout;
    _TVImageView *_backgroundImage;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUIFocusableTextView *descriptionLabel;
@property (retain, nonatomic) VUIRoomBannerLayout *layout;
@property (retain, nonatomic) _TVImageView *backgroundImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end
