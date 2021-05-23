/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, VUILabel, VUISeparatorView, VUISportsProductBannerLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUISportsProductBannerView : UIView

{
    VUISportsProductBannerLayout *_layout;
    VUILabel *_titleLabel;
    NSArray *_rowLabels;
    NSArray *_scoreLabels;
    NSArray *_descriptionLabels;
    VUILabel *_footerLabel;
    NSArray *_buttonViews;
    VUILabel *_availabilityTextView;
    _TVImageView *_availabilityImageView;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) VUISportsProductBannerLayout *layout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) NSArray *rowLabels;
@property (retain, nonatomic) NSArray *scoreLabels;
@property (retain, nonatomic) NSArray *descriptionLabels;
@property (retain, nonatomic) VUILabel *footerLabel;
@property (retain, nonatomic) NSArray *buttonViews;
@property (retain, nonatomic) VUILabel *availabilityTextView;
@property (retain, nonatomic) _TVImageView *availabilityImageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_iOS_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (double)_totalMaxScoreWidthWithAvailableWidth:(double)arg1;
- (double)_maxScoreWidthForColumn:(unsigned long long)arg1 availableWidth:(double)arg2;
- (void)_layoutLabels:(id)arg1 scoreLabels:(id)arg2 withOrigin:(struct CGPoint)arg3 maxWidth:(double)arg4;
- (void)_layoutLabels:(id)arg1 withOrigin:(struct CGPoint)arg2 maxWidth:(double)arg3;
- (void)_layoutScoresWithOrigin:(struct CGPoint)arg1 availableWidth:(double)arg2 padding:(double)arg3;
- (void)_layoutButtonsWithOrigin:(struct CGPoint)arg1 buttonHeight:(double)arg2 buttonWidth:(double)arg3 spacing:(double)arg4;

@end
