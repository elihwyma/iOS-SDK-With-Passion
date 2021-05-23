/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class VUILabel, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUISeasonPickerCollectionViewCell : VUIListCollectionViewCell

{
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    VUILabel *_secondSubtitleLabel;
    _TVImageView *_seasonImageView;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
}

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *secondSubtitleLabel;
@property (retain, nonatomic) _TVImageView *seasonImageView;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
