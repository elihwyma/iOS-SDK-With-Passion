/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, VUIFavoriteBannerLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerView : UIView

{
    VUIFavoriteBannerLayout *_layout;
    UIView *_backgroundView;
    NSArray *_backgroundImageLogos;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
}

@property (retain, nonatomic) VUIFavoriteBannerLayout *layout;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSArray *backgroundImageLogos;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForCellReuse;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct CGSize)imageSizeForBannerStyle:(unsigned long long)arg1;
- (id)_generateSiderowImagePointsForSize:(struct CGSize)arg1;
- (id)_generateSingleRowImagePoints;
- (id)_generatePlainWeaveImagePointsForSize:(struct CGSize)arg1;
- (id)_generatePointsForPlainWeaveSide:(double)arg1 containerRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 direction:(unsigned long long)arg4;

@end
