/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUIFavoriteBannerLayout, VUIFavoriteBannerView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell

{
    VUIFavoriteBannerView *_bannerView;
    VUIFavoriteBannerLayout *_bannerLayout;
    double _width;
}

@property (retain, nonatomic) VUIFavoriteBannerView *bannerView;
@property (retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout;
@property (nonatomic) double width;

+ (id)configureCellWithElement:(id)arg1 existingCell:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end
