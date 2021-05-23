/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, VUIFavoriteViewLayout, VUILabel, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteView : UIView

{
    VUIFavoriteViewLayout *_layout;
    VUILabel *_titleLabel;
    _TVImageView *_logoImageView;
    _TVImageView *_accessoryImageView;
    IKViewElement *_viewElement;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
}

@property (retain, nonatomic) VUIFavoriteViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) _TVImageView *accessoryImageView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)prepareForCellReuse;

@end
