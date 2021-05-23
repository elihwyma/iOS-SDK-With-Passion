/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class VUIImageView, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell

{
    VUIImageView *_imageView;
    _Bool _hideChevron;
    VUILabel *_titleLabel;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
}

@property (nonatomic, readonly) VUILabel *titleLabel;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (nonatomic, readonly) VUISeparatorView *bottomSeparatorView;
@property (nonatomic) _Bool hideChevron;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
