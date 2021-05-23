/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, IKViewElement, NSArray, NSString, VUIComingSoonBannerCardView, VUIFocusableTextView, VUILabel, VUIMediaTagsView, VUIProductBannerCastInfoView, VUIProductBannerLayout, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductBannerView : UIView

{
    _Bool _prefersUberLayout;
    IKViewElement *_viewElement;
    VUIProductBannerLayout *_layout;
    _TVImageView *_logoImageView;
    VUILabel *_logoTextView;
    VUILabel *_subTextView;
    VUILabel *_episodeInfoView;
    _TVImageView *_coverArtImageView;
    _TVImageView *_decorationImageView;
    _TVImageView *_decorationImageGradientView;
    NSArray *_buttonViews;
    VUIComingSoonBannerCardView *_comingSoonView;
    VUIFocusableTextView *_descriptionTextView;
    VUIProductBannerCastInfoView *_castInfoView;
    VUIMediaTagsView *_tagsView;
    VUIMediaTagsView *_infoTagsView;
    VUILabel *_disclaimerTextView;
    VUILabel *_availabilityTextView;
    _TVImageView *_availabilityImageView;
    CAGradientLayer *_gradientLayer;
    VUISeparatorView *_separatorView;
    VUILabel *_descComputationLabel;
    VUILabel *_tagsComputationLabel;
    double _contentOffset;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) VUILabel *descComputationLabel;
@property (retain, nonatomic) VUILabel *tagsComputationLabel;
@property (nonatomic) double contentOffset;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIProductBannerLayout *layout;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) VUILabel *logoTextView;
@property (retain, nonatomic) VUILabel *subTextView;
@property (retain, nonatomic) VUILabel *episodeInfoView;
@property (retain, nonatomic) _TVImageView *coverArtImageView;
@property (retain, nonatomic) _TVImageView *decorationImageView;
@property (retain, nonatomic) _TVImageView *decorationImageGradientView;
@property (retain, nonatomic) NSArray *buttonViews;
@property (retain, nonatomic) VUIComingSoonBannerCardView *comingSoonView;
@property (retain, nonatomic) VUIFocusableTextView *descriptionTextView;
@property (retain, nonatomic) VUIProductBannerCastInfoView *castInfoView;
@property (retain, nonatomic) VUIMediaTagsView *tagsView;
@property (retain, nonatomic) VUIMediaTagsView *infoTagsView;
@property (retain, nonatomic) VUILabel *disclaimerTextView;
@property (retain, nonatomic) VUILabel *availabilityTextView;
@property (retain, nonatomic) _TVImageView *availabilityImageView;
@property (nonatomic) _Bool prefersUberLayout;
@property (nonatomic, readonly) double topThreshold;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (struct CGSize)_iOS_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct CGSize)_iOS_layoutButtonViewsWithWidth:(double)arg1 origin:(struct CGPoint)arg2 isVerticalLayout:(_Bool)arg3 computationOnly:(_Bool)arg4;

@end
